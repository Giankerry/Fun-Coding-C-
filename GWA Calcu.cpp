#include <iostream>
#include <windows.h>
#define line "==============================================================================\n"
HANDLE color =GetStdHandle(STD_OUTPUT_HANDLE);
std::string prompt[5]={"ENTER STUDENT NAME : ","ENTER STUDENT ID : ","ENTER NUMBER OF SUBJECTS : ","ENTER GRADE ON SUBJECT #","ENTER THE NUMBER OF UNITS FOR SUBJECT #"};
int main(){
	SetConsoleTextAttribute(color,03);
	std::string name,id;
  int subjectsNum;
	std::cout<< line<<prompt[0];
  getline(std::cin,name);
  std::cin.clear();
  std::cout<<prompt[1];
  std::cin>>id;
  std::cout<<line<<prompt[2];
  std::cin>>subjectsNum;
  std::cout<<line;
  std::string subjects[subjectsNum];
  float grades[2][subjectsNum],totalUnits=0,totalGrade=0,average;
	for(int a=0;a<subjectsNum;a++){
	std::cout<<prompt[3]<<a+1<<" : ";
  std::cin>>grades[0][a];
  std::cout<<prompt[4]<<a+1<<" : ";
  std::cin>>grades[1][a];
  std::cout<<std::endl;
}
  for(int c=0;c<subjectsNum;c++){
	totalUnits+=grades[1][c];
	totalGrade+=(grades[1][c]*grades[0][c]);
  average=totalGrade/totalUnits;
}
for(int d=0;d<1;d++){
	SetConsoleTextAttribute(color,06);
	std::cout<<line<<"Student Name : "<<name<<std::endl<<"Student ID number : "<<id<<std::endl;
	std::cout<<subjectsNum<<" Subjects     "<<"Grades"<<"\t"<<"Units"<<std::endl;
	for(int b=0;b<subjectsNum;b++){
		std::cout<<"Subject # "<<b+1<<" : "<<grades[0][b]<<"\t"<<grades[1][b]<<std::endl;
}
  SetConsoleTextAttribute(color,02);
    std::cout<<"Total Units : "<<totalUnits<<"\t"<<"General Weighted Average : "<<average;
}
}



