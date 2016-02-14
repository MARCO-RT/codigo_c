/*ingresar edad y el sueldo: si la edad es menor o igual a 25 años
se bonifica el 5 % si mayor de 25 pero  menor o igual que 50 bonifica el 10%
por ultimo si es mayor de 50 años recibira una bonificacion del 15 % de su 
sueldo. mostrar en pantalla*/

#include <iostream.h>
#include <conio.h>

struct marco
{
       char nom[100];
       int edad;
       float sueldo;
       float boni;
};

 marco mar[8];
 
  main()
 {
       system("color 0C");
       float total;
       total=0;
       float boni=0;
       float reci;
       int i;
       
       cout<<"\t\n    LISTA DE TRABAJADORES "; cout<<endl;
       cout<<"     -------- -- ---- --- ----- -- ---------- ";
       for(i=0; i<8; i++)
       {
            cout<<endl<<endl;   
            cout<<" -->ingrese nombre del trabajador  "<<i+1<<" :";
            cin>>mar[i].nom; cout<<endl;
            cout<<"     *ingrese edad del trabajador : ";
            cin>>mar[i].edad; 
            cout<<endl<<endl;
            cout<<"     *ingrese sueldo del trabajador : s/.  ";
            cin>>mar[i].sueldo; 
       
            
            
            
            
            
       
        if(mar[i].edad<25)
       {
        mar[i].boni=mar[i].sueldo*0.05;                
                         
       }
       
       if(mar[i].edad>=25 && mar[i].edad<=50)
       
       {
        mar[i].boni=mar[i].sueldo*0.1;    
            
       }
       
        if(mar[i].edad>50)
       {
        mar[i].boni=mar[i].sueldo*0.15;   
       }
       
       reci=mar[i].sueldo+mar[i].boni;
       cout<<endl<<endl;
       cout<< "     * la bonificacion  del trabajador  "<<i+1<<": S/.   "<< mar[i].boni;
       total=total + mar[i].boni;
       cout<<endl<<endl;
       cout<< "     * el trabajador recibira  "<<i+1<<": s/.  "<<reci;

       }
       
       cout<<endl<<endl;
       cout<< "  EL DESEMBOLSO TOTAL DEL DUENO DE LA EMPRASA  SERA DE : S/.  "<<total;
       
       getch();
 }
                
