#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
 
struct pilas
{
int d;
pilas *a;
}*c,*e;
 
void menu(void);
void ingresar(void);
void sacar (void);
void actualizar_pila(void);

 
main()
{
menu();
}
void menu(void)
{
int y,opc;
 for(;;)
 {
system("color C");
system("cls"); 
 cout<<"\n\t\t 1. Ingresar datos a pila";
 cout<<"\n\t\t 2. Sacar datos de pila";
 cout<<"\n\t\t 3. Motrar datos de pila";
 cout<<"\n\t\t 0. Salir";
 cout<<"\n\n\t\t\t Ingrese opcion: ";cin>>opc;
 switch(opc)
 {
 case 1:
         ingresar();
         getch();
         break;
 case 2: 
         sacar();
         getch();
         break;
         
 case 3: actualizar_pila(); 
         getch(); 
         break;
 case 0: 
         exit(1);
 default: 
         cout<<"\n\n\t\t\t Opcion no valida!!"; 
         getch();
         break;
 }
actualizar_pila();
 }
}
 
void ingresar (void)
