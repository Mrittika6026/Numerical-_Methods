#include<bits/stdc++.h>
using namespace std;

int n,m;
int x[101][101];

void input()
{
    ifstream file;
    file.open("triangle.txt");
    file>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            file>>x[i][j];
        }
    }
}

void display_matrix()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool checking_upper()
{
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if((x[i][j]!=0))
                return false;
        }
    }
    return true;
}

bool checking_lower()
{
   for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if((x[i][j]!=0))
                return false;
        }
    }
    return true;
}

int main()
{
    input();
    display_matrix();
    if(checking_upper())
        cout<<"Upper triangular matrix";
    else if(checking_lower())
        cout<<"Lower triangular matrix";
    else if(!checking_upper())
        cout<<"Not upper triangular matrix"<<endl;
    else
        cout<<"Not lower triangular matrix"<<endl;

    return 0;
}
