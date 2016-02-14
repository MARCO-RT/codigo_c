#include<iostream.h>
#include<conio.h>

int main()

{
    
   system("color B3");
   int mat[4][3],i,j,mat1[4][3],mat2[4][3],k,l;
   i=0;
   j=0;
   k=0;
   l=0;
   
   for(i=0;i<4;i++)
      {
        for(j=0;j<3;j++)
           {
            cout<<"ingrese el valor de la matriz numero 1 "<<"["<<i<<"]"<<"  "<<"[" <<j<<"]"<<" :";
            cin>>mat[i][j];
            cout<<endl<<endl;            
           }            
                   
      } 
      
      cout<<endl;
      cout<<" la segunda matriz";
      
      cout<<endl<<endl;
      
      for(k=0;k<4;k++)
      {
        for(l=0;l<3;l++)
           {
            cout<<"ingrese el valor de la matriz numero 2 "<<"["<<k<<"]"<<"  "<<"[" <<l<<"]"<<" :";
            cin>>mat1[k][l];
            cout<<endl<<endl;            
           }            
                   
      } 
      
      
      for(i=0;i<4;i++)
      {
       for(j=0;j<3;j++)
       {
         mat2[i][j]=mat[i][j]+mat1[i][j];             
                       
                       
       }
                      
                      
      }
      
     for(i=0;i<4;i++)
     {
      for(j=0;j<3;j++)
      {
      cout<<"\t"<<mat2[i][j]<<"   ";
      }
      cout<<endl;
     }
      
      
      
      
   getch();
   
}
