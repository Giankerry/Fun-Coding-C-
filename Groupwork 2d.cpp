#include <iostream>
int totalhold;
std::string line[2]={"--------------------------------------------------------------","==========================================================="};
class team{
	public:
	int team_Number,games;
  int* total;
  int** teamscore;
void scores(){
	std::cout<<line[0]<<"\nEnter the number of Teams : ";
  std::cin>>team_Number;
  std::cout<<"Number of Score to input : ";
  std::cin>>games;
  std::cout<<line[0];
}
void assign(){
	teamscore = new int*[team_Number];
  for(int x=0;x<team_Number;x++){
	teamscore[x] = new int [games];
  total[x]=0;
}
}
void inputScores(){
	for (int a=0;a<team_Number;a++){
	std::cout<<"\nTeam "<<a+1<<":"<<std::endl;
	  for(int b=0;b<games;b++){
	std::cout<<"Game "<<b+1<<": ";
  std::cin>>teamscore[a][b];}
}
}
void totalscores(){
	for(int a=0;a<team_Number;a++){
	for(int b=0;b<games;b++){
	total[a]+=teamscore[a][b];
}
}
}
void displayScores(){
	std::cout<<line[0]<<std::endl;
	std::cout<<"Team\t";
for(int i=0;i<games;i++){
	std::cout<<"G"<<i+1<<"\t";
}
  std::cout<<"Total\n"<<line[0]<<std::endl;
for(int a=0;a<team_Number;a++){
	std::cout<<a+1<<"\t";
	for(int b=0;b<games;b++){
	std::cout<<teamscore[a][b]<<"\t";
}
std::cout<<total[a]<<std::endl;
}
}
};
team Teamobj;
int main(){
	Teamobj.scores();
  Teamobj.assign();
  Teamobj.inputScores();
	Teamobj.displayScores();
}
