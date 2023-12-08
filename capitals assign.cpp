#include <iostream>
#include <string.h>
int main(){
  std::string location,cap="",capitals[5]={"Ottawa","Washington D.C.","Moscow","Rome","Manila"},countries[5]={"Canada","United States","Russia","Italy","Philippines"};
	std::cout<<"Enter a country capital: ";
  getline(std::cin,cap);
for(int i=0;i<5;i++){
if(cap==capitals[i]){
	location=countries[i];}
}
std::cout<<"Country is: "<<location;
}
