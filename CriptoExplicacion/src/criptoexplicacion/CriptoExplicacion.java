/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package criptoexplicacion;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.security.KeyFactory;
import java.security.KeyPair;
import java.security.KeyPairGenerator;
import java.security.NoSuchAlgorithmException;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.spec.InvalidKeySpecException;
import java.security.spec.RSAPrivateKeySpec;
import java.security.spec.RSAPublicKeySpec;
import java.util.Base64;
import javax.crypto.Cipher;
import javax.crypto.KeyGenerator;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.SecretKey;
import javax.swing.JOptionPane;

/**
 *
 * @author enzoq
 */
public class CriptoExplicacion {

    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintStream out = System.out;
    static Cipher cipherSymetric;

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        try {
            int opc;

            do {

                mostrarMenu();
                opc = leerOpcion();
                ejecutarAccion(opc);

            } while (opc != 3);
        } catch (Exception e) {
            out.println(e.getMessage());

        }
    }

    public static void mostrarMenu() throws IOException {

        out.println();

        out.println("   ---| ALGORITMOS CRIPTOGRÁFICOS |---");
        out.println("1. ---|         ASIMÉTRICOS       |--- ");
        out.println("2. ---|         SIMÉTRICOS        |--- ");
        out.println("3. ---|           SALIR           |--- ");

        out.println();
    }

    public static int leerOpcion() throws Exception {

        int opcion;

        opcion = Integer.parseInt(JOptionPane.showInputDialog("Seleccione acción a realizar"));

        if (opcion < 0 || opcion > 3) {

            throw new Exception("OPCIÓN INVÁLIDA");

        }

        return opcion;
    }

    public static void ejecutarAccion(int pOpcion) throws Exception {

        switch (pOpcion) {
            case 1:
                asymmetric();
                break;
            case 2:
                symmetric();
                break;

            case 3:
                out.println("Cerrando aplicación");
                break;

            default:
                out.println("Opcion invalida");
                throw new Exception("OPCION INVALIDA");
        }
    }

    public static void asymmetric() throws InvalidKeySpecException, NoSuchAlgorithmException, Exception {
        KeyPair keyPair = buildKeyPair();
        PublicKey pubKey = keyPair.getPublic();
        PrivateKey privateKey = keyPair.getPrivate();

        String text = "Mensaje";
        out.println("Texto antes de ser encriptado: " + text);

        byte[] encryptedSignedText = encryptAsymmetric(privateKey, text);
        out.println("Texto encriptado: ");
        out.println(new String(encryptedSignedText));

        byte[] decryptedText = decryptAsymmetric(pubKey, encryptedSignedText);
        out.println("Texto desencriptado: " + new String(decryptedText));
    }

    public static KeyPair buildKeyPair() throws NoSuchAlgorithmException {
        final int keySize = 2048;
        KeyPairGenerator keyPairGenerator = KeyPairGenerator.getInstance("RSA");
        keyPairGenerator.initialize(keySize);
        return keyPairGenerator.genKeyPair();
    }

    public static byte[] encryptAsymmetric(PrivateKey privateKey, String message) throws Exception {
        Cipher cipher = Cipher.getInstance("RSA");
        cipher.init(Cipher.ENCRYPT_MODE, privateKey);

        return cipher.doFinal(message.getBytes());
    }

    public static byte[] decryptAsymmetric(PublicKey publicKey, byte[] encrypted) throws Exception {
        Cipher cipher = Cipher.getInstance("RSA");
        cipher.init(Cipher.DECRYPT_MODE, publicKey);

        return cipher.doFinal(encrypted);
    }

    public static void symmetric() throws NoSuchAlgorithmException, Exception {
        KeyGenerator keyGenerator = KeyGenerator.getInstance("AES");
        keyGenerator.init(128);
        SecretKey secretKey = keyGenerator.generateKey();
        cipherSymetric = Cipher.getInstance("AES");

        String text = "Mensaje";
        out.println("Texto antes de ser encriptado: " + text);

        String encryptedText = encryptSymetric(text, secretKey);
        out.println("Texto encriptado: " + encryptedText);

        String decryptedText = decryptSymetric(encryptedText, secretKey);
        out.println("Texto desencriptado: " + decryptedText);
    }

    public static String encryptSymetric(String pText, SecretKey pSecretKey) throws Exception {
        byte[] plainTextByte = pText.getBytes();
        cipherSymetric.init(Cipher.ENCRYPT_MODE, pSecretKey);
        byte[] encryptedByte = cipherSymetric.doFinal(plainTextByte);
        Base64.Encoder encoder = Base64.getEncoder();
        String encryptedText = encoder.encodeToString(encryptedByte);
        return encryptedText;
    }

    public static String decryptSymetric(String pEncryptedText, SecretKey pSecretKey) throws Exception {

        Base64.Decoder decoder = Base64.getDecoder();
        byte[] encryptedTextByte = decoder.decode(pEncryptedText);
        cipherSymetric.init(Cipher.DECRYPT_MODE, pSecretKey);
        byte[] decryptedByte = cipherSymetric.doFinal(encryptedTextByte);
        String decryptedText = new String(decryptedByte);
        return decryptedText;
    }

}
