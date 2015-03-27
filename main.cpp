#include <iostream>
#include "definitions.cpp"
using namespace std;

int main()
{

//supporters                      1
    supporters our;
    cout<<"each player of this team has average of "<<average_supporters_for_player(our) <<"supporters"<<endl;

    system("pause");
//country                           2
country sam;
sam.readcountry();
sam.printcountry(); cout<<"has density of population of "; cout<<densityofpop(sam)<<"people per square Km"<<endl;

system("pause");
//material                           3
matterial sample;
cout<<endl<<"this matterial has density of: ";
cout<<density(sample)<<endl;

//date                                    4
system("pause");
date k;
k.readdate();
k.print();
printnext(k);


//shirt                                       5
system("pause");
Shirt q;
if (q.getinstock()==0) cout<<"no such size of shirt in inventory"<<endl;
else cout<<"shirt in inventory"<<endl;


system("pause");
//footballer                                   6
Footballer noob;
noob.print_player(); cout<<endl;
if (average(noob)>=85)
{cout<<"is world class!";}
if ((average (noob))<85&&(average (noob)>=65))
{cout<<"is Professional";}
if ((average (noob)<65)&&(average (noob)>=50))
{cout<<"is semi-Pro";}
if ((average (noob)<50))
{cout<<"is amateur";}
    system("pause");
// cars                                        7
    Cars one;
    Cars two;
    race(one,two);

// triangles                                          8
    system("pause");
    Triangle tri[30];
    int n;
        cout<<"How many triangles?"<<endl;
        cin>>n;
        cout<<endl;
double side_a,side_b,side_c;
    for (int i=0;i<n;i++){
            cout<<"a=";cin>>side_a;
            cout<<"b=";cin>>side_b;
            cout<<"c=";cin>>side_c;cout<<endl;
        tri[i]=Triangle(side_a,side_b,side_c);
        if (!exist(tri [i])){
            cout<<"No such triangle"<<endl;
        }
    }

Triangle maxi=tri[0];
for (int i=0;i<n;i++){
        if (S(tri[i])>S(maxi)){
                maxi=tri[i];}
}
if ( exist(maxi)) {print (maxi);}
else cout<<"no valid entry of triangles"<<endl;

system("pause");
// point                                                 9
Point a,b;
    a.readx();
    a.ready();
    print(a);
    b.readx();
    b.ready();
    print(b);
cout<<"distance between the two points is:"<<endl;
    cout<<givedistance(a,b); cout<<endl;
//
system ("pause");

// sort teams                                                   10
int f;
    cout<<"how many players?"<<endl;
    cin>>f;
    Players team[20];
    Players* pteam[20];
    get_players(f,team,pteam);
    cout<<"unsorted players by number:"<<endl;
    print_players(f,pteam);
    sort_players(f,pteam);
    cout<<"sorted players by number:"<<endl;
    print_players(f,pteam);

    system("pause");
//end
    return 0;
}
