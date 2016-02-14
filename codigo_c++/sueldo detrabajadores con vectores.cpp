/*una empresa a decidido determinar las edades de sus 10 trabajadore,
para de acuerdo a ello realizar modificaciones al sueldo de cada uno de ellos,
segun lo siguiente: los sueldos  osilan entre 700 y 1500.
si la edad del trabajdor es menor o igual que 30 entonces le corresponde 
un bonificion del 10%. si la edad es mayor que 30 pero menor igual que 45 su
bono es del 20%. finalmente si la edad es mayor de 45 su bonificacion es de 
50% de su sueldo. se debe mostrar los nuevos sueldos calculodos de los 10
trabajadores en un vector*/


#include <iostream.h>
# include <conio.h>
 int main()
 
 {
    int vec[10],sueldo[10],i,j,ganancia;
    i=0;
    j=0;
    ganancia=800;
    for(i=0;i<10;i++)
    {
    cout<<" ingrese el edad del trabajador:  ";
    cin>>vec[i]; 
    cout<<endl;                
                     
    }
    
    for(i=0;i<10;i++)
    
    {
        if(vec[i]<=30) 
        
        {
         sueldo[j]=ganancia*0.1+ganancia;
         j=j+1;             
        }
        if(vec[i]>30 &&  vec[i]<=45) 
        
        {
         sueldo[j]=ganancia*0.2+ganancia;
         j=j+1;             
        }
        if(vec[i]>45) 
        
        {
         sueldo[j]=ganancia*0.5+ganancia;
         j=j+1;             
        }
                        
    }
    
    
    
          for(i=0;i<10;i++)
      {
          cout<<sueldo[i]<<"  ";
      }
    

     
 getch();   
     
 }
