#include <iostream.h>
# include <conio.h>

int main()

{
    int vec[9],goku[9],j,i,sum;
    
    sum=0;
    j=0;

      for(i=0;i<9;i++)
      {
                cout<<"INGRESE VALOR DEL VECTOR: ";
                cin>>vec[i] ;
                cout<<endl;         
      }
      cout<<endl<<endl;
      
      for(i=0;i<9;i++)
      {
          if(vec[i]%2==0)
          {
            sum=sum+vec[i];
          }
          else
          {
            goku[j]=vec[i];
            j=j+1;
          }
      }
      
      
      goku[j]=sum;
      cout<<endl<<endl;
      
      for(i=0;i<=j;i++)
      {
          cout<<goku[i]<<"  ";
      }
      
 getch();
      
}


      
      
      
      
      
      
      
      
      
