#include <iostream>
#include <windows.h>
using namespace std;
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
int main(){
string name,section;
string pass="Passed";
string fail="Failed";
int subject_num;
float convert,hold;
SetConsoleTextAttribute(color,03);
	cout<<"Student Name: ";
  getline(cin,name);
  cout<<"\nSection: ";
  getline(cin,section);
  cout<<"\nNumber of Subjects: ";
  cin>>subject_num;
string subject[subject_num];
int sub_grades[subject_num][2];
float mt_grade[subject_num],ft_grade[subject_num],s_grade[subject_num],equiv[subject_num];
for(int i=0;i<subject_num;i++){
  cout<<"\nSubject: ";
  cin>>subject[i];
  cout<<"\nEnter Midterm Grade on "<<subject[i]<<" : ";
	cin>>sub_grades[i][0];
  mt_grade[i]=sub_grades[i][0];
  cout<<"\nEnter Final Term Grade on "<<subject[i]<<" : ";
  cin>>sub_grades[i][1];
  ft_grade[i]=sub_grades[i][1];
  cout<<endl;
}
SetConsoleTextAttribute(color,05);
cout<<"Hello "<<name<<" from "<<section<<"!"<<endl;
for(int a=0;a<subject_num;a++){
s_grade[a]=(mt_grade[a]+ft_grade[a])/2;
cout<<"Your Semestral Grade in "<<subject[a]<<" is "<<s_grade[a]<<".";
if (s_grade[a]>=90){
	SetConsoleTextAttribute(color,02);
	convert=100-s_grade[a];
  hold=convert*0.05;
	equiv[a]=1.00+hold;
}
else if (s_grade[a]<90&&s_grade[a]>74){
	SetConsoleTextAttribute(color,02);
	convert=100-s_grade[a];
  hold=convert*0.10;
	equiv[a]=(1.00+hold)-0.50;
}
else if(s_grade[a]<=74){
	SetConsoleTextAttribute(color,04);
	equiv[a]=5.00;
}
cout<<"\nIts Equivalent is: "<<equiv[a];
if(s_grade[a]>98){
	cout<<"\nClassification: Excellent"<<endl;
}
else if(s_grade[a]>=93&&s_grade[a]<98){
	cout<<"\nClassification: Superior"<<endl;
}
else if(s_grade[a]>=85&&s_grade[a]<93){
	cout<<"\nClassification: Very Good"<<endl;
}
else if(s_grade[a]>=80&&s_grade[a]<85){
	cout<<"\nClassification: Good"<<endl;
}
else if(s_grade[a]>=76&&s_grade[a]<80){
	cout<<"\nClassification: Fair"<<endl;
}
else if(s_grade[a]==75){
	cout<<"\nClassification: Pass"<<endl;
}
else if(s_grade[a]<75){
	SetConsoleTextAttribute(color,04);
	cout<<"\nClassification: Fail"<<endl;
}
if(s_grade[a]>=75){
SetConsoleTextAttribute(color,02);
cout<<"Remarks: "<<pass<<endl;}
else{
SetConsoleTextAttribute(color,04);
cout<<"Remarks: "<<fail<<endl;}
}
}
