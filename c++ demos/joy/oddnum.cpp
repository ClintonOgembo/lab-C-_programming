#include <iostream>
using namespace std;

  double odd(int l, int m)
  {
     if(l==m)
     {
         cout<<"they are equal\\n";
     }
     else if(l>m)
     {
         cout<<"l is larger than m\n";
         for(m%2==1;m<l;m++)
         {
             cout<<m;
         }
     }
     else
     {
         cout<<"m is larger than l\n";
         for(l%2==1;l<m;l++)
         {
             cout<<l;
         }
     }
  }
  int main()
  {
      int l, m;
      cout<<"Enter l\n";
      cin>>l;
      cout<<"Enter m\n";
      cin>>m;
      return 0;
  }

