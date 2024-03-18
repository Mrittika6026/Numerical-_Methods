#include<bits/stdc++.h>
using namespace std;
double arr1[100];
double arr2[100];
double DIV[100];
double find_b(int n)
{
double sum=0.0;
for(int i=1;i<n;i++)
{
sum=sum+(1.0*arr1[i]*arr2[n-i]);
}
return sum;
}
void div()
{
cout<<"n\tDIV\n"<<endl;
for(int i=1;i<10;i++)
{
DIV[i]=(arr2[i]/(1.0*arr2[i+1]));
}
cout<<"\n";
}
int main()
{
double x,a,b,c,d;
double fx;
cout<<"enter