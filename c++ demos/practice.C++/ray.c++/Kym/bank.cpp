#include <iostream>
using namespace std;

class Animal
{
    private:
    int Yob;
    int lifespan;

    public:
     Animal();
     Animal(int,int);
     void communicate();
     void communicate(string);
     void setYob();
     void setlifespan();
};

Animal::Animal(int l, int y)
{
    lifespan=l;
    Yob=y;
}
void Animal::communicate()
{
    cout<<"Happy animal\n";
}
void Animal::communicate(string s)
{
    cout<<"Animal message: "<<s<<endl;
}
void Animal::setYob()
{
    int Yob;
    cout<<"Enter year of birth\n";
    cin>>Yob;
}
