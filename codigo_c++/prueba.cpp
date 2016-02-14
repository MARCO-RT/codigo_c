# include <iostream.h>
# include <conio.h>
main()
 {
   system("color B3");   
   float vec[10],nota[11],prom;
   float suma=0;
   int i=0;
   int j=0;
   
   for(i=0;i<10;i++)
   {
    cout<<" ingrese la nota del alumno :";
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
   
      for(i=0;i<=10;i++)
      {
          cout<<nota[i]<<"  ";
      }
      
   getch();  
 }
 
