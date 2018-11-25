#include <iostream>
using namespace std;
int main()
{
int mn;
int n;
int f;
mn = 67;
cout <<"Let's play the game. I think up the number, you guess, goes? Clarification, you can write only a number. Well, let's start! Write the number:"<<endl;
cin>>n;
while(n != mn)
    {
    cout<<"It's not true!"<<endl;
    if(n < mn )
        {
        cout<<"My number is bigger..."<< endl;
        cout<<"Try again:"<<endl;
        }
    if(n > mn)
        {
        cout<<"My number is smaller..."<<endl;
        cout<<"Try again:"<<endl;
        }
        cin >> n;
    }   
cout<<"You are right!"<<endl;
return 0;
}
