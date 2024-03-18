#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x[100],y[100],p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,k=0;
    int n,m;
    cout<<"enter number of terms: ";
    cin>>m;
    cout<<"enter highest power: ";
    cin>>n;
    cout<<"enter x and y values"<<endl;
    cout<<"x  y"<<endl;
    for(int i=0;i<m;i++)
        cin>>x[i]>>y[i];


    for(int i=0;i<m;i++)
    {
        p += x[i];
        q += y[i];
        r += (x[i]*x[i]);
        s += (x[i]*x[i]*x[i]);
        t += (x[i]*x[i]*x[i]*x[i]);
        u += (x[i]*y[i]);
        v += (x[i]*x[i]*y[i]);
    }

    double d=0,d1=0,d2=0,d3=0,a=0,b=0,c=0;

    d = ((m*r*t) - (m*s*s) - (p*p*t) + (2*p*r*s) - (r*r*r));
    d1 = ((q*r*t) - (q*s*s) - (p*u*t) + (p*s*v) + (r*u*s) - (r*r*v));
    d2 = ((m*u*t) - (m*v*s) - (q*p*t) + (q*r*s) + (r*p*v) - (r*r*u));
    d3 = ((m*r*v) - (m*s*u) - (p*p*v) + (p*r*u) + (q*p*s) - (r*r*q));

    a = d1/d;
    b = d2/d;
    c = d3/d;

    cout<<"The values of a, b and c are"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;

    return 0;
}
