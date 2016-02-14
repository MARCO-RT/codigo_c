#include <iostream.h>
# include <conio.h>

int main()

{
    int vec[10],inver[10],j,i;
    j=9;

      for(i=0;i<10;i++)
      {
                cout<<"INGRESE VALOR DEL VECTOR: ";
                cin>>vec[i] ;
                cout<<endl;         
      }
      cout<<endl<<endl;
      
      
      for(i=0;i<10;i++)
      {
         inver[j]=vec[i];
         j=j-1;              
      }
      
      cout<<endl<<endl;
      cout<<"LOS VECTORES INVERTIDOS SON : ";
      cout<<endl<<endl;
      for(j=0;j<10;j++)
      {
       cout<<"("<<inver[j]<<")"<<" ";              
      }
      
 getch();
 
}
