#include <iostream.h>
# include <conio.h>

int main ()
{
    int vec[10],nuevo[10],i,j,k;
    i=0;
    j=1;

    for (i=0;i<10;i++)
    {
       cout<<"INGRESE EL VALOR   "<<i+1<<"  DEL VECTOR  : ";
       cin>>vec[i]; 
       cout<<endl<<endl;
        
    }
    
    
    for  (i=0;i<10;i++)
    
    {
        if(vec[i]%2==0) 
        
        {
           nuevo[k]=vec[i];
           i=i+2;               
        } 
        
       
    }
    
    
    for  (i=0;i<10;i++)
    
    {
        if(vec[i]%2!=0) 
        
        {
           nuevo[j]=vec[i];
           j=j+2;               
        } 
        
       
    }
    
    
    
    for(i=0;i<j;i++)
    {
       cout<<"  "<<nuevo[i];
             
    }
    
getch();
    
}
