#include<bits/stdc++.h>
using namespace std;
int n=7;
double x[7];
double y[7][7];
//string buffer;
//vector<string>tmp;

void Input()
{
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i][0];
    }
}

void forward_difference_table()
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            y[j][i] = y[j+1][i-1] -y[j][i-1];
        }
    }
}

void draw_difference_table()
{
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<"\t";
        for(int j=0;j<n-i;j++)
            cout<<y[i][j]<<"\t";
        cout<<endl;
    }
}

double diff1(int p)
{
    int h=0.2;
    double result1= y[1][1] ;
    for(int i=0;i<n;i++)
    {
        if(i/2==0)
            result1 -= ((y[1][i])/(i+2));
        else
            result1 += ((y[1][i])/(i+2));
    }
   double result = result1/h;
   return result;
}

int main()
{
    cout<<"Enter the tabular values:"<<endl;
    Input();
    forward_difference_table();
    draw_difference_table();
    double val;
    //while(true)
   // {
        cout<<"Enter value: ";
        cin>>val;
        //if(val==0)
           // break;
    double r1 = diff1(val);
//    double r2 = diff2(val);
    cout<<"First derivative value is: "<<r1<<endl;
//    cout<<"Second derivative value is: "<<r2<<endl;

    //}

}

