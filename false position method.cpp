#include<bits/stdc++.h>
using namespace std;
double func(double x)
{
  return x*x*x-2*x-5;
}


void falsepos(double a,double b)
{
if(func(a)*func(b)>=0)
{
cout<<"a and b assumption is wrong"<<endl;
return ;
}
double p=a;
double arr[20];  
for(int i=0;i<20;i++)
{
  p=(a*func(b)-b*func(a))/(func(b)-func(a));
  arr[i]=p;
  if(func(p)<0)
    a=p;
  else
    b=p;
    //arr[i]=p;
}
int i;
for( i=0;i<20;i++)
{
  if(abs(arr[i]-arr[i+1])>0.0001)
    cout<<i<<" "<<arr[i]<<endl;
  else
   break;
   //cout<<"iteration: "<<i<<endl;
}
cout<<"the value of root is "<<p<<endl;
//cout<<"iteration: "<<i<<endl;
}
void iteration( double root)
{
  double x=2,iter=5.0,i=1;
  while(true){
  x=func(x);
  if(fabs(x-root)<0.0001 )
    break;
  cout<<"current value " <<x<<endl;
  i++;
  root=x ;
  cout<<"the current value is "<<x<<endl;
  }
  }

int main()
{
  double a,b,choice;
  cout<<"enter 1 for false position"<<endl;
  cout<<"enter 2 for iteration "<<endl;
  cin>>choice;
  if(choice==1)
  {
     a=-2;
     b=3;    
     falsepos(a,b);
    // return ;
  }
  if(choice==2)
  {
  a=2;
  iteration(a);
  //return;
  }
  
  return 0;
  }                