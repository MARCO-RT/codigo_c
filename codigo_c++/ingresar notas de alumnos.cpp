/*ingresar notas en um vector, luego adicionar dos puntos a la nota desaprobada,
sumar 1 punto si la nota es >= 10.5 y <= 15, 
finalmente adicionar 0.5 puntos a las notas mayores que 15
udted debe gurdar  y mostrar todas esta nuevas notas en un nuevo vector,
y en la posicion final del vector colo que 
el promedio de las notas ( ingre 10 notas)*/

# include <iostream.h>
# include <conio.h>
 float main ()
 {
       
   system("color B2");    
   float vec[10],nota[11],i,j,suma,cont,prom;
   cont=0;
   suma=0;
   i=0;
   j=0;
   
   for(i=0;i<10;i++)
   {
    cout<<" INGRESE LA NOTA DEL ALUMNO :";
    cin>> vec[i];              
   }

   for (i=0;i<10;i++)
   
   {
     if(vec[i]<10.5) 
     
     {
      nota[j]=vec[i]+2;
      j=j+1;               
     }
     
     if(vec[i]>=10.5 && vec[i]<= 15)
     {
      nota[j]=vec[i]+1;
      j=j+1;            
     }
     
     if(vec[i]>15)
     {
      nota[j]= vec[i]+ 0.5;
      j=j+1;           
     }    
      
   }
   
   for(i=0;i<10;i++)
   {
   suma=suma+nota[i];
   }
   prom=suma/10;

   nota[j]=prom;
   
      for(i=0;i<=j;i++)
      {
          cout<<nota[i]<<"  ";
      }
      
   getch();  
 }
 
