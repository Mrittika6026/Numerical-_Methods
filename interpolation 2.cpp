#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x[1000],y[1000],del[1000],del2[1000],del3[1000],del4[1000],del5[1000],x1,p,h;
    int i,j,k,n,m,ch;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"Enter the values of x and y:"<<endl;
    cout<<"x y=f(x)"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    while(1){
    cout<<"1.Forward "<<endl;
    cout<<"2.Backward "<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"Enter choice:";
    cin>>ch;
    if(ch==1){
    cout<<"Enter X:";
    cin>>x1;
    h=(x[1]-x[0]);
    p=(x1-x[0])/h;
    for(i=0; i<n-1; i++)
    {
        del[i]=y[i+1]-y[i];
        cout<<"del["<<i<<"]="<<del[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<n-2; i++)
    {
        del2[i]=del[i+1]-del[i];
        cout<<"del2["<<i<<"]="<<del2[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<n-3; i++)
    {
        del3[i]=del2[i+1]-del2[i];
        cout<<"del3["<<i<<"]="<<del3[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<n-4; i++)
    {
        del4[i]=del3[i+1]-del3[i];
        cout<<"del4["<<i<<"]="<<del4[i]<<" ";
    }
     cout<<endl;
     double a;
    a= y[0]+p*del[0]+((p*(p-1))*del2[0])/2+((p*(p-1)*(p-2))*del3[0])/6+((p*(p-1)*(p-2)*(p-3))*del4[0])/24;
    cout<<"Required value is "<<a<<endl;
    }
   else if(ch==2){
    cout<<"Enter the desired point:";
    cin>>x1;
    h=(x[1]-x[0]);
    p=(x1-x[n-1])/h;
    for(i=0; i<n-1; i++)
    {
        del[i]=y[i+1]-y[i];
        cout<<"del["<<i<<"]="<<del[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<n-2; i++)
    {
        del2[i]=del[i+1]-del[i];
        cout<<"del2["<<i<<"]="<<del2[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<n-3; i++)
    {
        del3[i]=del2[i+1]-del2[i];
        cout<<"del3["<<i<<"]="<<del3[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<n-4; i++)
    {
        del4[i]=del3[i+1]-del3[i];
        cout<<"del4["<<i<<"]="<<del4[i]<<" ";
    }
     cout<<endl;
     double a1;
    a1=y[n-1]+p*del[n-2]+((p*(p+1))*del2[n-3])/2+((p*(p+1)*(p+2))*del3[n-4])/6+((p*(p+1)*(p+2)*(p+3))*del4[n-5])/24;
    cout<<"Required value is "<<a1<<endl;
    }
    else if(ch==0)
    {
        exit(1);
    }
    }
    return 0;
}

