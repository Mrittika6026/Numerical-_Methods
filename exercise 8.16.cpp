#include<bits/stdc++.h>
using namespace std;
double h=0.2;

double f(double x,double y)
{
    return (((3*x) + y)/(x + (2*y)));
}

double solve(double x,double y)
{
    double k1,k2,k3,k4,result=0;
    k1 = h*f(x,y);
    k2 = h*f(x+(0.5*h),y+(0.5*k1));
    k3 = h*f(x+(0.5*h),y+(0.5*k2));
    k4 = h*f((x+h),(y+k3));

    return y + (1/6.f)*(k1 + (2.f*k2) + (2.f*k3) +k4);

}
int main()
{
    double x0,y0,x1,x2;
    cout<<"Enter x0,y0 "<<endl;
    cout<<"x  y"<<endl;
    cin>>x0>>y0;
    cout<<"Enter the values of x to be evaluated:"<<endl<<"x1  x2"<<endl;
    cin>>x1>>x2;


    double result1 = solve(x0,y0);
    cout<<"y"<<"("<<x1<<") = "<<result1<<endl;

    y0 = result1;
    double result2 = solve(x2,y0);
    cout<<"y"<<"("<<x2<<") = "<<result2<<endl;

}
