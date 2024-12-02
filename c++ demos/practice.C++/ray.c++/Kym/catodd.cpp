#include <iostream>
using namespace std;

int odd(int,int);

int main()
{
  int a,b;
  cout<<"Enter the first number\n";
  cin>>a;
  cout<<"Enter the second number\n";
  cin>>b;
  odd(a,b);
}

int odd(int l, int m)
{
    int x;
    if(m==l)
    {
        cout<<"The two numbers are equal\n";
    }
    else if(l>m)
    {
        cout<<l<<" is larger"<<endl;
        for(x=m;x<=l;x++)
        {
            if(m%2 !=0)
            {
                cout<<x<<endl;
            }
        }
    }
    else
    {
        cout<<m <<"is larger"<<endl;
        for(x=l;x<=m;x++)
        {
            if(m%2 !=0)
            {
                cout<<x<<endl;
            }
        }
    }
    return 0;
}

