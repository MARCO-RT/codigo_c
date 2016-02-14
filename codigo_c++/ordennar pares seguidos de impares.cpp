/*hacer impares iinvertidos*/


#include <iostream.h>
# include <conio.h>

int main()

{
    int vec[10],mod[10],i,j;
    j=0;
    i=0;

      for(i=0;i<10;i++)
      {
                cout<<"INGRESE VALOR DEL VECTOR: ";
                cin>>vec[i] ;
                cout<<endl;         
      }
      cout<<endl<<endl;
      
      for(i=0;i<10;i++)
      {   
          if(vec[i]%2==0)
          {
             mod[j]= vec[i];
             j=j+1;
          }
                        
      }
      
      
      for(i=0;i<10;i++)
      {
         if(vec[i]%2!=0)
         {
           mod[j]=vec[i];
           j=j+1;           
         }               
      }
      
            for(i=0;i<j;i++)
               {
                cout<<mod[i]<<" ";              
               }
              
 getch();
}             
