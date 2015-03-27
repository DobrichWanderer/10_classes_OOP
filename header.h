#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

class supporters{
public:
supporters();
int getsupportersofteam()const;
int getplayersinteam()const;
private:
   int playersinteam;
   int supportersofteam;
};

double average_supporters_for_player(supporters);


//country
class country{
public:
country();
void readcountry();
void printcountry();
char* getname() ;
int long getpopulation() const;
double getterritory() const;

private:
   char name[30];
   int long population;
   double territory;
};

double densityofpop(country);

//matterial
class matterial{
public:
    matterial();
double getmass();
double getvolume();

private:
double  volume;
double  mass;
};
double density(matterial);
//date

class date{
public:
date ();
void readdate();
void print();
int getday()const;
int getyear()const;
int getmonth()const;

private:
    int day;
    int month;
    int year;
};
void printnext(date);

//t-shirt
class Shirt{
public:
Shirt();
int getshirtsize()const;
bool getinstock()const;
private:
    int shirtsize;
    bool instock;
};

//footballer
class Footballer{
public:
    Footballer();
 int   getnumber()const;
 char* getname();
 int getacceleration()const;
 int gettop_speed()const;
 int getfinishing()const;
 int getcrossing()const;
 int getfree_kicks()const;
 int getleadership()const;
 void print_player();
private:
char name [20];
int number;
int acceleration;
int top_speed;
int finishing;
int crossing;
int free_kicks;
int leadership;
};

int average(Footballer);


//Cars

class Cars{
public:
    Cars();
char* get_name();
int get_top_speed()const;
int get_handling()const;
void print_name();
void print_car();
private:
    char car_name[20];
    int top_speed;
    int handling;
};
void Race (Cars const&,Cars const&);


//Triangle

class Triangle{
private:
    double a;
    double b;
    double c;

public:
    Triangle();
    Triangle(double,double,double);
    double getA() const {return a;}
    double getB() const {return b;}
    double getC() const {return c;}
};
double p(Triangle);
double S(Triangle);
void print(Triangle);
bool exist(Triangle);

//Point

struct Point{
private:
double x;
double y;
public:
//constructors
Point ();
Point (double,double);
//selectors
double getx() const;
double gety() const;
//mutators
void readx();
void ready();
};
double givedistance(Point const &,Point const &);
void print (Point const &);

//Players

class Players{
public:
    Players();
    Players(char [],int);
    int get_number()const;
    void read();
    void print()const;

private:
    char name[21];
    int number;
};

void get_players (int n,Players [],Players* []);
void print_players(int n,Players* []);
void sort_players(int n,Players* []);



#endif // HEADER_H_INCLUDED
