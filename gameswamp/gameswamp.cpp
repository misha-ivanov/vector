#include <iostream>
using namespace std;
int main()
{
int x;
int y;
int health;
int power;
int speed;
char p;
x = 0;
y = 0;
char m;
cout<<"Hello! It's the Swamp! You are traveler. You heard, that there is a valuable artifact in the Swamp and now you find it. Change, what will be your best parametr: speed, health, power. Write this parameter:"<<endl;
cin >> p;
if(p == 's')
    {
    speed = 3; 
    }
if(p == 'h')
    {
    health =10;
    }
if(p == 'p')
    {
    power = 10;
    }
cout<<" Press W to go forward, A to go left, D to go right and S to go back. Your coordinates: x=0;y=0. Now try to move. "<<endl;
cin >> m;
while(m != 'q')
{
    if(m == 'w')
        {
        y++;
        }
    if(m == 'a')
        {   
        y--;
        }   
    if(m == 'd')
        {
        x++;
        }
    if(m == 's')
        {
        x--;
        }
    if(x == 5 && y == 5 )//artifact place
    {
    cout<<"My congratulations!!! You found main artifact!"<<endl;
    }
    cout<<"Nice! Keep going. Your coordinates about x:" << x << " y;" << y <<endl;
    cin >> m;
}
return 0;
}
