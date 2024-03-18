#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x[100],y[100],sum_x=0,sum_y=0,sum_x2=0,sum_xy=0,a0,a1,m;
    cout<<"Enter number of terms:";
    cin>>m;

    cout<<"enter x and y values"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>x[i]>>y[i];
    }

    for(int i=0;i<m;i++)
    {
        sum_x += x[i];
        sum_y += y[i];
        sum_x2 += (x[i]*x[i]);
        sum_xy += (x[i]*y[i]);
    }

    a1 = (sum_xy - ((sum_x * sum_y)/m))/(sum_x2 - ((sum_x * sum_x)/m));
    a0 = (sum_y - (sum_x * a1))/m;

    cout<<"The solutions are:"<<endl;
    cout<<a0<<" " <<a1<<endl;

    return 0;

}
