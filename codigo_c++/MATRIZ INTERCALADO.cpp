/* INGRESAR DOS MATRICES CUADRADAS. AMBAS MATRICES DEBEN TENER EL MISMO TAMAÑO
SE DEBE MOSTRAR EN PANTALLA UNA NUEVA MATRIZ CON LOS VALORES INTERCALADOS.

*/
# include <iostream.h>
# include <conio.h>

int main()

{
  int mat[10][10],mat1[10][10],mat2[10][10],i,j,r,n,m,y,t;

   system("color 0C");

// SE INGRESA EL TAMAÑO DE LA MATRIZ:
  
cout<<" ingrese el numero de filas de la primara matriz :";
cin>>m;
cout<<endl;
cout<<" ingrese el numero de columnas de la pirmera matriz :";
cin>>n; 
cout<<endl;
cout<<" ingrese el numero de filas de la segunda matriz :";
cin>>y;
cout<<endl;
cout<<" ingrese el numero de columnas de la segunda matriz :";
cin>>t; 
cout<<endl;
cout<<endl;

// SE INGRESA LOS VALORES DE LA MATRIZ:
if(n==m&&m==y&&y==t&&n==t)
{

for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   {
   cout<<"ingrese el valor de la matriz numero 1 "<<"["<<i<<"]"<<"  "<<"[" <<j<<"]"<<" :";
   cin>>mat[i][j];
   cout<<endl<<endl;            
   }            
                   
} 
   
   
   
      
cout<<endl;
cout<<" la segunda matriz";
      
cout<<endl<<endl;
      
for(i=0;i<y;i++)
{
   for(j=0;j<t;j++)
   {
   cout<<"ingrese el valor de la matriz numero 2 "<<"["<<i<<"]"<<"  "<<"[" <<j<<"]"<<" :";
   cin>>mat1[i][j];
   cout<<endl<<endl;            
   }            
                   
}

//EL PROCESO:

for(i=0;i<m;i++)
{
    for(j=0;j<t;j++)
    
    { 
     mat2[i][j]=mat[i][j];            
    }                
                
}
for(i=1;i<m;i++)
{
    for(j=0;j<t;j++)
    
    { 
     mat2[i][j]=mat1[2*i+1][j];            
    }                
                
}


cout<<"\t\t LA MATRIZ INTERCALADA ES : ";
cout<<endl<<endl;  
for(i=0;i<m;i++)
{  cout<<endl;
   for(j=0;j<t;j++)
   {
   cout<<"\t\t\t"<<" "<<mat2[i][j];
           
   }            
                   
} 




}


else
{
 
 cout<<"\tLOS VALORES INGRESADOS NO CUMPLEN PARA UNA MATRIZ CUADRADA";   
    
}
getch();
}
