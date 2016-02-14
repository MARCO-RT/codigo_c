#include<iostream.h>
#include<conio.h>

int main()

{
   int mat[3][4],i,j;
   i=0;
   j=0;
   
   for(i=0;i<3;i++)
      {
        for(j=0;j<4;j++)
           {
            cout<<"ingrese el valor de la matriz "<<"["<<i<<"]"<<"  "<<"[" <<j<<"]"<<" :";
            cin>>mat[i][j];
            cout<<endl<<endl;            
           }            
                   
      } 
      
      cout<<endl<<endl;
      
   for(i=0;i<3;i++)
      {
       for(j=0;j<4;j++)
       
           {
            cout<<mat[i][j]<<" ";        
           } 
           
           cout<<endl;         
      }  
    
    
 getch();  
    
    
}
