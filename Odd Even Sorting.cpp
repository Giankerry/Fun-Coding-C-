#include <iostream>
using namespace std;
int main(){
	int times1=0,times2=0;
	int if_even,size,order;
cout<<"Enter array size :: ";
cin>>size;
	int value[size];
  int even_group[size];
  int odd_group[size];
cout<<"\nEnter array elements ::"<<endl;
for(order=0;order<size;order++){
	cout<<"Enter arr["<<order<< "] Element :: ";
cin>>value[order];
}
for(int i=0;i<size;i++){
if_even=value[i]%2;
if(if_even==0){
	even_group[times1]=value[i];
times1++;
}
else{
	odd_group[times2]=value[i];
times2++;
}
}
cout<<"Stored Data in Array :: "<<endl;
for(int y=0;y<size;y++){
cout<<value[y]<<" ";
}
cout<<"\nEven elements in array are :: "<<endl<<endl;
for(int first=0;first<times1;first++){
cout<<even_group[first]<<" ";
}
cout<<endl;
cout<<"\nOdd Elements in Array are :: "<<endl<<endl;
for(int second=0;second<times2;second++){
cout<<odd_group[second]<<" ";
}
}

