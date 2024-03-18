#include<bits/stdc++.h>
using namespace std;
int n;
double x[100],y[100];

void input()
{
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
}

double trapezoidal()
{
    double h=x[1]-x[0];
    cout<<"Difference: "<<h<<endl;
    double result1 =y[0]+y[n-1];
    for(int i=1;i<n-1;i++)
        result1 += 2*(y[i]);
    double result2 = result1*(h/2);
    return result2;
}

double simpson_1by3()
{
    double h=x[1]-x[0];
    cout<<"Difference: "<<h<<endl;
    double result1 = y[0] + y[n-1];
    for(int i=1;i<n-1;i++)
    {
        if(i/2==0)
            result1 += 4*y[i];
        else
            result1 += 2*y[i];
    }
    double result2 = result1*(h/3);
    return result2;
}

double simpson_3by8()
{
    double h=x[1]-x[0];
    cout<<"Difference: "<<h<<endl;
    double result1 = y[0] + y[n-1];
    for(int i=1;i<n-1;i++)
    {
        if(i==(i+2))
            result1 += 2*y[i];
        else
            result1 +=3*y[i];
    }
    double result2 = (result1*h*3)/8;
    return result2;
}

int main()
{
    cout<<"Enter the number of terms:";
    cin>>n;
    cout<<"Enter the tabular values:"<<endl<<"X"<<"\t"<<"Y"<<endl;
    input();
    double result_T=0,result_S=0,result_SS;
    result_T = trapezoidal();
    cout<<"The area using Trapezoidal rule is:"<<result_T<<endl;
    result_S = simpson_1by3();
    cout<<"The area using Simpson's 1/3 rule is:"<<result_S;
    result_SS = simpson_3by8();
    cout<<"The area using Simpson's 3/8 rule is:"<<result_SS;
    return 0;
}
