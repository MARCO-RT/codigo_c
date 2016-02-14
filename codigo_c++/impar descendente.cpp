#include <iostream.h>
# include <conio.h>
int main()

{
    int vec[10],par[10],impar[10],orden[10],j,i,k, o,cont,temp;
    cont=0;
    j=0;
    i=0;
    k=0;
    o=0;
      system("color A1");
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
         par[j]=vec[i];
         j=j+1;             
        }
        
        else
        {
         impar[k]=vec[i];
         k=k+1;   
        } 
                       
      }
      for(i=0;i<=k-1;i++)
      {
        for(j=i+1;j<=k-1;j++)
        
            {
             if(impar[i]<impar[j]) 
             
               {
                temp=impar[i];
                impar[i]= impar[j];
                impar[j]= temp;                
               }             
            }               
      }
      for(i=0;i<=j-1;i++)
      {
       cout<<par[i]<<" ";  
      }
      
      cout<<endl<<endl;
      
      for(i=0;i<=k-1;i++)
      
      {
       cout<<impar[i]<<" ";              
      }
      for(i=0;i<=j-1;i++)
      
         {
            orden[i]= par[i];
            cont=cont+1;
            k=k+1;
         }
         
         for(i=cont;i<=k-1;i++)
         
         {
          orden[i]=impar[o];
          o=o+1;               
         }
         cout<<endl<<endl; 
         
         system("color B3");
         for(i=0;i<10;i++)
         
             {
                                      
              cout<<orden[i]<<" ";           
             }
         
         
getch();
}
      
      
