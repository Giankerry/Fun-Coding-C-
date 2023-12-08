#include <iostream>
#include <string.h>
int main(){
	std::string input="";
	char digit[10]={'0','1','2','3','4','5','6','7','8','9'};
  char basekey[10]={'X','C','O','M','P','U','T','E','R','S'};
  std::cout<<"Enter Price:  ";
  std::cin>>input;
  char convert[input.length()+1];
  strcpy(convert,input.c_str());
  std::cout<<"Coded Value:  ";
for(int a=0;a<input.size();a++){
  for(int i=0;i<10;i++){
if (input[a]==digit[i]){std::cout<<basekey[i];}
}
if(input[a]=='.'){std::cout<<".";}
}
}
