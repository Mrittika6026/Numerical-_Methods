#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int n;
double x[101],y[101][101];

void input()
{
    cout<<"Enter number of terms:"<<endl;
    cin>>n;

    ofstream f1;
    f1.open("Newton's backward.txt");
    f1<<"Number of terms:"<<" "<<n;
    f1<< "\n";
    f1<<"X values"<<"\t"<<"Y values"<<"\n";

    cout<<"X values:"<<"\t"<<"Y values"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i][0];
        f1<<x[i]<<"\t"<<"\t"<<y[i][0]<<"\n";
    }

}

int main()
{
    input();

}
