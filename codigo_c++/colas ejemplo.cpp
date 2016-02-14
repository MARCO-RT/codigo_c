#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
 
struct datos
{
 int dato;
 datos *s;
}*p,*aux,*u;
 
void insertar (int dat);
void borrar ();
void listar ();
 
main()
{
int opcion,x;
do
{
system("color a");
system("cls"); 
cout<<"\n 1. Insertar";
cout<<"\n 2. Borrar";
cout<<"\n 3. Listar";
cout<<"\n 4. Salir";
cout<<"\n\n Ingrese opcion: ";
cin>>opcion;
switch(opcion)
{
case 1:  cout<<"\n\n Ingrese dato: ";
         cin>>x;
         insertar(x);
         cout<<"\n Dato insertado!!";
         getch();
         break;
         
case 2:  borrar();
         getch();
         break;
         
case 3:  listar(); 
         getch(); 
         break;
         
case 4: 
         exit(1);
         getch();
default: 
         cout<<"\n Opcion no valida!!"; 
         getch();
         break;
 }
}

while(opcion);

}
 
void insertar (int dat)
      {
         aux=new(datos);
         aux->dato=dat;
         if(u)
         {
                  u->s=aux;
                  aux->s=NULL;
                  u=aux;
         }
         else
         {
                  p=u=aux;
         }
      
      }
      
      
void borrar()
{
         if(p)
         {
         aux=p;
         cout<<"\n Elimino a " <<p->dato;
         p=aux->s;
         delete(aux);
         }
         
         else
         {
         cout<<"\n No hay datos";
        }
}
 
void listar()

{
int i;
         if(!u)
         {
         cout<<"\n No hay datos en la cola";
         return;
         }
         
         aux=p;
         
while(aux)
        {
         cout<<"\n -> "<<aux->dato;
         aux=aux->s;
        }
}
