
#include<iostream>
using namespace std;
int main()
{
    int PIN1,attempts;
    const int PIN=1234;
    attempts=0;


    while (attempts<3)
    {
        cout<<"Enter the PIN1\n";
        cin>>PIN1;
        if(PIN1==PIN)
        {
            cout<<"access granted\n";
            break;
        }
        else
            {
        attempts++;
        cout<<"access denied\n";
        }
    }
    return 0;
}
