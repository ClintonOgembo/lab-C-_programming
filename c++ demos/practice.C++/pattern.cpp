#include <iostream>
using namespace std;
int main()
{
    int pattern,size,x,y;
    char pattern_type;
    cout<<"choose pattern from the list below\n";
    cout<<"1.square\n 2.triangle\n 3.inverted triangle\n";
    cin>>pattern;
    switch(pattern)
    {
    case 1:
        cout<<"choose pattern type or character\n";
        cin>>pattern_type;
        cout<<"specify the size of the square\n";
        cin>>size;

        for(x=1;x<=size;x++)
            {
                for(y=1;y<=size;y++)
                {
                    cout<<pattern_type;
                }
                cout<<endl;
            }
            break;
    case 2:
        cout<<"choose pattern type or character\n";
        cin>>pattern_type;
        cout<<"specify the size of the triangle\n";
        cin>>size;

        for(x=1;x<=size;x++)
            {
                for(y=1;y<=size;y--)
                {
                    cout<<pattern_type;
                }
                cout<<endl;
            }
            break;
    case 3:
        cout<<"choose pattern type or character\n";
        cin>>pattern_type;
        cout<<"specify the size of the inverted triangle\n";
        cin>>size;

        for(x=size;x>=1;x--)
            {
                for(y=1;y<=x;y++)
                {
                    cout<<pattern_type;
                }
                cout<<endl;
            }
            break;
    }
}
