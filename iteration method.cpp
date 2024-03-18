#include<bits/stdc++.h>
using namespace std;
double func(double x)
{
return x*x*x-2*x-5;
}
int main()
{
double x=1,root=2,i=1;
while (true)
{
x=func(x);
if((fabs(x-root))<0.0001)
break;
cout<<"current value "<<x<<endl;
i++;
root=x;
}
return 0;
}