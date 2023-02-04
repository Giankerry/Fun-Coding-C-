#include <iostream>
#include <string.h>
#include <stdio.h>
#include <string>
#include <windows.h>
#include <chrono>
#include <time.h>
#include <unistd.h>
#include <cstdlib>
using namespace std;
#define hit "You Died...";
int armor,potion,ncg,rum;
char answer,opt;
char repeat;
string skip;
string ae ="Please Select an Armor: ";
string we= "Please Select a Weapon: ";
int hp,atk,def,weap,king,d,price,silver;
int luck,chance,enchance,fight,hplost,enatk;
int hpbase,atkbase,defbase,energy,dodge;
int enhp,endef,enluck,pchance,i,maxhp,times,evade;
int chbase,cont,timer,tries,battle_duration,opt1,cont1,role;
std::string name;
std::string weaponA[3] = { "Axe","Dagger","Sword"};
std::string weaponB[3] = {"Mace","Kunai","Katana" };
std::string weaponC[3] = {"Long Bow","Crossbow","Slingshot"};
std::string weaponD[3] = {"Bulwark Shield","Iron Shield","Spiky Shield"};
std::string kingdom[4] = {"Vespania" , "Rohan" , "Finndor" , "Lionheim"};
std::string classes[4] = {"Warrior","Assassin","Archer","Shield-bearer"};
string enter1;
string enter2;
string dialogue[] = {
    "Successfully reached Mounthill Pass",
    "The whole area is covered by fog.No wonder a witch lives here.",
    "*You hear someone singing a melody*",
    "Familiar Voice:Who are you and why are you here? I am " + name + ". I am here to face the witch!",
    "Familiar Voice: A WITCH YOU SAY?! That's what they call me?! Yes a witch! Show yourself!",
    "*A woman comes out from the fog.*",
    "You look familiar...",
    "Familiar voice: That is because...*giggles*",
    "*The woman gets closer and gives you a kiss in the cheek.* A-A-Amara?! I thought you were dead!",
    "Amara:You never changed!You are still silly and clueless as before!*Laughs* And you still enjoy teasing me...",
    "Amara: We are childhood sweethearts remember?",
    "Amara :So,what is my lovely prince doing here?",
    "I am the one who should ask you that!",
    "Amara:Nothing, I am just doing my research...",
    "Research?!--You have been gone for 3 years!\nWhat is that fake--death all about?!",
    "Amara: *sigh* You know...It is just so heavy sometimes... Since my parents died...I've lost my will to live...It felt like I lost my purpose.",
    "Amara:I am grateful to your parents since they took care of me and treated me like their own child. You guys were so kind...I felt like want to stay with you forever!",
    "Amara:But I thought I was just a burden so I went away... I want to be useful to you...But all I do is give you problems! I ran and ran...I am not aware of my actions at that time...",
    "Amara:I got lost in this forest and thankfully I found a cabin which had everything I need. The owner of this house was a researcher an was taken as a captive...It was written on her book...I don't even know if she is still alive right now. I continued her research about healing potions and here I am now!",
    "I'm glad that you are safe...You know?--You shouldn't have left...I understand what you felt now...",
    "Amara :Huh?How is the king?the queen?Are they doing just fine?I miss them so much!",
    "They are...dead...","Amara:What did you say?!","They are gone,Amara...", "Amara:You are kidding right?!","Do I look like I will just make that up?!",
    "Amara:I'm sorry to hear that..." + name +"...",
    "Can you tell me who did it?","It was the Venician army who invaded our kingdom...\nI did my best to protect them but we were overwhelmed by their troops.",
    "My father helped me escape...I heard screaming all around the place...","It was terrifying...",
    "Amara: What are you planning to do now?","I am going to infiltrate the Kingdom of Venicia and defeat their evil leader to stop the war once and for all.",
    "Amara: All by yourself?! I know that you are skilled but--That is staight up suicide!Are you out of your mind?!",
    "Maybe I am,Amara...I know that already and I am prepared...","We are on equal footing now Amara...I know you understand the feeling."
    "Amara:Then I am going too!Let me join you " + name + " I can help!",
    "AMARA! I CAN'T BRING YOU WITH ME... I ALMOST LOST EVERYTHING I HAVE ALREADY! You are the only one I have left...Don't you understand that?!",
    "You've been through a lot,I don't want to cause you any more trouble...","Amara: I-I'm sorry...I won't insist anymore...\nBut please take these...",
    };

string story[] = {
 "Everything changed when the king of Venicia died.\nOne of his children had other plans for the world which the other siblings disliked.",
 "His name is Ellios of Venicia.\nHe was the king's youngest child and he was a prodigy.\nAt a young age,he was able to fight royal knights and he defeats them with ease.",
 "He also had great knowledge even better than most scholars of their kingdom.\nHe already mastered 3 languages at the age of seven.",
 "He learned a lot at the age of 12.\nSeeing the world does not seem right to him,he always feel like there is something that he could do to make it better.",
 "His overwheling abilities made him yearn for something more...",
 "He wants to change the world as he says that it was severely flawed.",
 "His brothers didn't like his way of thinking so they decided to overthrow him.",
 "In order to save himself he has to fight his own brothers.",
 "He fought his brothers all at once and he single-handedly defeated them.",
 "The eldest however had other plans,he told Ellios that he agrees with him and that he understands him more than anyone."
 "Damian,the eldest became the king.He immediately ordered the knights to invade other kingdoms and demanded them for expansion.",
 "Ellios did not say a word and watched how his brother ruled the kingdom.",
 "Damian ruled everyone with fear.",
 "Everyone who disobeyed his orders died,he ruled with terror.",
 "This is where your story begins..." + name +  "..."};

void mission(int hpbase,int atkbase ,int defbase){
	
	string conclusionA[] = {
"**Later on the people imprisoned by the Venician soldiers were released.**",
"** "+name+" returns to Amara and discovered something about the secrets of the late Venician King.**",
"**Weeks later,other kingdoms became aware of the news and to seize the given opportunity to compensate to their loss,they declared war towards Venicia.**",
"**The People of Venicia on the other hand, proclaimed Lucius the knight commander of the Venician Knights as their king as a replacement to the late King Damian.**",
"**The imprisoned soldiers of "+ kingdom[king-1] +" have returned to their homes and slowly rehabilitate their kingdom after the invasion**",
"** A war is about to begin between Venicia and the other kingdoms...**"};

string ending[]={
"**After the battle, "+name+" was named by Ellios as the new Knight Commander of Venicia** ",
"** "+name+" returned to Amara and told her everything that has happened.**",
"** "+name+" and Amara went back to Venicia as a new war is about to commence.",
"A war between Venicia and the other kingdoms is about to begin..."};

HANDLE color= GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(color,2);
int op1,op2;
int potion=200;
system("Color 0D");
cout << name << "  **You successfully escaped the castle.**"<<endl<<endl;
cout << "*A tall person with a hood approaches you.*"<<endl;
cout<< "What do you want to do? < 1- run away , 2 - talk to him>"<<endl;
cin>>op1;
switch (op1){
case (1): 
SetConsoleTextAttribute(color,4);
cout << "*You successfully ran away.*"<<endl;
maxhp+=25;hpbase+=25;defbase+=5;atkbase+=5;
silver+=5000;
if (cin.get() =='\n' ){
cout <<"Press enter to move forward."<<endl;}
break;
case(2):
SetConsoleTextAttribute(color,2);
cout << "Who are you?"<<endl;
cout<< "Mysterious Man: -I was told by your father to give these to you once his kingdom has fallen and you are still alive. "<<endl;
cout<<"  " <<endl;
cout<< "**Received Gold Bracelet,Emerald Amulet,King's Mythrill Armor and 5000 silver coins**"<<endl;
cout<<"Mysterious Man: -Goodluck on your journey...Beloved Prince..."<<endl<<endl;
cout<<"*The mysterious man left the horse and went away*"<<endl;
if (cin.get() =='\n' ){
cout <<"Press enter to equip acquired items."<<endl;}
if (cin.get() =='\n' ){
cout <<"*Items successfully equipped*"<<endl;
silver=silver+=5000;hpbase+=50;defbase+=10;atkbase+=10;
maxhp+=50;
cout<<"*You received "<<silver<<"!*"<<endl;}
if (cin.get() =='\n' ){
cout<<" "<<endl;}
break;	
}
system("cls");
system("Color 06");
cout << "Please modify your character."<<endl;
cout << "Classes Available: [ <1> Warrior , <2> Assassin , <3> Archer , <4> Shield-Bearer ]" << endl<<endl;
cin>>role;
switch(role){
case(1):
cout << classes[role-1]<<"s have average attack power and decent defensive power."<< endl;
cout << "This class is versatile so make use of its potential."<<endl;
hpbase += 300;
energy+=4;
maxhp+= 300;
atkbase += 25;
evade+=30;
defbase +=15;
cout<<"Here are your base stats."<<endl<<"HP : "<<hpbase<<" ATK : "<<atkbase<<" DEF : "<<defbase<<" EVD: "<<evade<<" EN: "<<energy<<endl;
cout<<"Select prefered equipments."<<endl;

if (cin.get () == '\n'){
cout<<endl;
cout << we << endl;
cout << "< 1 = Axe(HIGH DMG) [3000], 2 = Dagger (HIGH AGI) [2000], 3 = Sword(VERSATILE)[2500] >"<< endl;}
cin >> weap;
cin.clear();
cin.ignore();
cout << "A " << weaponA[weap-1] << " is a good choice!" << endl;
switch (weap) {
case (1):
	cout << "Axe is an a two-handed hard-hitting weapon that is slow but effective in combat. "<<endl;
cout << "Power : 80   Defense : 5  Hit-rate : 50%"<<endl;
price+=3000;
atkbase+=80;
defbase+=5;
luck+=1;
break;
case (2):
	cout << "A "<<weaponA[weap-1]<<" is good in a shifty playstyle.It is accurate but has low attack power." << endl;
cout << "Power : 40  Defense : 5  Hit-rate : 85%"<<endl;
price+=2000;
atkbase+=40;
defbase+=5;
luck+=35;
break;
case (3):
	cout << "The "<<weaponA[weap-1]<<" is the most versatile among the three which is good for all types of battle." << endl;
  cout << "Power : 60  Defense : 5 Hit-rate : 65% "<<endl;
price+=2500;
atkbase+=60;
defbase+=5;
luck+=15;
break;}
if (cin.get () == '\n'){
cout<<endl;
cout << ae << endl;
cout << " < 1 = Chain Armor(MID)[1500] , 2 = Iron Armor(HIGH DEF)[2000] , 3 = Light Cloak(AGI UP)[2500] >"<< endl;
cin >> armor;
cin.clear();
cin.ignore();
cout << "Good armor choice!" << endl;}
switch (armor) {
case (1):
	cout << "Chain Armor is a versatile armor with mediocre defense.Does not affect hit-rate."<< endl;
  cout << "Defense : 10  , hit-rate increment/decrement : 0 "<<endl;
defbase+=10;
price+=1500;
break;
case (2):
	cout << "Iron Armor is a heavy armor that provides the high defense but in exchange,it lowers hit-rate."<< endl;
  cout << "Defense : 15 , hit-rate decrement : -10%" <<endl;
defbase+=15;
price+=2000;
luck-=5;
break;
case (3):
	cout << "Light cloak is for an agile playstyle which allows the bearer to be more accurate.Provides low defense increase."<<endl;
  cout << "Defense : 5 , hit-rate increment : +10%"<< endl;
defbase+=5;
price+=2500;
luck+=5;
break;
}
break;
case(2):
	cout<<endl;
	cout <<classes[role-1] <<"s have considerably the highest damage in the game but they are also the have a weak defense and hp stats."<<endl;
  cout <<classes[role-1] <<"s are highly evasive glass-canons,try to maximize your advantages."<< endl;
hpbase+=200;
maxhp+=200;
energy+=3;
evade+=40;
atkbase+=40;
defbase+=5;
cout<<"Here are your base stats."<<endl<<"HP : "<<hpbase<<" ATK : "<<atkbase<<" DEF : "<<defbase<<" EVD: "<<evade<<" EN: "<<energy<<endl;
cout<<"Select prefered equipments."<<endl;
if (cin.get () == '\n'){
cout<<endl<<endl;
cout << we << endl;
cout << "< 1 = Mace(HIGH DMG)[3000] , 2 = Kunai(AGILE)[2000] , 3 = Katana(VERSATILE)[2500] >"<< endl;}
cin >> weap;
cin.clear();
cin.ignore();
cout << "A " << weaponB[weap -1]<< " is a good choice!" << endl;
switch (weap) {
case (1):
	cout << weaponB[weap -1]<<",used by assassins in the early ages.This is a heavy weapon that deals very high damage with low hit rate since it is heavy. "<<endl;
cout << "Power : 100   Defense : 5  Hit-rate : 50%"<<endl;
atkbase+=100;
defbase+=5;
luck+=1;
price+=3000;
break;
case (2):
	cout << weaponB[weap -1]<< " are small and accurate weapons which deals decent amount of damage. " << endl;
cout << "Power : 60  Defense : 5  Hit-rate : 80%"<<endl;
atkbase+=60;
defbase+=5;
luck+=28;
price+=2000;
break;
case (3):
	cout << weaponB[weap -1]<<"is one of the most popular Japanese weapons in the past.It has a very sharp edge and it allows the user to deal good amount of damage." << endl;
  cout << "Power : 70  Defense : 5  Hit-rate : 70% "<<endl;
atkbase+=70;
defbase+=5;
luck+=20;
price+=2500;
}
if (cin.get () == '\n'){
cout<< "  "	<<endl;
cout << ae << endl;
cout << " < 1 = Kyoto Armor(MID)[1500] , 2 = Gaia Cloak(HIGH DEF)[1500] , 3 = Light Cloak(AGI UP)[2000] >"<< endl;}
cin >> armor;
cin.clear();
cin.ignore();
cout << "Good armor choice!" << endl;
switch (armor) {
case (1):
	cout << "Kyoto armor is a versatile armor with mediocre defense.Does not affect hit-rate."<< endl;
  cout << "Defense : 10  , hit-rate increment/decrement : 0 "<<endl;
defbase+=10;
price+=1500;
break;
case (2):
	cout << "Gaia cloak is a heavy cloak that provides the high defense but it lowers hit-rate."<< endl;
  cout << "Defense : 15 , hit-rate decrement : -10%" <<endl;
defbase+=15;
luck-=5;
price+=1500;
break;
case (3):
	cout << "Light cloak is for an agile playstyle which allows the bearer to be more accurate.Provides low defense increase."<<endl;
  cout << "Defense : 5 , hit-rate increment : +10%"<< endl;
defbase+=5;
luck+=5;
price+=2000;
break;
}
break;
case (3):
cout<< "  "	<<endl;
cout << classes[role-1]<<"s are master of ranged attacks.This class is very accurate and deals good amount of damage."<< endl;
cout << "They have mediocre stats and rarely misses their attacks."<<endl;
hpbase+=250;
maxhp +=250;
energy+=3;
evade+=30;
atkbase+=30;
defbase+=10;
cout<<"Here are your base stats."<<endl<<"HP : "<<hpbase<<" ATK : "<<atkbase<<" DEF : "<<defbase<<" EVD: "<<evade<<" EN: "<<energy<<endl;
cout<<"Select prefered equipments."<<endl;

if (cin.get () == '\n'){
cout<<endl;
cout << we << endl;
cout << "< 1 = Long Bow (HIGH DMG)[2000] , 2 = Crossbow (VERSATILE)[2000] , 3 = Slingshot (ACCURATE)[2500] >"<< endl;}
cin >> weap;
cin.clear();
cin.ignore();
cout << "A " << weaponC[weap -1]<< " is a good choice!" << endl;
switch (weap) {
case (1):
	cout << weaponC[weap -1]<<" are mainly used for hunting.Deals good amount of damage with decent accuracy. "<<endl;
cout << "Power : 50   Defense : 0  Hit-rate : 80%"<<endl;
atkbase+=50;
luck+=30;
price+=2000;
break;
case (2):
	cout << weaponC[weap -1]<<" shoots very fast bullets that rarely miss. " << endl;
cout << "Power : 40  Defense : 0  Hit-rate : 90%"<<endl;
luck+=42;
atkbase+=45;
price+=2000;
break;
case (3):
	cout << weaponC[weap -1]<<" is a light weapon that has decent damage and almost never miss." << endl;
  cout << "Power : 30  Defense : 0  Hit-rate : 95%"<<endl;
luck+=45;
atkbase+=40;
price+=2500;
break;
}
if (cin.get () == '\n'){
cout<<endl;
cout << ae << endl;
cout << " < 1 = Linen Armor(MID)[1500] , 2 =  Hunting Coat(HIGH DEF)[2500] , 3 = Artemic Cloak(AGI UP)[2500] >"<< endl;}
cin >> armor;
cin.clear();
cin.ignore();
cout << "Good armor choice!" << endl;
switch (armor) {
case (1):
	cout << "Linen Armor is a versatile armor with mediocre defense.Does not affect hit-rate."<< endl;
  cout << "Defense : 10  , hit-rate increment/decrement : 0 "<<endl;
defbase+10;
price+=2000;
break;
case (2):
	cout << "Hunting Coat is a light armor that provides good protection but lowers user's accuracy."<< endl;
  cout << "Defense : 15 , hit-rate decrement : 5%" <<endl;
luck=luck-5;
defbase+15;
price+=2000;
break;
case (3):
	cout << "Artemic Cloak is for an agile playstyle which allows the bearer to be more accurate.Provides low defense increase."<<endl;
  cout << "Defense : 5 , hit-rate increment : +10%"<< endl;
luck=luck+5;
defbase+5;
price+=2500;
break;
}
break;
case(4):
cout<< "  "	<<endl;
cout << "The Shield-bearer has the highest health and defense stats off all the classes available."<< endl;
cout << "This class has incredible tenacity power but very low attack power."<<endl;
hpbase +=350;
maxhp+=350;
energy+=6;
evade+=40;
atkbase +=30;
defbase +=20;
cout<<"Here are your base stats."<<endl<<"HP : "<<hpbase<<" ATK : "<<atkbase<<" DEF : "<<defbase<<" EVD: "<<evade<<" EN: "<<energy<<endl;
cout<<"Select prefered equipments."<<endl;
if (cin.get () == '\n'){
cout<<endl;
cout << we << endl;
cout << "< 1 = Bulwark Shield (HIGH DEF)[3000] , 2 = Iron Shield (GOOD DEF)[2000] , 3 = Spiky Shield (EXTRA ATK + LOW DEF)[2500] >"<< endl;
cin >> weap;
cin.clear();
cin.ignore();
cout << "A " << weaponD[weap-1] << " is a good choice!" << endl;}
switch (weap) {
case (1):
	cout << weaponD[weap-1]<<" is forged by the best craftsmen in the land.It provides the highest defense for a single equipment. "<<endl;
cout << "ATK : 10   DEF : 30  Hit-rate : 50%"<<endl;
atkbase+=10;
defbase+=30;
luck+=1;
price+=3000;
break;
case (2):
	cout << weaponD[weap-1]<<" it is heavy and provides good defense." << endl;
cout << "ATK: 20  Defense : 20  Hit-rate : 65%"<<endl;
atkbase+=20;
defbase+=20;
luck+=15;
price+=2000;
break;
case (3):
	cout << weaponD[weap-1]<<" gives relatively decent damage for attacking and bonus defense to the bearer." << endl;
  cout << "ATK:35  Defense : 5 Hit-rate : 65% "<<endl;
atkbase+=35;
defbase+=5;
luck+=15;
price+=2500;
break;
}
if (cin.get () == '\n'){
cout<<endl;
cout << ae << endl;
cout << " < 1 = Bronze Armor(MID)[1500] , 2 = Iron Armor(HIGH DEF)[2000] , 3 = Leather Armor(AGI UP)[2000] >"<< endl;}
cin >> armor;
cin.clear();
cin.ignore();
cout << "Good armor choice!" << endl;
switch (armor) {
case (1):
	cout << "Bronze Armor is a versatile armor with mediocre defense.Does not affect hit-rate."<< endl;
  cout << "Defense : 10 , hit-rate increment/decrement : 0 "<<endl;
defbase+=10;
price+=1500;
break;
case (2):
	cout << "Iron Armor is a heavy armor that provides the high defense but in exchange,it lowers hit-rate."<< endl;
  cout << "Defense : 15 , hit-rate decrement : -10%" <<endl;
defbase+=15;
luck-=5;
price+=2000;
break;
case (3):
	cout << "Leather Armor is for an agile playstyle which allows the bearer to be more accurate.Provides low defense increase."<<endl;
  cout << "Defense : 5 , hit-rate increment : +10%"<< endl;
defbase+=5;
luck+=5;
price+=2000;
break;
}
break;
if(role>=1&&role<=4){
	cout<<"You are now ready to go."<<endl;
}
if(role>=0||role>4){
	cout<<"The entered value is not registered as a class available.Please restart the game."<<endl;
exit(EXIT_FAILURE);}
}
cout<<"Please enter <y> to purchase the items for "<<price<<" silver."<<endl;
cin>>answer;
if (answer=='y'||answer=='Y'){
silver-=price;
cout<<endl<<endl;
cout<<"Thank you for purchasing!"<<endl<<"You now have "<<silver<<" silver left."<<endl;
cout<<"  "<<endl<<endl;
cout<<"*********************************************************************************"<<endl;
cout << "Congratulations!You successfully made your character."<<endl;
cout << "Total Stats:    HP: " << hpbase << " DEF: " <<defbase << " ATK: " <<atkbase <<" EVD: "<<evade<<endl;}
else if(answer!='y'||answer!='Y'){
	cout<<"Sorry you can't continue without items...Please restart the game."<<endl;
exit(EXIT_FAILURE);
}
if (cin.get()== '\n'){
cout<<"Goodluck on your journey!"<<endl;
cout<<"*********************************************************************************"<<endl;}
if (cin.get()== '\n'){
	system ("cls");}
system("Color F");
cout<<"Press 1 to continue..."<<endl;
cin>>cont;
	cout << "Proceeding to next point";
	for (int d=0;d<3;d++){
cout<<"."<<flush;
sleep(1);}
system("cls");

	if(cont==1){
while(cont==1){
	timer=3;
while(timer!=(-1)){
	cout<<"\rPlease wait... " << timer << " " << flush;
sleep(1);
timer--;}
cont=2;
system("cls");}
}
SetConsoleTextAttribute(color,5);
cout<< "_________________________________________________________________________________"<<endl;
cout << "*********************************************************************************"<<endl;
cout<< "**CHAPTER II: INVESTIGATING WITCHCRAFT**"<<endl<<endl;
do{
cout<<"*Enter* <NEXT> to go through the scene or *Enter* <SK1P> to move forward to the next scene"<<endl;
cin>>skip;
if (skip=="NEXT"||skip=="next"){
cout<<"Proceed to Mounthill Pass...(An abandoned area near Venicia that is believed to be residented by a witch.)"  <<endl;
for (int i = 0; i < sizeof(dialogue)/sizeof(dialogue[0]); i++ ) {
    cout << dialogue[i] << endl;
    sleep(3);
}
}
else if (skip=="SK1P"||skip=="sk1p"){
	cout<<"*Scene skipped.*"<<endl<<endl;
break;}
else {
	cout<<"Code Unrecognized.Press <y> to try again."<<endl;
cin>>repeat;
cin.ignore();
cin.clear();
}
}
while (repeat == 'Y' || repeat =='y');
cout<<"*You received 5 healing potions and a health bracelet.*"<<endl;
if (cin.get() =='\n' ){
cout <<"What are these?"<<endl;
cout<<"Amara: I haven't perfected them yet but that would surely help."<<endl;
cout<<"Amara: Here is a map or maybe a blueprint of the Venician Castle.She is probably a Venician scholar,if you ever find her...Tell her that her work won't be in vain. "<<endl;}
if (cin.get() =='\n' ){
	cout<<"I will surely find a way to complete her doings."<<endl;
	cout<<"--The health bracelet will provide you more health and the healing potion heals you 200 hitpoints.--"<<endl;
potion+=5;
hpbase+=25;
maxhp+=25;
cout <<"HP : "<<hpbase<<endl<<endl;}
if (cin.get() =='\n' ){
	cout<<"Amara: I will stay here,but please promise me one thing " << name <<"."<<endl;
cout <<"Amara:Come back to me ALIVE!"<<endl;}
cout <<"What is your reply? <1 - Yes,I promise! , 2 - I can't promise anything."<<endl;
cin>>op2;
switch (op2){
case(1):
		SetConsoleTextAttribute(color,2);
	cout<<"Yes, I promise!" <<endl;
cout << "Amara: I will withhold to that! I SWEAR IF YOU DIE,I WILL KILL YOU!"<<endl<<endl;
cout <<"**You left the Mounthill pass.**"<<endl;
break;
case(2):
	SetConsoleTextAttribute(color,5);
cout <<"I can't promise anything..."<<endl;
cout << "Amara: I don't want to lose you...Just like you,you are the only one I have Left..."<<name<<"..."<<endl<<endl;
cout <<"**You left the Mounthill pass.**"<<endl;}
if (cin.get()=='\n'){
cout<<endl<<endl;}
if (cin.get()== '\n'){
system("cls");}

system("Color F");
cout<<"Press 1 to continue..."<<endl;
cin>>cont;
	cout << "Proceeding to next point";
	for (int d=0;d<3;d++){
cout<<"."<<flush;
sleep(1);}
system("cls");

	if(cont==1){
while(cont==1){
	timer=3;
while(timer!=(-1)){
	cout<<"\rPlease wait... " << timer << " " << flush;
sleep(1);
timer--;}
cont=2;
system("cls");}
}
SetConsoleTextAttribute(color,9);
cout<<"**CHAPTER III : THE CASTLE OF VENICIA**"<<endl<<endl;
cout<<"**The Kingdom mobilized their army,leaving some guards behind on their kingdom.It is the perfect time to sneak inside the castle.**"<<endl;
	cout<<" "<<endl;
tries+=3;
do{
cout<<"Type <5NEAK1N> to elusively get inside the castle."<<endl;
cout<<"**Watch your steps...One misstep could lead to danger. Tries left: "<<tries<<"**"<<endl;
cin>>enter1;
if (enter1=="5NEAK1N"){
cout<<"**Successfully sneaked in! Guards have not noticed you.**"<<endl;
break;}
if (enter1!="5NEAK1N"&&tries<1){
	cout <<"The guards caught you."<<endl;
	cout<<"You Failed the Mission!"<<endl;
exit(EXIT_FAILURE);}
else if(enter1!= "5NEAK1N"){
	cout<<"The guards have noticed you! Retreat immediately!"<<endl;
cout<<"Do you want to try again?y/n"<<endl;
tries-=1;
cin>>repeat;}
}
while (repeat == 'Y' || repeat =='y');{
if (repeat == 'g'){
	cout<<"Why are you gay?"<<endl;
}
}
if (cin.get()=='\n'){
cout<<endl<<endl;}
if (cin.get()== '\n'){
system("cls");}
cout<<"**You've entered the castle.**"<<endl<<endl;
if (cin.get()=='\n'){
cout<<"**The castle is completely quiet...**"<<endl;
cout<<"<Press any number key to look around.>"<<endl;}
cin >> cont;
SetConsoleTextAttribute(color,4);
cout<<"It feels like someone is watching..."<<endl;
if (cin.get()=='\n'){
	cout<<"Voice from the hall:Welcome Young Prince!\nA wonderful castle isn't it?'"<<endl;}
if (cin.get()=='\n'){
cout<<"Who are you?\nShow yourself!"<<endl;}
if (cin.get()=='\n'){
cout<<"**In the darkness unveils,a knight with a shining black armor.**"<<endl;
cout<<"Black knight:Do you know that entering a property that you do not own isn't elegant?"<<endl;}
if (cin.get()=='\n'){
cout<<"**A swift attack was performed by the knight**\n**You managed to parry the incoming attack** "<<endl;
cout<<"Dark Knight: Impressive! Now, would you mind if I challenge you for a duel?"<<endl;}
if (cin.get()=='\n'){
cout<<"I don't know what you want but it seems like even if I say no you will still try to kill me."<<endl;}
if (cin.get()=='\n'){
cout<<"Dark Knight: Precisely!"<<endl;}
if (cin.get()=='\n'){
	cout<<endl<<endl;
}
system("cls");
SetConsoleTextAttribute(color,6);
    cout << "**BATTLE WITH VENICIAN DARK KNIGHT**\nEnter 1 to continue..." << endl;
    cin >> cont;
    cout << "Your HP is " << hpbase << ". Your ATK is " << atkbase << ". Your DEF is " << defbase << endl;
    cout << "Potion use chances: 1\n*TIP : The knight has good overall damage and defense.Make sure to use your potion right before the Knight's HP falls below 100.*" << endl << endl;
    pchance = 1;
    srand((unsigned int)time(NULL));
    cout << "Battle Start!" << endl << endl;
    enluck += 30;
    endef += 30;
    enatk += 70;
    enhp += 400;
    times+=1;
    cout << "Press 1 to continue..." << endl;
    cin >> cont;

    for (i = 0; i < 100; i++) {
 dodge = evade + (rand() % 100);
 chance = luck + (rand() % 100);
 enchance = enluck + (rand() % 100);
SetConsoleTextAttribute(color,9);
 cout << "You are now free to make a move.What do you want to do?" << endl << endl;
 cout << "1 - <Slash/Strike>\n2 - <Block/Dodge>\n3 - <Use Healing Potion>" << endl << endl;
 cout << "Your HP : " << hpbase << " Enemy HP : " << enhp << endl << endl;
 cin >> fight;

 switch (fight) {
 case 1:
	if(energy<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"You do not have enough energy to perform the action."<<endl;}
 if (chance >= 50&&energy>=1) {
	SetConsoleTextAttribute(color,2);
 cout << "You made a successful hit!" << endl;
 enhp = (enhp + endef) - atkbase;
energy-=1;
 if (enhp <= 100 && times>0) {
	SetConsoleTextAttribute(color,4);
	cout<<endl;
cout<<"**************************************************************************************"<<endl;
 cout << "Dark Knight: It looks like I've underestimated you...Now,I will give it my all!" << endl;
 cout << "Dark Knight: *whispers*This could be my last fight mother..." << endl << endl;
 cout << "DIE!!!\nYou recieved a heavy damage!" << endl;
 cout<<"**************************************************************************************"<<endl<<endl;
 enhp = enhp - 50;
 times-=1;
 hpbase = (hpbase + defbase) - (enatk * 2);
 break;}
 }
 else if (chance < 50&&energy>=1) {
	SetConsoleTextAttribute(color,4);
 cout << "Your attack missed!" << endl;
energy-=1;
 if (enhp <= 100 && times>0) {
	cout<<endl;
	cout<<"**************************************************************************************"<<endl;
 cout << "Dark Knight: It looks like I've underestimated you...Now,let me show you my strength!" << endl;
 cout << "Dark Knight: *whispers* This could be my last fight mother..." << endl << endl;
 cout << "Last Stand!!!\nYou recieved a heavy damage!" << endl;
 cout<<"**************************************************************************************"<<endl<<endl;
 enhp = enhp - 50;
times-=1;
hpbase = (hpbase + defbase) - (enatk * 2);
break;}
}
if (enchance >= 50 && enhp > 100 || enhp < 60) {
SetConsoleTextAttribute(color,4);
cout << "You've taken damage from the enemy!" << endl;
hpbase = (hpbase + defbase) - (enatk);
} else if (enchance < 50 && enhp > 100) {
SetConsoleTextAttribute(color,2);
cout << "Enemy missed." << endl;
break;
}
break;
case 2:
if (dodge >= 50 && enhp >= 1) {
SetConsoleTextAttribute(color,2);
cout << "You successfully parried the attack!" << endl;
hpbase = hpbase + 5;
energy+=1;
if (enchance < 50) {
SetConsoleTextAttribute(color,2);
cout << "Enemy missed." << endl;
energy+=1;
break;
}
if (hpbase>maxhp){
	hpbase=hpbase - (hpbase-maxhp);
break;
}
} else if (dodge < 50&& enhp >= 1) {
SetConsoleTextAttribute(color,4);
cout << "You've taken damage from the enemy!" << endl;
hpbase = (hpbase + defbase) - (enatk);
break;
}
break;
case 3:
if(energy<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"You do not have enough energy to perform the action."<<endl;
}
if (pchance >= 1) {
	SetConsoleTextAttribute(color,2);
cout << "Healing potion was consumed!" << endl;
pchance--;
potion -= 1;
hpbase = hpbase += potion;
energy-=1;
if (hpbase>maxhp){
	hpbase= hpbase - (hpbase-maxhp);
break;}
} 
else if (pchance < 1) {
	SetConsoleTextAttribute(color,4);
cout << "Sorry you have reached the maximum use of potion in a battle." << endl;
break;
}
break;
}
if (enhp <= 0) {
	SetConsoleTextAttribute(color,6);
cout << "Finally I can now join you Mother...Perhaps my death is not elegant...A--Argh..." << endl << endl;
cout << "You have defeated the dark knight!" << endl;
SetConsoleTextAttribute(color,2);
cout<<"Stats improved."<<endl;
hpbase+=25;
maxhp+=25;
atkbase+=10;
energy+=2;
  endef -= 30;
  enatk -= 70;
  enhp == 0;
break;
}
else if(hpbase<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"Dark Knight: You haven't met my expectations young Prince..."<<endl<<endl;
	cout<<"You've been defeated! \nYou lost..."<<endl;
exit(EXIT_FAILURE);
break;}
}
	cout<<"Press 1 to continue..."<<endl;
cin>>cont;
	cout << "Proceeding to next point";
	for (int d=0;d<3;d++){
cout<<"."<<flush;
sleep(1);}
system("cls");
system("Color F");


	if(cont==1){
while(cont==1){
	timer=3;
while(timer!=(-1)){
	cout<<"\rPlease wait... " << timer << " " << flush;
sleep(1);
timer--;}
cont=2;
system("cls");}
}
if (cin.get()=='\n'){
	SetConsoleTextAttribute(color,4);
cout<<"Voice from the shadows:Well,well,well! What do we have here? "<<endl;
cout<<"Who are you?! Stop hiding and show yourself!"<<endl;}
if (cin.get()=='\n'){
	cout<<"**A man with a katana in the shadows shows up.**"<<endl;
	cout<<"Venician Assassin: What an impatient kid...You are the one who came here!Do not be too demanding..."<<endl;}
if(cin.get()=='\n'){
	cout<<"Who are you?!\nVenician Assassin: I am an assassin that will end your life..."<<endl<<endl;}
if(cin.get()=='\n'){
cout<<"Do you think I will let you do that?!\nVenician Assassin:Well,well,well...let me tear your arms apart and slice your head for our king!"<<endl<<endl;
cout<<"Go on and try!\nI have reached this far,I won't turn back."<<endl;}
cout<<"Enter 1 to continue..."<<endl;
cin>>cont;
if (cin.get()=='\n'){
cout<<" "<<endl;}
system("cls");
SetConsoleTextAttribute(color,6);
cout<<"**BATTLE WITH VENICIAN ASSASSIN**\nEnter 1 to continue..."<<endl;
cout<<"Potion use chances: 2\n*TIP : Assassins are heavy-hitters that have relatively low defense.Watch out once his HP gets lower,you might have to use a potion to sustain the attack."<<endl;
cin>>cont;
cout<<"Your HP is "<<hpbase<<". Your ATK is "<<atkbase<<" Your DEF is "<<defbase<<endl;
cout<<"Venician Assassin:It is surpising that you've beaten a knight that strong,kid...Sad to say but your journey ends here!"<<endl;
if (role==2){
	cout<<"Venician Assassin:So you are an assassin just like me huh?\nVenician Assassin: Let me show you the difference on our levels!"<<endl;
}
	pchance=0+2;
srand((unsigned int)time(NULL));
cout<<"Battle Start!"<<endl<<endl;
endef+=10;
enatk+=90;
enhp=0+300;
times+=1;
cout<<"Press 1 to continue..."<<endl;
cin >> cont;
for(i = 0;i<100;i++){
 dodge = evade + (rand() % 100);
chance = luck + (rand()%100);
enchance = 40 + (rand()%100);
SetConsoleTextAttribute(color,9);
cout << "You are now free to make a move.What do you want to do?" << endl << endl;
 cout << "1 - <Slash/Strike>\n2 - <Block/Dodge>\n3 - <Use Healing Potion>" << endl << endl;
 cout << "Your HP : " << hpbase << " Enemy HP : " << enhp << endl << endl;
 cin >> fight;

 switch (fight) {
 case 1:
	if(energy<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"You do not have enough energy to perform the action."<<endl;}
 if (chance >= 50&&energy>=1) {
	SetConsoleTextAttribute(color,2);
 cout << "You made a successful hit!" << endl;
 enhp = (enhp + endef) - atkbase;
energy-=1;
if (enhp <= 200 && times>0) {
	SetConsoleTextAttribute(color,4);
	cout<<endl;
cout<<"**************************************************************************************"<<endl;
cout<<"You have exceeded my expectations kid...I won't take you lightly anymore!"<<endl;
cout<<"Let me show you the true power of Venicia's Strongest Assassin!"<<endl;
cout<<"I will tear you to shreds!!!"<<endl;
cout<<"**************************************************************************************"<<endl<<endl;
enatk+=30;
times-=1;
 break;}
 }
 else if (chance < 50&&energy>=1) {
	SetConsoleTextAttribute(color,4);
 cout << "Your attack missed!" << endl;
energy-=1;
 if (enhp <= 200 && times>0) {
	SetConsoleTextAttribute(color,4);
	cout<<endl;
	cout<<"**************************************************************************************"<<endl;
cout<<"You have exceeded my expectations kid...I won't take you lightly anymore!"<<endl;
cout<<"Let me show you the true power of Venicia's Strongest Assassin!"<<endl;
cout<<"I will tear you to shreds!!!"<<endl;
cout<<"**************************************************************************************"<<endl<<endl;
enatk+=30;
times-=1;
break;}
}
if (enchance >= 50&&enhp>=1) {
	SetConsoleTextAttribute(color,4);
cout << "You've taken damage from the enemy!" << endl;
hpbase = (hpbase + defbase) - (enatk);
} else if (enchance < 50 && enhp >= 1) {
	SetConsoleTextAttribute(color,2);
cout << "Enemy missed." << endl;
break;
}
break;
case 2:
if (dodge >= 50 && enhp >= 1) {
	SetConsoleTextAttribute(color,2);
cout << "You successfully parried the attack!" << endl;
hpbase = hpbase + 5;
energy+=1;
if (enchance < 50) {
	SetConsoleTextAttribute(color,2);
cout << "Enemy missed." << endl;
break;
}
if (hpbase>maxhp){
	hpbase=hpbase - (hpbase-maxhp);
break;
}
} else if (dodge < 50&& enhp >= 1) {
	SetConsoleTextAttribute(color,4);
cout << "You've taken damage from the enemy!" << endl;
hpbase = (hpbase + defbase) - (enatk);
break;
}
break;
case 3:
	if(energy<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"You do not have enough energy to perform the action."<<endl;}
if (pchance >= 1) {
	SetConsoleTextAttribute(color,2);
cout << "Healing potion was consumed!" << endl;
pchance--;
potion -= 1;
energy-=1;
hpbase = hpbase += potion;
if (hpbase>maxhp){
	hpbase= hpbase - (hpbase-maxhp);
break;}
} 
else if (pchance < 1) {
	SetConsoleTextAttribute(color,4);
cout << "Sorry you have reached the maximum use of potion in a battle." << endl;
break;
}
break;
}
if (enhp<=0){
	SetConsoleTextAttribute(color,2);
	cout<<"Venician Assassin: You are a worthy opponent...\nTell my brother--I--I...*Arghhh* \nAssassin dropped 1000 silver."<<endl;
	cout<< "You defeated the Assassin!"<<endl<<endl;
silver=silver+=1000;
hpbase=hpbase+=20;
maxhp+=20;
atkbase=atkbase+=10;
energy+=2;
  endef-=10;
  enatk-=80;
  enhp==0;
cout<<"HP : "<<hpbase;
cout<<" ATK : "<<atkbase;
cout<<endl<<endl;
break;}
else if(hpbase<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"Venician Assassin : What a shame..."<<endl<<endl;
	cout<<"You've been defeated! \nYou lost the mission..."<<endl;
exit(EXIT_FAILURE);}
}
if(cin.get()=='\n'){
SetConsoleTextAttribute(color,4);
cout<<"Something's wrong..."<<endl;}
if(cin.get()=='\n'){
	system ("cls");
}
if (cin.get()=='\n'){
cout<<"Voice from the hall: BROTHER!!! "<<endl<<endl;}
if (cin.get()=='\n'){
	cout<<"**A man in a cloak wielding an axe shows up.**"<<endl;
	cout<<"Mysterious Man: Brother...\nWhat have you done?!"<<endl;}
cout<<"Mysterious Man: "<<name<<"? Y-Y-You killed my brother?!"<<endl<<endl;
if (cin.get()=='\n'){
cout<<"Alphonse?What are you doing here?!"<<endl;}
if (cin.get()=='\n'){
cout<<"Alphonse: I am here for a negotiation towards Venicia...And then I saw you here--\nYou--You have killed my Brother!!!"<<endl;}
if (cin.get()=='\n'){
cout<<"Alphonse haven't you heard what happened to our kingdom?\nAlphonse:SILENCE!!!You may be my Prince but you will pay for what you've done!!!"<<endl;}
if (cin.get()=='\n'){
cout<<"Alphonse hear me out!\nAlphonse : I served you my whole life...My Brother is the only family that I have left! Now you took him away?!"<<endl;}
cout<<"Alphonse:Sorry Prince "<<name<< " but you will die here...I will kill you using these hands that I've used to protect you."<<endl;
cout<<"Alphonse No!"<<endl;
if (cin.get()=='\n'){
cout<<"**Alphonse swings his axe**\n**You managed to dodge the attack.**\nIs there a way to avoid this?!"<<endl<<endl;}
cout<<"Enter 1 to continue..."<<endl;
cin>>cont;
if (cin.get()=='\n'){
cout<<" "<<endl;}
system("cls");
SetConsoleTextAttribute(color,9);
cout<<"**BATTLE WITH ALPHONSE**\nEnter 1 to continue..."<<endl;
cin>>cont;
cout<<"Your HP is "<<hpbase<<". Your ATK is "<<atkbase<<" Your DEF is "<<defbase<<endl;
cout<<"Potion use chances: 2\n*TIP : Alphonse is one of the most powerful fighters of "<<kingdom[king-1]<<". He has a high defense and and good attack power."<<endl;
if (role==1){
	cout<<" You do not deserve to be called the strongest fighter of our kingdom!"<<endl;}
	pchance=0+2;
srand((unsigned int)time(NULL));
cout<<"Battle Start!"<<endl<<endl;
endef+=30;
enatk+=50;
enhp=0+400;
times+=1;
cout<<"Press 1 to continue..."<<endl;
cin >> cont;
for(i = 0;i<100;i++){
dodge = evade + (rand() % 100);
chance = luck + (rand()%100);
enchance = 40 +(rand()%100);

cout << "You are now free to make a move.What do you want to do?" << endl << endl;
 cout << "1 - <Slash/Strike>\n2 - <Block/Dodge>\n3 - <Use Healing Potion>" << endl << endl;
 cout << "Your HP : " << hpbase << " Enemy HP : " << enhp << endl << endl;
 cin >> fight;

 switch (fight) {
 case 1:
	if(energy<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"You do not have enough energy to perform the action."<<endl;}
 if (chance >= 50&&energy>=1) {
	SetConsoleTextAttribute(color,2);
 cout << "You made a successful hit!" << endl;
 enhp = (enhp + endef) - atkbase;
energy-=1;
if (enhp <= 200 && times>0) {
	SetConsoleTextAttribute(color,4);
	cout<<endl;
cout<<"**************************************************************************************"<<endl;
cout<<"This is not enough...I will avenge you brother even if it costs me my life!"<<endl;
cout<<"I will give it my all!"<<endl;
cout<<"**************************************************************************************"<<endl<<endl;
enatk+=20;
times-=1;
 break;}
 }
 else if (chance < 50&&energy>=1) {
	SetConsoleTextAttribute(color,4);
 cout << "Your attack missed!" << endl;
energy-=1;
 if (enhp <= 200 && times>0) {
	SetConsoleTextAttribute(color,4);
	cout<<endl;
	cout<<"**************************************************************************************"<<endl;
cout<<"This is not enough...I will avenge you brother even if it costs me my life!"<<endl;
cout<<"I will give it my all!"<<endl;
cout<<"**************************************************************************************"<<endl<<endl;
enatk+=20;
times-=1;
break;}
}
if (enchance >= 50 && enhp >=1) {
	SetConsoleTextAttribute(color,4);
cout << "You've taken damage from the enemy!" << endl;
hpbase = (hpbase + defbase) - (enatk);
} else if (enchance < 50 && enhp > 1) {
	SetConsoleTextAttribute(color,2);
cout << "Enemy missed." << endl;
break;
}
break;
case 2:
if (dodge >= 50 && enhp >= 1) {
	SetConsoleTextAttribute(color,2);
cout << "You successfully parried the attack!" << endl;
hpbase = hpbase + 5;
energy+=1;
if (enchance < 50) {
	SetConsoleTextAttribute(color,2);
cout << "Enemy missed." << endl;
break;
}
if (hpbase>maxhp){
	hpbase=hpbase - (hpbase-maxhp);
break;
}
} else if (dodge < 50&& enhp >= 1) {
	SetConsoleTextAttribute(color,4);
cout << "You've taken damage from the enemy!" << endl;
hpbase = (hpbase + defbase) - (enatk);
break;
}
break;
case 3:
	if(energy<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"You do not have enough energy to perform the action."<<endl;}
if (pchance >= 1) {
	SetConsoleTextAttribute(color,2);
cout << "Healing potion was consumed!" << endl;
pchance--;
potion -= 1;
energy-=1;
hpbase = hpbase += potion;
if (hpbase>maxhp){
	hpbase= hpbase - (hpbase-maxhp);
break;}
} 
else if (pchance < 1) {
	SetConsoleTextAttribute(color,4);
cout << "Sorry you have reached the maximum use of potion in a battle." << endl;
break;
}
break;
}
if (enhp<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"Alphonse: You are indeed stronger...I will never forgive you "<<name<<"..."<<endl;
cout<<"Alphonse...I'm sorry...I--am sorry.....\n I never wanted to be in this situation..."<<endl<<endl;
cout<<"Alphonse: Forget about my oath...\nI will never serve a traitor...Arghh!\nAlphonse NO!What have I done?!"<<endl;
	cout<< "You defeated Alphonse."<<endl<<endl;
hpbase+=20;
atkbase+=10;
maxhp+=20;
energy+=2;
  endef-=40;
  enatk-=50;
  enhp==0;
cout<<"HP : "<<hpbase;
cout<<" ATK : "<<atkbase;
cout<<" DEF : "<<defbase;
cout<<endl<<endl;
cout<<"Does it have to be like this?...What have I done?!...\nFather..."<<endl<<endl;
break;}
else if(hpbase<=0){
SetConsoleTextAttribute(color,4);
	cout<<"Alphonse : I treated you as a brother...That is what you deserve for what you did."<<endl<<endl;
	cout<<"You've been defeated! \nYou lost the mission..."<<endl;
break;}
}
if(hpbase>=1){
	SetConsoleTextAttribute(color,6);
cout<<"**You have passed the main hallway of the castle**\n**You are now inside the capital**"<<endl<<endl;
cout<<"A shop is a available.You can spend your silver here before you proceed to the next point."<<endl;
if(cin.get()=='\n'){
	system("cls");
}
	do{
cout<<"Merchant: Young guy,I have new items which I got for the castle of Windorf!I can give some items in exchange of silver.\nDo you want to buy some items?y/n"<<endl;
cin>>repeat;
cin.ignore();
if (repeat=='y'||repeat=='Y'){
	cout<<"Please select the items that you want to buy."<<endl;
cout<<"A -  <Healing potion>(Heals 200 HP)[500} , B - <Rum>(Strengthens User's Attack Power)[1000] , C - <Nickel Calf Guard>(Increases Defense)[1000]"<<endl<<endl;
cin>>opt;
cin.clear();
cin.ignore();
switch(opt){
	case('A'):
	if(silver >=500){
	cout<<"You have purchased a healing potion!"<<endl;
silver-=500;
potion+=1;
cout<<"You now have "<<silver<<" left."<<endl;
break;}
else if (silver <500){
	SetConsoleTextAttribute(color,4);
	cout<<"Sorry you do not have enough silver to purchase this item."<<endl;
break;}
case('B'):
if(silver >=1000){
	SetConsoleTextAttribute(color,2);
cout<<"You have purchased a Rum!\nUse it to increase attack power by 20."<<endl;
rum+=1;
silver-=1000;
break;}
else if (silver <1000){
	SetConsoleTextAttribute(color,4);
	cout<<"Sorry you do not have enough silver to purchase this item."<<endl;
break;}
case('C'):
	if(silver >=500){
	SetConsoleTextAttribute(color,2);
	cout<<"You have purchased a Nickel Calf Guard!\nYour defense was increased! Defense : "<<defbase<<endl<<endl;
silver-=500;
defbase+=10;
ncg+=1;
cout<<"You now have "<<silver<<" left."<<endl;
break;}
else if (silver <1000){
	SetConsoleTextAttribute(color,4);
	cout<<"Sorry you do not have enough silver to purchase this item."<<endl;}
}
}
SetConsoleTextAttribute(color,5);
cout<<"Do you want to buy again? y/n "<<endl;
cin>>repeat;
if (repeat=='n'||repeat!='N'){
	cout<<"Proceed to next point..."<<endl;}
}
while(repeat=='y'||repeat=='Y');
}
	cout<<"Press 1 to continue..."<<endl;
cin>>cont;
	cout << "Proceeding to next point"<<endl;
cout<<"*The only way to pass the guards is through a tunnel on the left hallway* "<<endl;
	for (int d=0;d<3;d++){
cout<<"."<<flush;
sleep(1);}
system("cls");

	if(cont==1){
while(cont==1){
	timer=3;
while(timer!=(-1)){
	system("Color 0F");
	cout<<"\rPlease wait... " << timer << " " << flush;
sleep(1);
timer--;}
cont=2;
system("cls");}
}

if (cin.get()=='\n'){
	SetConsoleTextAttribute(color,4);
cout<<"Venician Knight: My senses were right.I've called on the knights! "<<endl;
cout<<"Venician Knight: There is a rat in this castle..."<<endl<<endl;}
if (cin.get()=='\n'){
	cout<<""<<endl;
	cout<<"You also want to kill me?"<<endl;}
if(cin.get()=='\n'){
	cout<<"Venician Knight: Definitely!We cannot let a rat just run around this place..."<<endl<<endl;}
if(cin.get()=='\n'){
cout<<"Venician Knight: My reinforcements will soon be here.Perhaps they won't be needed."<<endl<<endl;
cout<<"Venician Knight: Time to die kid!"<<endl;
cout<<"Enough talking! Let us finish this!"<<endl<<endl;}
cout<<"Enter 1 to continue..."<<endl;
cin>>cont;
if (cin.get()=='\n'){
cout<<" "<<endl;}
system("cls");
SetConsoleTextAttribute(color,6);
cout<<"**BATTLE WITH A VENICIAN KNIGHT**\nEnter 1 to continue..."<<endl;
cout<<"Potion use chances: 2\n*TIP : The knight has a high defense,be careful."<<endl;
cin>>cont;
cout<<"Your HP is "<<hpbase<<". Your ATK is "<<atkbase<<" Your DEF is "<<defbase<<endl;

	pchance=0+2;
srand((unsigned int)time(NULL));
cout<<"Battle Start!"<<endl<<endl;
endef+=40;
enatk+=80;
enhp=0+500;
times+=1;
cout<<"Press 1 to continue..."<<endl;
cin >> cont;
for(i = 0;i<100;i++){
 dodge = evade + (rand() % 100);
chance = luck + (rand()%100);
enchance = 35 + (rand()%100);
SetConsoleTextAttribute(color,9);
cout << "You are now free to make a move.What do you want to do?" << endl << endl;
 cout << "1 - <Slash/Strike>\n2 - <Block/Dodge>\n3 - <Use Healing Potion>" << endl << endl;
 cout << "Your HP : " << hpbase << " Enemy HP : " << enhp << endl << endl;
 cin >> fight;

 switch (fight) {
 case 1:
	if(energy<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"You do not have enough energy to perform the action."<<endl;}
 if (chance >= 50&&energy>=1) {
	SetConsoleTextAttribute(color,2);
 cout << "You made a successful hit!" << endl;
 enhp = (enhp + endef) - atkbase;
energy-=1;
if (enhp <= 200 && times>0) {
	SetConsoleTextAttribute(color,4);
	cout<<endl;
cout<<"**************************************************************************************"<<endl;
cout<<"You are pretty good I must say."<<endl;
cout<<"**************************************************************************************"<<endl<<endl;
enatk+=10;
endef+=10;
times-=1;
 break;}
 }
 else if (chance < 50&&energy>=1) {
	SetConsoleTextAttribute(color,4);
 cout << "Your attack missed!" << endl;
energy-=1;
 if (enhp <= 200 && times>0) {
	SetConsoleTextAttribute(color,4);
	cout<<endl;
	cout<<"**************************************************************************************"<<endl;
cout<<"You are pretty good I must say."<<endl;
cout<<"**************************************************************************************"<<endl<<endl;
enatk+=10;
endef+=10;
times-=1;
break;}
}
if (enchance >= 50&&enhp>=1) {
	SetConsoleTextAttribute(color,4);
cout << "You've taken damage from the enemy!" << endl;
hpbase = (hpbase + defbase) - (enatk);
} else if (enchance < 50 && enhp >= 1) {
	SetConsoleTextAttribute(color,2);
cout << "Enemy missed." << endl;
break;
}
break;
case 2:
if (dodge >= 50 && enhp >= 1) {
	SetConsoleTextAttribute(color,2);
cout << "You successfully parried the attack!" << endl;
hpbase = hpbase + 5;
energy+=1;
if (enchance < 50) {
	SetConsoleTextAttribute(color,2);
cout << "Enemy missed." << endl;
break;
}
if (hpbase>maxhp){
	hpbase=hpbase - (hpbase-maxhp);
break;
}
} else if (dodge < 50&& enhp >= 1) {
	SetConsoleTextAttribute(color,4);
cout << "You've taken damage from the enemy!" << endl;
hpbase = (hpbase + defbase) - (enatk);
break;
}
break;
case 3:
	if(energy<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"You do not have enough energy to perform the action."<<endl;}
if (pchance >= 1) {
	SetConsoleTextAttribute(color,2);
cout << "Healing potion was consumed!" << endl;
pchance--;
potion -= 1;
energy-=1;
hpbase = hpbase += potion;
if (hpbase>maxhp){
	hpbase= hpbase - (hpbase-maxhp);
break;}
} 
else if (pchance < 1) {
	SetConsoleTextAttribute(color,4);
cout << "Sorry you have reached the maximum use of potion in a battle." << endl;
break;
}
break;
}
if (enhp<=0){
	SetConsoleTextAttribute(color,2);
	cout<<"Venician Knight: The knights will--avenge--me...."<<endl;
	cout<< "You defeated the Knight!"<<endl<<endl;
hpbase=hpbase+=20;
maxhp+=20;
atkbase=atkbase+=10;
energy+=2;
  endef-=10;
  enatk-=80;
  enhp==0;
cout<<"HP : "<<hpbase;
cout<<" ATK : "<<atkbase;
cout<<endl<<endl;
break;}
else if(hpbase<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"Venician Knight : You are not on my level..."<<endl<<endl;
	cout<<"You've been defeated! \nYou lost the mission..."<<endl;
exit(EXIT_FAILURE);}
}
	cout<<"Press 1 to continue..."<<endl;
cin>>cont;
	cout << "Proceeding to next point";
	for (int d=0;d<3;d++){
cout<<"."<<flush;
sleep(1);}
system("cls");
system("Color F");


	if(cont==1){
while(cont==1){
	timer=3;
while(timer!=(-1)){
	cout<<"\rPlease wait... " << timer << " " << flush;
sleep(1);
timer--;}
cont=2;
system("cls");}
}

SetConsoleTextAttribute(color,9);
cout<<"**CHAPTER IV : BROTHERS FOR LIFE?**"<<endl<<endl;

tries+=3;
do{
cout<<"Type <G01NG1N> to quickly get inside the tunnel without alarming the guards."<<endl;
cout<<"**Watch your steps...A mistake could lead to danger. Tries left: "<<tries<<"**"<<endl;
cin>>enter2;
if (enter2=="G01NG1N"){
cout<<"**Successfully entered the tunnel! Guards have not noticed you.**"<<endl;
break;}
if (enter1!=""&&tries<1){
	cout <<"The guards caught you."<<endl;
	cout<<"You Failed the Mission!"<<endl;
exit(EXIT_FAILURE);}
else if(enter2!= "G01NG1N"){
	cout<<"The guards have noticed you! Retreat immediately!"<<endl;
cout<<"Do you want to try again?y/n"<<endl;
tries-=1;
cin>>repeat;}
}
while (repeat == 'Y' || repeat =='y');{
if (repeat == 'g'){
	cout<<"Why are you gay?"<<endl;
}
}
if (cin.get()=='\n'){
cout<<endl<<endl;}
if (cin.get()== '\n'){
system("cls");}
cout<<"**The tunnel is dark but suddenly the torches lit up**\n**The the smell is very awful,in the tunnel are cells and inside them are prisoners,most of them are dead and rotting."<<endl;
if(cin.get()=='\n'){
	SetConsoleTextAttribute(color,4);
cout<<"**You hear someone inside one of the cells talking.**"<<endl;
cout<<"Prisoner: You finally arrived brother...\n**It was your younger brother Romeo,he was chained and full of fatal wounds**"<<endl;}
if(cin.get()=='\n'){
cout<<"Romeo!!!What have they done?!\n**Collective noises from the prisoners can be heard,everyone is pleading for help.**"<<endl;
cout<<"Romeo: I may not last for long...I-I cannot talk too much anymore..."<<endl;}
if(cin.get()=='\n'){
		SetConsoleTextAttribute(color,5);
	cout<<"Do not push yourself...I will come back here and free all of you...\nRomeo:Do what you have to do Brother...Before I die--\nRomeo no...I will come back here as fast as I coud just hang in there!"<<endl;}
if(cin.get()=='\n'){
	cout<<"Romeo:Soft-hearted as ever...That's--my brother..."<<name<<"... *breathes heavily* "<<endl;}
if(cin.get()=='\n'){
	cout<<"Romeo: Free our--people...You are...the...only...hope--...\nRomeo...No..."<<endl;
  cout<<"Brother...I swear...I will avenge everyone and set our people free...\nRest in paradise,Brother..."<<endl<<endl;}
if(cin.get()=='\n'){
cout<<"I will come back to free all of you...\n**You hastily ran towards the end of the tunnel.**" <<endl;
cout<<"**An arrow was shot towards you**\n**You've been hit**"<<endl<<endl;
hpbase-=20;}
	SetConsoleTextAttribute(color,4);
cout<<"**It was an Archer who shot you **\nArcher: Time to say goodbye young prince."<<endl;
if(cin.get()=='\n'){
cout<<"I won't let you stop me!\nArcher: I admire your spirit but it will only take some time before all the guards arrive here...Sad to say but your trip is over."<<endl;}
if(cin.get()=='\n'){
cout<<"**TIP:The enemy is agile so your attack might miss.Be Careful.**"<<endl;
cout<<"**You have 30 seconds to defeat the enemy.**"<<endl;}
cout<<"Press 1 to continue..."<<endl;
cin>>cont;
battle_duration=30;
pchance=2;
auto start = std::chrono::high_resolution_clock::now();
srand((unsigned int)time(NULL));
cout<<"Battle Start!"<<endl<<endl;
endef+=20;
enatk+=60;
enhp=0+400;
cout<<"Press 1 to continue..."<<endl;
cin >> cont;
for(i = 0;i<100;i++){
dodge = evade + (rand() % 100);
chance = 30 + (rand()%100);
enchance = 40 +(rand()%100);

 while (enhp >= 1) {
 auto current = std::chrono::high_resolution_clock::now();
auto duration = std::chrono::duration_cast<std::chrono::seconds>(current - start).count();
if (duration >= battle_duration) {
	SetConsoleTextAttribute(color,4);
cout << "The guards have arrived!You tried to fight but they were too much to handle.\nYou were defeated.\nYou lost the mission." <<endl;
exit(EXIT_FAILURE);}
 timer = battle_duration - duration;
SetConsoleTextAttribute(color,9);
cout << "You are now free to make a move.What do you want to do?\nTime left: "<<timer << endl << endl;
 cout << "1 - <Slash/Strike>\n2 - <Block/Dodge>\n3 - <Use Healing Potion>" << endl << endl;
 cout << "Your HP : " << hpbase << " Enemy HP : " << enhp << endl << endl;
 cin >> fight;
 switch (fight) {
 case 1:
	if(energy<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"You do not have enough energy to perform the action."<<endl;}
 if (chance >= 50&&energy>=1) {
	SetConsoleTextAttribute(color,2);
 cout << "You made a successful hit!" << endl;
 enhp = (enhp + endef) - atkbase;
energy-=1;}
 else if (chance < 50&&energy>=1) {
	SetConsoleTextAttribute(color,4);
 cout << "Your attack missed!" << endl;
energy-=1;}
if (enchance >= 50 && enhp >=1) {
	SetConsoleTextAttribute(color,4);
cout << "You've taken damage from the enemy!" << endl;
hpbase = (hpbase + defbase) - (enatk);
} else if (enchance < 50 && enhp > 1) {
	SetConsoleTextAttribute(color,2);
cout << "Enemy missed." << endl;
break;}
break;
case 2:
if (dodge >= 50 && enhp >= 1) {
	SetConsoleTextAttribute(color,2);
cout << "You successfully parried the attack!" << endl;
hpbase = hpbase + 5;
energy+=1;
if (enchance < 50) {
	SetConsoleTextAttribute(color,2);
cout << "Enemy missed." << endl;
break;
}
if (hpbase>maxhp){
	hpbase=hpbase - (hpbase-maxhp);
break;
}
} else if (dodge < 50 && enhp >= 1) {
	SetConsoleTextAttribute(color,4);
cout << "You've taken damage from the enemy!" << endl;
hpbase = (hpbase + defbase) - (enatk);
break;
}
break;
case 3:
	if(energy<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"You do not have enough energy to perform the action."<<endl;}
if (pchance >= 2) {
	SetConsoleTextAttribute(color,2);
cout << "Healing potion was consumed!" << endl;
pchance--;
potion -= 1;
energy-=1;
hpbase = hpbase += potion;
if (hpbase>maxhp){
	hpbase= hpbase - (hpbase-maxhp);
break;}
} 
else if (pchance < 1) {
	SetConsoleTextAttribute(color,4);
cout << "Sorry you have reached the maximum use of potion in a battle." << endl;
break;
}
break;
}
if(hpbase<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"You've been defeated! \nYou lost the mission..."<<endl;
exit(EXIT_FAILURE);
break;}
if (timer==0&&enhp>=1){
	SetConsoleTextAttribute(color,4);
	cout<<"The knights have arrived!You tried to fight but they were too much to handle.\nYou were defeated.\nYou lost the mission."<<endl;
exit(EXIT_FAILURE);}
else if (timer>=1&&enhp<=0){
	SetConsoleTextAttribute(color,2);
	cout<<"**You defeated the enemy just in time.**\n**Proceeding to the event hall.**"<<endl;
energy+=2;}
}
}
	cout<<"Press 1 to continue..."<<endl;
cin>>cont;
	cout << "Proceeding to next point"<<endl;
cout<<"*The only way to pass the guards is through a tunnel on the left hallway* "<<endl;
	for (int d=0;d<3;d++){
cout<<"."<<flush;
sleep(1);}
system("cls");
system("Color 0F");

	if(cont==1){
while(cont==1){
	timer=3;
while(timer!=(-1)){
	cout<<"\rPlease wait... " << timer << " " << flush;
sleep(1);
timer--;}
cont=2;
system("cls");}
}
SetConsoleTextAttribute(color,9);
cout<< "************************************************************************************************************************************" <<endl;
cout<<"CHAPTER V : THE TRUTH"<<endl<<endl;
cout<<"**You have reached the castle peak**\n Voice: You are truly impressive..."<<endl;
if (cin.get()=='\n'){
	cout<<"Lucius!You are the cause of all of the suffering of my people."<<endl;
  cout<<"Set them free!"<<endl;}
if (cin.get()=='\n'){
cout<<"Lucius: You do not know who you are talking to."<<endl;}
if (cin.get()=='\n'){
cout<<"Lucius: Judging by your clothes,you are from "<<kingdom[king-1]<<"."<<endl;
cout<<"I do not care who you are.I will put an end to this."<<endl;
cout<<"Lucius:I would like to see you try!"<<endl<<endl;}
if (cin.get()=='\n'){
	SetConsoleTextAttribute(color,4);
	cout<<"**Ellios pulled out his sword and thrusts it to the King's chest**\nLucius:E-Ellios...King:Wha-t h-h-ave you--done-..."<<endl;}
if (cin.get()=='\n'){
cout<<"Ellios: I had enough of you."<<endl;}
if (cin.get()=='\n'){
	SetConsoleTextAttribute(color,9);
cout<<"Ellios?The youngest son?Why did you do that?"<<endl;
cout<<"Ellios: I never trusted him from the very beginning."<<endl;}
if (cin.get()=='\n'){
cout<<"I don't understand...He is your brother..."<<endl;}
if (cin.get()=='\n'){
cout<<"Ellios:I do not consider him as my brother."<<endl;
cout<<"Ellios:It seems like you are different from the others...\nI do not have time to talk! Free my people!"<<endl;}
if (cin.get()=='\n'){
cout<<"Ellios:I see now...Maybe you are the right one."<<endl;}
if (cin.get()=='\n'){
	cout<<"Ellios: I have a proposal for you,you can free your people by killing me,the other way is join me,let us change the world and stop this war."<<endl;
	cout<<"Ellios: I saw everything already...This world is not really an ideal one...Soon enough the other kingdoms will declare war against us.\nEllios:No matter how hard you try,no matter how far you go...You will always see death,evil and suffering."<<endl;}
if (cin.get()=='\n'){
  cout<<"Ellios:I am not a god but I can do something to change this world that we live in...I believe that you can help me with that..."<<endl;
cout<<"Ellios:Choose...Do you want to fight me or consider what I've said?"<<endl;}
if (cin.get()=='\n'){
cout<<"Ellios:You and me are just the same..."<<endl;}
cout<<"*What will be your response?*\n<1> After what you people did?I won't trust you!\n<2> Are your words stating the truth?"<<endl;
cin>>opt1;
switch(opt1){
	case(1):
	cout<<"We are not the same!After what you people did?I won't trust you!"<<endl;
cout<<"Ellios:I was wrong perhaps...May you be able to defeat me..."<<endl;
	pchance=0+2;
srand((unsigned int)time(NULL));
cout<<"Final Battle Start!"<<endl<<endl;
endef+=50;
enatk+=120;
enhp=0+500;
times+=1;
cout<<"Press 1 to continue..."<<endl;
cin >> cont;
for(i = 0;i<100;i++){
dodge = evade + (rand() % 100);
chance = 30 + (rand()%100);
enchance = 45 +(rand()%100);
cout << "You are now free to make a move.What do you want to do?" << endl << endl;
 cout << "1 - <Slash/Strike>\n2 - <Block/Dodge>\n3 - <Use Healing Potion>" << endl << endl;
 cout << "Your HP : " << hpbase << " Enemy HP : " << enhp << endl << endl;
 cin >> fight;
 switch (fight) {
 case 1:
	if(energy<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"You do not have enough energy to perform the action."<<endl;}
 if (chance >= 50&&energy>=1) {
	SetConsoleTextAttribute(color,2);
 cout << "You made a successful hit!" << endl;
 enhp = (enhp + endef) - atkbase;
energy-=1;
if (hpbase<=100 && times>0) {
	SetConsoleTextAttribute(color,4);
	cout<<endl;
cout<<"**************************************************************************************"<<endl;
cout<<"I gave you a chance...Now,There won't be any..."<<endl;
cout<<"**************************************************************************************"<<endl<<endl;
enatk+=20;
times-=1;
 break;}
 }
 else if (chance < 50&&energy>=1) {
	SetConsoleTextAttribute(color,4);
 cout << "Your attack missed!" << endl;
energy-=1;
if (hpbase<=100 && times>0) {
	SetConsoleTextAttribute(color,4);
	cout<<endl;
cout<<"**************************************************************************************"<<endl;
cout<<"I gave you a chance...Now,There won't be any..."<<endl;
cout<<"**************************************************************************************"<<endl<<endl;
enatk+=20;
times-=1;
break;}
}
if (enchance >= 50 && enhp >=1) {
	SetConsoleTextAttribute(color,4);
cout << "You've taken damage from the enemy!" << endl;
hpbase = (hpbase + defbase) - (enatk);
} else if (enchance < 50 && enhp > 1) {
	SetConsoleTextAttribute(color,2);
cout << "Enemy missed." << endl;
break;
}
break;
case 2:
if (dodge >= 50 && enhp >= 1) {
	SetConsoleTextAttribute(color,2);
cout << "You successfully parried the attack!" << endl;
hpbase = hpbase + 5;
energy+=1;
if (enchance < 50) {
	SetConsoleTextAttribute(color,2);
cout << "Enemy missed." << endl;
break;
}
if (hpbase>maxhp){
	hpbase=hpbase - (hpbase-maxhp);
break;
}
} else if (dodge < 50&& enhp >= 1) {
	SetConsoleTextAttribute(color,4);
cout << "You've taken damage from the enemy!" << endl;
hpbase = (hpbase + defbase) - (enatk);
break;
}
break;
case 3:
	if(energy<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"You do not have enough energy to perform the action."<<endl;}
if (pchance >= 1) {
	SetConsoleTextAttribute(color,2);
cout << "Healing potion was consumed!" << endl;
pchance--;
potion -= 1;
energy-=1;
hpbase = hpbase += potion;
if (hpbase>maxhp){
	hpbase= hpbase - (hpbase-maxhp);
break;}
} 
else if (pchance < 1) {
	SetConsoleTextAttribute(color,4);
cout << "Sorry you have reached the maximum use of potion in a battle." << endl;
break;
}
break;
}
if(hpbase<=0){
	SetConsoleTextAttribute(color,4);
	cout<<"You are not worthy of my trust...If only you tried to use your head,you could've ended in a better place."<<endl;
cout<<"You have been defeated..."<<endl;
exit(EXIT_FAILURE);}
else if(enhp<=0){
	SetConsoleTextAttribute(color,2);
	cout<<"Ellios:You are really that person...Please make this world a better ...place..."<<endl;
cout<<"You've defeated Ellios!"<<endl;
system("cls");
for (int i = 0; i < sizeof(conclusionA)/sizeof(conclusionA[0]); i++ ) {
    cout << conclusionA[i] << endl;
    sleep(3);}
cout<<"**************************************************************************************"<<endl;
cout<<"Mission has been completed.\nYou Won! Thank you for playing the game."<<endl;
cout<<"**************************************************************************************"<<endl;
exit(EXIT_SUCCESS);}
}
case(2):
	SetConsoleTextAttribute(color,9);
	cout<<"Are your words stating the truth?\nTell me everything and I will listen."<<endl;
cout<<"**Ellios told you his ideals.\nI will help you but free my people first.\nEllios:I will..."<<endl;
cout<<"**You Joined the Venician Army**"<<endl<<endl;
system("cls");
for (int i = 0; i < sizeof(ending)/sizeof(ending[0]); i++ ) {
    cout << ending[i] << endl;
    sleep(3);}
cout<<"**************************************************************************************"<<endl;
cout<<"The first story has been completed!\nThank you for playing the game."<<endl;
cout<<"**************************************************************************************"<<endl;
exit(EXIT_SUCCESS);
}
}

void scen(int hpbase,int atkbase,int defbase){
system("Color 09");
cout << "Hello there! What is your name?" << endl;
getline(cin, name);
cout << "So you are " << name <<". Welcome to Clash Realm!"<< endl;
cout << "This world is full of chaos so make sure to be careful on everything that you do."<< endl;
if (cin.get()== '\n'){
cout << "Select what kingdom do you want to fight for." << endl;}
cout << "< 1 = Vespania , 2 = Rohan , 3 = Finndor , 4 = Lionheim >" << endl<<endl;
cin >> king;
cout<<"Well then,you are "<<name<<" from the kingdom of " << kingdom[king-1] << "!"<< endl;
cout << "Prepare yourself! "<< name << "..."<<endl;
cout << "You are about to start a new journey!"<<endl;
if (cin.get()=='\n'){
cout<<'\n';}
if (cin.get()== '\n'){
cout<< "  "	<<endl;
system("cls");
cout << '\n';}
do{
cout<<"*Enter* <NEXT> to go through the scene or *Enter* <SK1P> to move forward to the next scene"<<endl;
cin>>skip;
if (skip=="NEXT"||skip=="next"){
cout<<"************************************************************************************************************************************"<<endl;
 cout<<"**CHAPTER I : LIES ,DESTRUCTION & BETRAYAL"<<endl<<endl;
if (cin.get()=='\n'){
 cout<<"For a hundred years the world maintained peace and every kingdom respected each other.Kings have never fallen into greed...\nIt was a paradise for everyone to live in."<<endl;}
if (cin.get()=='\n'){
	cout<<endl;}
for (int i = 0; i < sizeof(story)/sizeof(story[0]); i++ ) {
	system("Color 04");
    cout << story[i] << endl;
    sleep(3);}
}
else if (skip=="SK1P"||skip=="sk1p"){
	cout<<"*Scene skipped.*"<<endl<<endl;
break;}
else {
	cout<<"Code Unrecognized.Press <y> to try again."<<endl;
cin>>repeat;
cin.clear();
cin.ignore();
}
}
while (repeat == 'Y' || repeat =='y');
if (cin.get()== '\n'){
system("cls");}
if (cin.get() =='\n'){
system("Color 05");
cout << "************************************************************************************************************************************" <<endl;
cout << "King: Here they come...Prepare to fight!"<<endl;}
if (cin.get() =='\n'){
cout << "King: I have to save you.You are the only hope of our kingdom."<<endl;
cout << "King: If you really want to know the truth behind everything,you have to go to Venicia .If possible stop him from doing what he wants."<<endl;}
if (cin.get() =='\n'){
cout << "King: We will hold our grounds..."<< "Go on my son! The kingdom of " << kingdom[king-1] <<" will not fall easily!"<<endl;}
if (cin.get() =='\n'){
cout<<"King: Farewell...Prince of " << kingdom[king-1]<<"....."<< endl;
cout << "**SCREAMS OF SOLDIERS ECHOES THROUGHOUT THE HALL**"<<endl;}
cout << "************************************************************************************************************************************" <<endl;
if (cin.get()=='\n'){
	cout<<"************************************************************************************************************************************" << endl;}
system ("cls");
system("Color F");
	cout<<"Press 1 to continue..."<<endl;
cin>>cont;
	cout << "Proceeding to next point";
	for (int d=0;d<3;d++){
cout<<"."<<flush;
sleep(1);}
system("cls");

	if(cont==1){
while(cont==1){
	timer=3;
while(timer!=(-1)){
	cout<<"\rPlease wait..." << timer << " " << flush;
sleep(1);
timer--;}
cont=2;
system("cls");}
}
mission (hpbase,atkbase,defbase);
}

int main(){
	cout<<"This is a simple text-based RPG Game made -Kerry-\nHope you enjoy!"<<endl<<endl;
scen(hpbase,atkbase,defbase);
return 0;
}
