#include <iostream>
using namespace std;
int main(){
   int val;
   int sort;
   cout<<"Enter array size (Max 50) : : ";
   cin>>val;
   int elements[val];
   int arranged_val[val];
   if(val>50){
      val=50;}
   cout<<"\nEnter array elements : : "<<endl<<endl;
   for(int i=0;i<val;i++){
      cout<<"Enter arr["<<i<<"] Element : : ";
      cin>>elements[i];
   }
   cout<<"\nStored Data Before Sorting in Array : :"<<endl;
   for(int k=0;k<val;k++){
   cout<<elements[k]<<" ";}
   
   for(int a=0;a<val;a++){
      for(int b=0;b<val;b++){
      if(elements[a]<elements[b]){
         sort=elements[a];
         elements[a]=elements[b];
         elements[b]=sort;
         }
      }
   }
   cout<<"\nStored Data After Sorting in Array : :"<<endl;
   for(int j=0;j<val;j++){
      cout<< elements[j] <<" ";
   }
}
