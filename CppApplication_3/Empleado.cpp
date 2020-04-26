

//
//  empleado.cpp
//  proyecto 1 verano
//
//  Created by Rafa Cerdas on 12/11/19.
//  Copyright © 2019 Rafa Cerdas. All rights reserved.
//

#include "empleado.h"// esto es lo mismo que el inlcude empleado.cpp


Empleado::Empleado()
{
   nombre=" ";
   
    salario=0;
    puesto=" ";
    estado=false;
    ocupacion=0;
}

Empleado::Empleado(string n, string id, float s, string p,bool e,int oc)
{
    nombre=n;
    this->id=id;
    salario=s;
    puesto=p;
    estado=e;
    ocupacion=oc;
}
void Empleado::setNombre(string n)
{
    this->nombre=n;
}
string Empleado::getNombre()
{
    return nombre;
}


void Empleado::setId(string id)
{
    this->id=id;
}
string Empleado::getId()
{
    return id;
}
void Empleado::setSalario(float s)
{
    salario=s;
}
float Empleado::getSalario()
{
    return salario;
}
void Empleado::setPuesto(string p)
{
    puesto=p;
}

string Empleado::getPuesto()
{
    return puesto;
}
void Empleado::setEstado(bool e)
{
    estado=e;
}
bool Empleado::getEstado()
{
    return estado;
}

void Empleado::setOcupacion(int oc)
{
    ocupacion=oc;
}
int Empleado::getOcupacion()
{
    return ocupacion;
}

//1.2. Verificar si el salario es inferior al mínimo: Este proceso debe revisar un salario especifico de
//    un empleado con base en su identificador único, y debe indicar si el salario es menor o no
void Empleado::verificaSalarioMen()
{
    char valor='0';
     
    do{ cout<< "prueba"<<endl;
        
        cout <<"Digite el estado "<<endl;
        cout<<"digite 1 si usted es Trabajador en ocupación NO Calificada"<<endl;
        cout<<"digite 2 si usted es Trabajador en ocupación Semi-calificada"<<endl;
        cout<<"digite 3 si usted es Trabajador en ocupación Calificada"<<endl;
        
        cin>>valor;
    Empleado::setOcupacion(valor);
      switch (valor)
      {
          case '1':
          {
             

                         system("cls");
                          cout << endl;
                          cout << endl;
                          cout << "case 1" << endl;
              if (Empleado::getSalario() < TONC)
          {
              Empleado::setEstado(true);
              cout<<Empleado::getEstado()<<endl;
       
          }
          else
          {
              Empleado::setEstado(false);
          cout<<Empleado::getEstado()<<endl;
       
          }
                          cout << endl;
                          cout << endl;
                          system("pause");
                          system("cls");
                          break;
                          break;
          
          }
          case '2':
          {
              system("cls");
              cout << endl;
              cout << endl;
              cout << "case 2" << endl;



          
         if (Empleado::getSalario() < TOSC)
         {
             Empleado::setEstado(true);
             
            cout<<Empleado::getEstado()<<endl;
         


         }
         
         else
         {
             Empleado::setEstado(false);
         cout<<Empleado::getEstado()<<endl;
         }





                          cout << endl;
                          cout << endl;
                          system("pause");
                          system("cls");
                          break;
                          break;

          }
          case '3':
          {

                          system("cls");
                          cout << endl;
                          cout << endl;
                          cout << "case 3" << endl;
                          cout << endl;

   
       if (Empleado::getSalario() < TOC)
       {
           
           Empleado::setEstado(true);
           cout<<Empleado::getEstado()<<endl;
           
           
         
           
        
       }
       else
       {
           Empleado::setEstado(false);
       cout<<Empleado::getEstado()<<endl;
       }

                          
            cout << endl;
            cout << endl;
            system("pause");
            system("cls");

              break;
              break;

              
          }
              case '4':

              system("cls");
              cout << endl;
              cout << endl;
              cout << "case 4" << endl;// regresa al menu principal (tengo que arreglarlo porque no funciona asi solo tengo que cambiar algo pero pongo esto para no olvidar arreglarlo)
              cout << endl;// creo que se arregla quitando esta opcion pero lo arreglo ahora
              cout << endl;
              system("pause");
              system("cls");
              break;
              break;
              
          default:
          {
              system("cls");
              cout << endl;
              
              cout << endl;
              cout << "ha ingresado una opcion que no esta dentro de las opciones aceptadas, por favor intentelo de nuevo." << endl;
              cout << endl;
              
              cout << endl;
              system("pause");
              system("cls");
                      
      }
            
        }
        

    } while (valor!='4') ;{}
    
}
                      
              



//1.3. Incrementar salarios por debajo del mínimo: utilizando el método del apartado 1.2 se verifica si
//       el salario del empleado es menor al mínimo establecido por ley, en caso que esto sea cierto, se
//       debe, utilizando la tabla de salarios mínimos, asignar al empleado el monto mínimo establecido
//       por ley
void Empleado::incrementaSalariosBajos()
{
    
    if (getOcupacion()==1)
    {
        
        
        if (Empleado::getEstado()==true )
        {
            cout <<"su salario es inferior a el que la ley demanda:"<<endl;
            cout <<"se efectuara un ajuste al monto actual :"<<endl;
            Empleado::setSalario(TONC);
            cout <<"el ajuste de salario se ha efectuado"<<endl;
            cout <<"el nuevo salario es:"<<endl;
            cout <<Empleado::getSalario()<<endl;
        }
    }
        
    if (getOcupacion()==2)
    {
        if (Empleado::getEstado()==true)
        {
            cout <<"su salario es inferior a el que la ley demanda:"<<endl;
            cout <<"se efectuara un ajuste al monto actual :"<<endl;

            Empleado::setSalario(TOSC);
            cout <<"el ajuste de salario se ha efectuado"<<endl;
            cout <<"el nuevo salario es:"<<endl;
            cout <<Empleado::getSalario()<<endl;
        }
    }
    
    if (getOcupacion()==3)
    {
        if (Empleado::getEstado()==true)
        {
            cout <<"su salario es inferior a el que la ley demanda:"<<endl;
            cout <<"se efectuara un ajuste al monto actual :"<<endl;

            Empleado::setSalario(TOC);
            cout <<"el ajuste de salario se ha efectuado"<<endl;
            cout <<"el nuevo salario es:"<<endl;
            cout <<Empleado::getSalario()<<endl;
        }
    }
}
    
string Empleado::toString()
{
    stringstream s;
    s<<"el nombre es :"<<getNombre()<<endl;
    s<<"la identificacion es :"<<getId()<<endl;
    s<<"el nombre es :"<<getNombre()<<endl;
    s<<"el salaro  es :"<< getSalario()<<endl;
    s<<"el puesto es :"<<getPuesto()<<endl;;
    s<<"el estado es :"<<getEstado()<<endl;;
   s<<"la ocupacion es:"<<getOcupacion()<<endl;
    
    
    return s.str();
}

void Empleado::inicializarDato()
{
    cout <<"Digite el nombre del empleado:"<< endl;
    cin>>this->nombre;
    
    
    cout <<"Digite la identificacion del empleado:"<< endl;
    cin>>this->id;
  
    cout <<"Digite el salario del empleado:"<< endl;
    cin>>this->salario;
   
    cout <<"Digite el puesto que desempeña el empleado:"<<endl;
    cin>>this->puesto;
    
    
    
}

Empleado::~Empleado(){}

