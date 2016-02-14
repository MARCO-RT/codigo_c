#include <stdio.h>
#include <conio.h>
#include <iostream.h>



int contar(char *cadena)
{
    int cont=0;
  while(*cadena++!='\0')
  if (*cadena==' ')
  cont++;
  return cont+1;  
}
main()
{
char cadena [100];

int i=0;


cout<<" ingresa la frase :";
gets(cadena);
cout<<endl;
int num= contar(cadena);

cout<<" numero de palbras es :"<<num;



/*if(cadena[i]==' ' && cadena[i]!=' ')
{
 num=num+1;
 i=i+1;             
}
cout<<endl<<endl<<num;
getch();*/

getch();
        
}
