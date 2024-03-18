#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x[100],y[100],z[100],m,d=0,d1=0,d2=0,d3=0,p=0,q=0,r=0,s=0,u=0,v=0,w=0,k=0,a0,a1,a2;

    cout<<"enter number of terms:";
    cin>>m;

    cout<<"enter x,y and z values"<<endl;
    for(int i=0;i<m;i++)
        cin>>x[i]>>y[i]>>z[i];

    for(int i=0;i<m;i++)
    {
        p += x[i];
        q += y[i];
        r += z[i];
        s += (x[i]*x[i]);
        u += (z[i]*x[i]);
        v += (x[i]*y[i]);
        w += (y[i]*y[i]);
        k += (y[i]*z[i]);
    }

    // solution by Chramer's rule//

    //Calculating the determinants//
    d = (m*s*w) - (m*v*v) - (p*p*w) + (2*p*q*v) - (q*q*s);
    d1 = (r*s*w) - (r*v*v) - (p*u*w) + (p*k*v) + (q*u*v) - (q*s*k);
    d2 = (m*u*w) - (m*k*v) - (p*r*w) + (q*r*v) + (p*q*k) - (q*q*u);
    d3 = (m*s*k) - (m*u*v) - (p*p*k) + (p*q*u) + (p*r*v) - (r*q*s);

    //calculating a0,a1,a2//
    a0 = d1/d;
    a1 = d2/d;
    a2 = d3/d;

    cout<<"The solution of the system is:"<<endl;
    cout<<a0<<" "<<a1<<" "<<a2<<endl;

    return 0;

}
