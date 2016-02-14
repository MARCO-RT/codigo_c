#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

main()
{
 char texto[100];
 int  tam,i,cont_a,cont_e,cont_i,cont_o,cont_u;
 
 cont_a=0;

 cout<<"ingrese el texto a evaluar :" <<endl;
 gets(texto);
 tam=strlen(texto);
 for(i=0;i<tam;i++)
 {
  if(texto[i]!='a' && texto[i]!='e' && texto[i]!='i'&&texto[i]!='o'&&texto[i]!='u'&&texto[i]!=' ')
  {
   cont_a=cont_a+1;                 
  } 
                    
 }
 cout<<endl<<endl;
 cout<<" consonantes hay " <<cont_a;
 //cout<<endl;
// cout<<" la letra [e]aprarece : " <<cont_a;
 getch();    
      
}
