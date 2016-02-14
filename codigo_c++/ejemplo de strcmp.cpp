#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

main()

{
char cad1 [20],cad2 [20];
int num;

cout<<" ingresa la primera palabra :";
gets(cad1); 
cout<<endl;
cout<<" ingresa la segunda palabra :";
gets(cad2);
num= strcmp(cad1,cad2);

cout<<endl<<endl<<num;
getch();
        
}
