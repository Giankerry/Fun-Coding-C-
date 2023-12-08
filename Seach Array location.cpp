#include <iostream>
using namespace std;
int main(){
int number[10];
int indexvalue[10];
int nextvalue[10];
int search,index,ocvalue;
   cout<<"Enter 10 values in array:"<<endl;
   for(int i=0;i<10;i++){
   cin>> number[i];
   }
   cout<<"Values in array are now: ";
   for(int q=0;q<10;q++){
	 cout<<number[q]<<" ";}
   cout<<"\nEnter value to find:";
   cin>>search;
   for(int oc=0 ;oc<10; oc++){
      if(search==number[oc]){
         ocvalue+=1;
      }
   }
   cout<<search<<" was found "<<ocvalue<<" times."<<endl;
      }

