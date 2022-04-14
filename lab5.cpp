#include <iostream>
using namespace std;
int main()
{
   const int n=40;
   int *massiv= new int[n];
   for(int i=0;i<n;i++){
      massiv[i]=rand()%501;
   }
   cout<<"\nMassiv elementleri: "<<endl;
  
   for(int i=0;i<n;i++){
      cout<<massiv[i]<<endl;
   }
   return 0;
}
