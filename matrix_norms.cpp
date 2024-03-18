#include<bits/stdc++.h>
using namespace std;

int n,m;
double x[101][101];

void input()
{
    ifstream file;
    file.open("norm.txt");
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
double column_norm()
{
    double c = 0,maximum_c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c +=x[j][i];

        }
      maximum_c = max(maximum_c,c);
      c=0;
    }
  return   maximum_c;
}

double euclidean_norm()
{
    double e=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            e+=(x[i][j]*x[i][j]);
        }
    }
    return sqrt(e);
}

double row_norm()
{
    double r=0,maximum_r=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            r += x[i][j];
        }
         maximum_r = max(maximum_r,r);
         r=0;
    }
    return maximum_r;
}

int main()
{
    input();
    display_matrix();
    cout<<"column norm = "<<column_norm()<<endl;
    cout<<"euclidean norm = "<<euclidean_norm()<<endl;
    cout<<"row norm = "<<row_norm()<<endl;

    return 0;
}
