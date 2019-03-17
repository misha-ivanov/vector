#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
int n, a, p, mn1,mn2, mn3, mn4, mn5, mn6;
mn1 = 0;
mn2 = 0;
mn3 = 0;
mn4 = 0;
mn5 = 0;
mn6 = 0;
srand(time(NULL));
for(a = 1; a < 101; a++)
	{
	n = rand() % 6 + 1;
	if(1 == n)
		{
		mn1 = mn1 + 1;		
		}
	if(n == 2)
                {
                mn2 = mn2 + 1;
                }
	if(n == 3)
                {
                mn3 = mn3 + 1;
                }
	if(n == 4)
                {
                mn4 = mn4 + 1;
                }
	if(n == 5)
                {
                mn5 = mn5 + 1;
                }
	if(n == 6)
                {
                mn6 = mn6 + 1;
                }
	}
cout<<"mn1="<<mn1<<endl<<"mn2="<<mn2<<endl<<"mn3="<<mn3<<endl<<"mn4="<<mn4<<endl<<"mn5="<<mn5<<endl<<"mn6="<<mn6<<endl;
return 0;
}
