#include<bits/stdc++.h>
using namespace std;
int n;
double up, low, h;
double x[100]={0.0},y[100]={0.0};

void cal_x()
{
    for(int i=1;i<=n;i++)
    {
       x[i] = x[i-1] + h;
    }

}

void cal_y()
{
      for(int i=0;i<=n;i++)
      {
          y[i] = 1/(1+x[i]);
      }
}

void table()
{
    for(int i=0;i<=n;i++)
    {
        cout<<x[i]<<"\t"<<y[i]<<endl;
    }
}

double trapezoidal()
{
    double result1 =y[0]+y[n];
    for(int i=1;i<n;i++)
        result1 += 2*(y[i]);
    double result2 = result1*(h/2);
    return result2;
}

double simpson_1by3()
{
    double result1 = y[0] + y[n];
    for(int i=1;i<=n-1;i++)
    {
        if(i/2==0)
            result1 += 2*y[i];
        else
            result1 += 4*y[i];
    }
    double result2 = result1*(h/3);
    return result2;
}

int main()
{
    cout<<"Enter upper limit: ";
    cin>>up;
    cout<<"Enter lower limit: ";
    cin>>low;
    cout<<"Enter difference: ";
    cin>>h;
    n = (int)(((up-low)/h));
    cout<<"step intervals:"<<n+1<<endl;
    x[0] = low;
    cal_x();
    cal_y();
    cout<<"x"<<"\t"<<"y"<<endl;
    table();
    double result_T=0,result_S=0;
    result_T = trapezoidal();
    cout<<"The area using Trapezoidal rule is:"<<result_T<<endl;
    result_S = simpson_1by3();
    cout<<"The area using Simpson's 1/3 rule is:"<<result_S;

}
