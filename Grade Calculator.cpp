#include <iostream>
#include <iomanip>
int main(){
	float baseAverage,convertedAverage;
	int subnum,backsub=0;
  std::string name,section,status,line="====================================================================================\n";
  float totalUnits=0,max01=100,max02=90,tgrade=0,tequiv=0,gwa,uno=1.00,dos=1.50;
	std::cout<<"Enter Student Name : ";
  getline(std::cin,name);
  std::cout<<"Enter Course,Year Level & Section : ";
  getline(std::cin,section);
	std::cout<<"Enter the number of subjects :: ";
  std::cin>>subnum;
  std::cin.ignore();
  std::string subjects[subnum],classification[subnum];
	float grade[subnum],eqhold[subnum],equivalent[subnum],conGrade[subnum],conEq[subnum],sum1=0,sum2=0;
  int units[subnum];
  std::cout<<line<<"Enter "<<subnum<<" subjects :: "<<std::endl;
for(int i=0;i<subnum;i++){
	std::cout<<"Enter Subject #"<<i+1<<" :: ";
  std::cin>>subjects[i];
  std::cout<<"Enter number of Units :: ";
  std::cin>>units[i];
  totalUnits+=units[i];
}
for(int j=0;j<subnum;j++){
	std::cout<<"Enter your grade on "<<subjects[j]<<" :: ";
  std::cin>>grade[j];
  if(grade[j]>75){classification[j]="Passed";}
  if(grade[j]<0||grade[j]>100){classification[j]="Error";grade[j]=75;}
  else if(grade[j]<75){classification[j]="Failed";}
  tgrade+=(grade[j]*units[j]);
}
for(int k=0;k<subnum;k++){
	if(grade[k]>=90){eqhold[k]=max01-grade[k];}
	if(grade[k]<90||grade[k]>74){eqhold[k]=max02-grade[k];}
  else{eqhold[k]=4.0;backsub++;}  

}
for(int l=0;l<subnum;l++){
	if(grade[l]>=90){equivalent[l]=uno+(eqhold[l]*0.05);}
  if(grade[l]<90||grade[l]>74){equivalent[l]=dos+(eqhold[l]*0.10);}
  else{equivalent[l]=uno+(eqhold[l]*1);}
  tequiv+=(equivalent[l]*units[l]);
  sum1+=grade[l];
  sum2+=equivalent[l];
}
	baseAverage=sum1/subnum;
  convertedAverage=sum2/subnum;
  gwa=tequiv/totalUnits;
	std::cout<<line;
	if(baseAverage>=75){
	std::cout<<"Congratulations "<<name<<" from "<<section<<" you have passed the semester!"<<std::endl;}
	if(backsub==0){status="Regular";}
	else{status="Irregular";}
  std::cout<<" Status :: "<<status<<" Student\n"<<line;
  std::cout<<"Subjects"<<"\tUnits\t"<<"\tGrades\t"<<"\tEquivalent\t"<<"Remarks"<<std::endl;
for(int i=0;i<subnum;i++){
  std::cout<<subjects[i]<<"\t\t"<<units[i]<<"\t\t"<<grade[i]<<"\t\t"<< std::
fixed <<std::setprecision(2)<<equivalent[i]<<"\t\t"<<classification[i]<<std::endl;
}
std::cout<<"Your Base Average is : "<<baseAverage<<std::endl;
std::cout<<"Your Converted Average is : "<<convertedAverage<<std::endl;
std::cout<<"Your General Weighted Average is : "<<gwa<<std::endl;

}
