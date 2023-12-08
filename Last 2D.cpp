#include <iostream>
int main(){
	int rows,columns;
	std::cout<<"Enter the Rows and Columns Size for Array: ";
  std::cin>>rows;
	std::cin>>columns;
  int numbers[rows][columns];
  std::cout<<"Enter "<<rows<<"*"<<columns<<" Array Elements: ";
  for(int a=0;a<rows;a++){
	  for(int b=0;b<columns;b++){
	    std::cin>>numbers[a][b];
}
}
  std::cout<<"\nOriginal Matrix is: "<<std::endl;
   for(int a=0;a<rows;a++){
	  for(int b=0;b<columns;b++){
  std::cout<<numbers[a][b]<<" ";
}
  std::cout<<std::endl;
}
  std::cout<<"\nTranspose of Given Matrix is:"<<std::endl;
   for(int a=0;a<columns;a++){
	  for(int b=0;b<rows;b++){
  std::cout<<numbers[b][a]<<" ";
}
  std::cout<<std::endl;
}

}
