#include <iostream>
using namespace std;
int main()
{
int number1;
int number2;
int number3;
cout<<"Press the first  number :";
cin>>number1;
char t;
cout <<"Press operation(+,-,*,/):";
cin >> t;
cout<<"Press the second number:";
cin>>number2;
if (t == '+')
{
number3 = number1 + number2;
cout<<"Result; "<<number3<<endl;
}
if (t == '-')
{
number3 = number1 - number2;
cout<<"Result: "<< number3 << endl;
}
if (t == '*')
{
number3 = number1 * number2;
cout<<"Result: "<<number3<<endl;
}
if (t == '/')
{
    if (number2 == 0) {
        cout<<"0 can't be here!"<<endl;
    } else {
        number3 = number1 / number2;
        cout<<"Result: " <<number3<<endl;
    }
}
//text
}
 
