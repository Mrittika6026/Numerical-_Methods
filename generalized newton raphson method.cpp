#include<bits/stdc++.h>
using namespace std;
double func(double x)
{
  return x*x*x-x*x-x+1;;
}  
double deriveFunc1(double x)
{
  return 3*x*x-2*x-1;
}
double deriveFunc2(double x)
{
  return 6*x-2;
}

double gnewtonraphson1(double x)
{
return x-(2*func(x)/deriveFunc1(x)) ;
}
double gnewtonraphson2(double x)
{
return x-(deriveFunc1(x)/deriveFunc2(x));
}
int main()
{
double x=0.5,x1,x2,i=0;
x1=gnewtonraphson1(x);
x2=gnewtonraphson2(x);
while(abs(x1-x2)>0.0001)
{
  x=(x>x2)?x1:x2;
  x1=gnewtonraphson1(x);
  x2=gnewtonraphson2(x);
  cout<<i++<<"\t"<<x1<<"\t"<<x2<<endl;
}
return 0;
}      