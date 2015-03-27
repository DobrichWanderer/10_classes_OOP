#include <cmath>
#include <iomanip>
#include <cstring>
#include <windows.h>
#include "header.h"
#include <iostream>
using namespace std;

//definition of support
supporters::supporters(){
cout<<"how many supporters does the team have?"<<endl;
cin>>supportersofteam;
cout<<"how many players does the team have?"<<endl;
cin>>playersinteam;
}


int supporters::getsupportersofteam()const{
return supportersofteam;
}
int supporters::getplayersinteam()const{
return playersinteam;
}


double average_supporters_for_player(supporters gt){
return gt.getsupportersofteam()/gt.getplayersinteam();
}

//definition of country
country::country(){}
void country:: readcountry(){
cin.ignore();
cout<<"name of country"<<endl;
cin.getline(name,30);
cout<<"population"<<endl;
cin>>population;
cout<<"area (sq. K)"<<endl;
//cin.ignore();
cin>>territory;
}
void country:: printcountry(){
char* s=getname();
while (*s){cout<<*s; s++;}
cout<<" "<<"population of "<<population<<"area of "<<territory<<endl;
}
char* country:: getname(){
return name;
}
int long country:: getpopulation() const{
return population;}
double country:: getterritory() const{
return territory;
}

double densityofpop(country sam){
return sam.getpopulation()/sam.getterritory();
}


//definition of matter
   matterial::matterial(){
   cout<<"volume?"<<endl;
   cin>>volume;
   cout<<"mass?"<<endl;
   cin>>mass;
   }
double matterial::getmass(){
return mass;}
double matterial::getvolume(){
return volume;}

double density(matterial fg){
return fg.getmass()/fg.getvolume();
}

//definition of date
date::date():day(1),month(1),year(2000)
{}

void date::readdate(){
cout<<"day: "<<endl;
cin>>day;
cout<<"month: "<<endl;
cin>>month;
cout<<"year: "<<endl;
cin>>year;
}
void date:: print(){
    cout<<"the date in eu style (if correct ) is: ";
    cout<<getday()<<"/"<<getmonth()<<"/"<<getyear()<<endl;
}
int date::getday()const{
return day;
}

int date:: getyear()const{
return year;}
int date:: getmonth()const{
return month;
}

void printnext(date m){
    cout<<"the date in us style is: ";
 cout<<m.getmonth()<<"/"<<m.getday()<<"/"<<m.getyear()<<endl;
}


//definition of shirt
Shirt::Shirt(){
cout<<"size?"<<endl;
cin>>shirtsize;
if (shirtsize!=45&&shirtsize!=42&&shirtsize!=38&&shirtsize!=37&&shirtsize!=36&&shirtsize!=34&&shirtsize>=30) instock=1;
else instock=0;
}

int Shirt::getshirtsize()const{
return shirtsize;
}

bool Shirt::getinstock()const{
return instock;}




//definitions of Cars
bool again=0;
Cars::Cars(){
cout<<"name of car?"<<endl;
cin.ignore(); //игнорира новия ред;
cin.getline (car_name,20);
cout<<"top speed of car?"<<endl;
cin>>top_speed;
cout<<"handling?"<<endl;
cin>>handling;
again=1;
}

char* Cars::get_name(){
return car_name;
}

int Cars::get_handling()const{
return handling;
}

int Cars::get_top_speed()const{
return top_speed;
}

void Cars::print_name(){
char*p=get_name();
while (*p) {cout<<*p; p++;}
cout<<" ";
}

void Cars::print_car(){
print_name();
cout<<"top speed:"<<get_top_speed();
cout<<" handling:"<<get_handling();
}

void race(Cars one,Cars two){
if (((one.get_top_speed()*3)*(one.get_handling()*5))>= (two.get_top_speed()*3)*(two.get_handling()*5))
{one.print_car(); cout<<" has won the race!";}
else {two.print_car(); cout<<" has won the race!";}
}


//end of cars

//footballer
Footballer::Footballer(){
cout<<"name:"<<endl;
cin.ignore();
cin.getline(name,20);
cout<<"number:"<<endl;
cin>>number;
cout<<"acceleration:"<<endl;
cin>>acceleration;
cout<<"top speed:"<<endl;
cin>>top_speed;
cout<<"finishing:"<<endl;
cin>>finishing;
cout<<"free kicks:"<<endl;
cin>>free_kicks;
cout<<"leadership:"<<endl;
cin>>leadership;
cout<<"crossing:"<<endl;
cin>>crossing;
};
 int Footballer::   getnumber()const{
 return number;
 }
 char*  Footballer::  getname(){
 return name;
 }
 int  Footballer:: getacceleration()const{
 return acceleration;}
 int  Footballer:: gettop_speed()const{
 return top_speed;}
 int Footballer::  getfinishing()const{
 return finishing;}
 int Footballer::  getcrossing()const{
 return crossing;}
 int Footballer::  getfree_kicks()const{
 return free_kicks;}
 int Footballer::  getleadership()const{
 return leadership;
 }

void Footballer::  print_player(){
char* q=name;
while (*q) {cout<<*q; q++;}
cout<<" "; cout<<getnumber();
}

int average(Footballer noob){
return (noob.getacceleration()+noob.gettop_speed()+noob.getfinishing()+noob.getcrossing()+noob.getfree_kicks()+noob.getleadership())/6;
}

//end of footballer


//Definitions of Triangle;

Triangle::Triangle(){
a=0;b=0;c=0;
}

Triangle::Triangle(double _a,double _b,double _c){
a=_a;b=_b;c=_c;
}

double p(Triangle p){
    double halfperimeter= (p.getA()+p.getB()+p.getC())/2;
    return halfperimeter;
}

double S(Triangle t){
double face=sqrt(p(t)*(p(t)-t.getA())*(p(t)-t.getB())*(p(t)-t.getC()));
return face;
}

void print(Triangle z){
cout<<"The triangle with highest surface "<<S(z)<<" has:"<<endl;
cout<<"side a="<<z.getA()<<endl;
cout<<"side b="<<z.getB()<<endl;
cout<<"side c="<<z.getC()<<endl;;
}

bool exist(Triangle j){
return j.getA()+j.getB()>j.getC()&&j.getC()+j.getB()>j.getA()&&j.getA()+j.getC()>j.getB();

}
//end of definitons of Triangle


//definitons of Point

Point::Point(){
x=0;    y=0;
}

Point::Point(double a, double b){
x=a;    y=b;
}

//also possible
//Point::Point(double a, double b):x(a),y(b)
//{}


double Point::getx()const{
return x;
}

double Point::gety()const{
return y;
}

void Point::readx(){
cout<<"x=";
cin>>x;
}

void Point::ready(){
cout<<"y=";
cin>>y;
}

double givedistance(Point const& a,Point const& b){
double f=pow(a.getx()-b.getx(),2);
double g=pow(a.gety()-b.gety(),2);
double d=sqrt(f+g);
return d;
}

void print(Point const & s){
cout <<"("<<s.getx()<<","<<s.gety()<<")"<<endl;
}
//end of definition of point


//Players

Players::Players(){
char generic[21]="Unnamed";
strcpy(name,generic);
number=0;
}

Players::Players(char recieved_name [],int recieved_number){
strcpy(name,recieved_name);
number=recieved_number;
}

void Players::read(){
cout<<"name? ";
cin.ignore();
cin.getline(name,20);
cout<<"number? ";
cin>>number;
cout<<endl;
}

void Players::print()const{
cout<<name<<"  "<<number<<endl;
}

int Players::get_number()const{
return number;
}


void get_players(int n,Players those [],Players* pthose[]){

    for (int i=0;i<n;i++){
        those[i].read();
        pthose[i]=&those[i];
    }
}

void print_players(int n,Players* show[]){
    for (int i=0;i<n;i++){
        show[i]->print();
    }

}

void sort_players(int n,Players* s[]){
    for (int i=0;i<n-1;i++){
        int mini=(s[i]->get_number());
        int minpos=i;
            {for (int j=i+1;j<n;j++){
                if (mini>(s[j]->get_number())){
                mini=s[j]->get_number();
                minpos=j;
                }

            }
           // swap(s[i],s[minpos]);
            Players* swaper=s[minpos]; s[minpos]=s[i];s[i]=swaper;
            }
}


}

//end of definitions of players
