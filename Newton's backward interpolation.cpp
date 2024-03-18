#include<bits/stdc++.h>
using namespace std;
int n=6;
double x[7];
double y[7][7];
string buffer;
vector<string>tmp;

void Input()
{
    ifstream f1;
    f1.open("newton's_backward.txt");

    while(! f1.eof())
    {
        f1>>buffer;
        tmp.push_back(buffer);
        buffer.clear();
    }



  for(int i=0,j=0;i<tmp.size();i+=2,j++)
  {
      x[j] = stod(tmp.at(i));
  }


  for(int i=1,j=0;i<tmp.size();i+=2,j++)
  {
      y[j][0] = stod(tmp.at(i));
  }
}

void backward_difference_table()
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
            cout<<i<<" "<<j<<" "<<setw(4)<<y[i][j]<<"\t";
        cout<<endl;
    }
}

int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}

double p_val(int n, double p)
{
    double p_original = p;

    for(int i=1;i<n;i++)
    {
        p_original = p_original*(p+i);
    }
    return p_original;
}

double interpolation(double val)
{
    double result = y[n-1][0];
    double h=x[1]-x[0];
    double p=(val-x[n-1])/h;


    for(int i=1;i<n;i++)
    {
        result = result + (p_val(i,p)*y[n-i-1][i]/factorial(i));
    }
    return result;
}

int main()
{
    Input();
    backward_difference_table();

    draw_difference_table();

   double val;

    while(true)
    {
        cout<<"Enter an interpolating value: "<<endl;
        cin>>val;

        if(val==0)
            break;

        double missing_value = interpolation(val);
        cout<<"Missing value for "<<val<<" is "<<missing_value<<endl;
    }
    return 0;

}
