#include <iostream>
#include <string.h>
int main(){
	int comp;
	char word[100],cpyword[100];
	std::cout<<"Enter word: ";
  std::cin>>word;
  strcpy(cpyword,word);
  strrev(word);
  comp=strcmp(cpyword,word);
  if(comp==0){
	std::cout<<"Reversed: "<<word<<std::endl;
  std::cout<<"It is palindrome.";}
  else{
	std::cout<<"Reversed: "<<word;
}
}
