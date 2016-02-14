/*      ESTRUCTURAS CON ARREGLO   */
#include <iostream.h>
#include <conio.h>

struct kevin
{
       char nom[100];
       float nota1;
       float nota2;
       float prom;
};

 kevin mar[10];
 
 main()
 {
       float acum, final;
       int i;
       acum = 0;
       
       cout<<"\n    REGISTRO DE NOTAS DEL CURSO DE MATEMATICA "; cout<<endl;
       cout<<"    -------- -- ---- --- ----- -- ---------- ";
       for(i=0; i<10; i++)
       {
            cout<<endl<<endl;   
            cout<<" -->ingrese nombre : ";
            cin>>mar[i].nom; cout<<endl;
            cout<<"     *ingrese nota 1 : ";
            cin>>mar[i].nota1; 
            cout<<"     *ingrese nota 2 : ";
            cin>>mar[i].nota2; 
            
            mar[i].prom= (mar[i].nota1 + mar[i].nota2)/2;
            acum = acum + mar[i].prom;
            cout<<endl;cout<<"       -*-"<<mar[i].nom ; cout<<" ---------- promedio :"<<mar[i].prom;
       }
       
       final = acum/10;
       cout<<endl<<endl;
       cout<< " promedio final de aula es :"<<final;
       
       
       getch();
 }
                
