#include<iostream.h>
#include<conio.h>

int main()

{
    
   system("color B3");
   int mat[3][3],i,j,par,impar;
   par=0;
   impar=0;
   i=0;
   j=0;
   
   for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
           {
            cout<<"ingrese el valor de la matriz "<<"["<<i<<"]"<<"  "<<"[" <<j<<"]"<<" :";
            cin>>mat[i][j];
            cout<<endl<<endl;            
           }            
                   
      } 
      
      cout<<endl<<endl;
      
       for(i=0;i<3;i++)
      {
       for(j=0;j<3;j++)
       
           {
            if(mat[i][j]%2 == 0)
            {
             par=par+1;        
            }
            
            else
            {
             impar=impar+1;   
            }
           } 
           
           cout<<endl;         
      }  
    
         cout<<"EL NUMERO DE PARES ES  :"<<par;        
         cout<<endl;
         cout<<"EL NUMERO DE IMPARES ES  :"<<impar;         
    
    
 getch();  
    
    
}
