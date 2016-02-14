# include <iostream.h>
# include <conio.h>

int main()

{
    int vec[8],vec2[4],i ;
    
    int p=0;

      for(i=0;i<8;i++)
      {
                cout<<" INGRESE VALOR: "<<i+1<<"  del vector  ";
                cin>>vec[i] ;
                cout<<endl;         
      }
      cout<<endl<<endl;
      
      
      
      for(i=0;i<4;i++)
      {
          vec2[i]=vec[2*i]+vec[2*i+1];
      }  
      
      
      
         cout<<endl<<endl;
      
         for(i=0;i<4;i++)
         {
            cout<<"INGRESE VALOR:"<<p<<"+"<<p+1<<" del vector: "<<vec2[i];
            cout<<endl<<endl;  
            p=p+2;           
         }
         
      getch();
}
