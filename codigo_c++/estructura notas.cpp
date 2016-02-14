#include <iostream.h>
#include <conio.h>

struct marco
{
  char nom[100];
  float prom;
};

marco mar[10];
main ()
{
 int cantidad;
 int n;
 int i;
 int j;
 float acum;
 cout<<" INGRESE CANTIDAD DE ALUMNOS : ";
 cin>>cantidad;
 cout<<endl;
 cout<<" LISTA DE ALUMNOS ";
 cout<<endl;
 cout<<"-----------------";
 cout<<endl<<endl;
 for(i=0;i<cantidad;i++)
 {
  cout<<" INGRESE EL NOMBRE DEL ALUMNO  "<<i+1<<" : ";
  cin>>mar[i].nom;
  cout<<endl;
  cout<<endl;
  acum=0;
  for(j=0;j<7;j++)
  {
  cout<<" INGRESE LA NOTA"<<i+1<<" DEL ALUMNO  : ";
  cin>>n;
  cout<<endl;
  acum=acum+n;
  mar[i].prom=acum/7;
                  
  }
  
  acum=0;
  cout<<endl;
  cout<<endl;
 }
   
  cout<<" REGISTRO DE NOTAS DE LOS WIHUANEROS ";
  cout<<endl;
  cout<<"------------------------------------";
  cout<<endl;
  cout<<endl;
       cout<<" ALUMNO "<<"  "<<    " ESTADO  " <<  " PROMEDIO FINAL ";
       cout<<endl;
       cout<<" "<<"------" << "   "<<   "-------"   <<"  "<<  "  --------------" ;
  for(i=0;i<cantidad;i++)
  {    
      if(mar[i].prom>10.5)
      {

       cout<<endl;
       cout<<"  "<<mar[i].nom <<"    "<<  " aprobo "<<"    "<<   mar[i].prom;          
      }
      else
      {

       cout<<endl;
       cout<<"  "<<mar[i].nom <<"      "<<  " desaprobo "<<"    "<<   mar[i].prom;                      
      }
      cout<<endl;                 
  }
 
 
getch();      
}
