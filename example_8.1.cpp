#include<bits/stdc++.h>
using namespace std;


int main()
{
     double x,y,q_x,y1,y2,y3,y4,y5;

     cout<<"enter the given values x0,y0,x respectively"<<endl;
     cin>>x>>y>>q_x;

     y1 = x -(y*y);
     cout<<y1<<endl;
     y2 = 1 - (2*y*y1);
     cout<<y2<<endl;
     y3 = (2*y*y2*(-1)) - (2*y1*y1);
     cout<<y3<<endl;
     y4 = (2*y*y3*(-1)) - (6*y1*y2);
     cout<<y4<<endl;
     y5 = (2*y*y4*(-1)) - (8*y1*y3) - (6*y2*y2);
     cout<<y5<<endl<<endl;

     double result = 1 + (q_x*y1) + ((q_x*q_x*y2)/2) + ((q_x*q_x*q_x*y3)/6) + ((q_x*q_x*q_x*q_x*y4)/24) + ((q_x*q_x*q_x*q_x*q_x*y5)/120);
     cout<<setprecision(5) <<fixed <<result<<endl;
     return 0;

}
