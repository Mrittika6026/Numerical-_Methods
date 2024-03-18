#include<bits/stdc++.h>
using namespace std;
double func(double x)
{
  return sin(x)-10*x+10;
}  
double deriveFunc(double x)
{
  return cos(x)-10;
}
void newtonraphson(double x)
{
  double h=func(x)/deriveFunc(x);  
  int i=0;
  while(abs(h)>=0.001)
  {
    h=func(x)/deriveFunc(x);
    x=x-h;
    i++;
  }
  cout<<"the value of the root is:"<<x<<endl;
  cout<<"iteration i:"<<i<<endl;
}
int main()
{
double x0=0;
newtonraphson(x0);
return 0;
}      