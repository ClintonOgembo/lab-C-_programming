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
    void viewdetails();
};
Animal::Animal()
{
    cout<<"Creating a new animal\n";
    cout<<"Enter lifespan\n";
    cin>>lifespan;
    cout<<"Enter year of birth\n";
    cin>>Yob;
    cout<<"Animal formed\n";

}
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
    cout<<"Enter year of birth\n";
    cin>>Yob;
}

void Animal::setlifespan()
{
  cout<<"Enter the lifespan\n";
  cin>>lifespan;
}

void Animal::viewdetails()
{
    cout<<"The animal was born in "<<Yob;
    cout<<"it has lifespan of: "<<lifespan<<endl;
}
class Person:public Animal
{
private:
    string name,gender;
public:
    Person();
    void setName();
    void setgender();
    void getdetails();
};

Person::Person()
{
    cout<<"creating a new person\n";
    cout<<"Enter the name of the person\n";
    cin>>name;
    cout<<"Enter the gender of the person\n";
    cin>>gender;
}

void Person::setName()
{
    cout<<"Enter the name of the person\n";
    cin>>name;
}

void Person::setgender()
{
    cout<<"Enter the gender of the person\n";
    cin>>gender;
}

void Person::getdetails()
{
  viewdetails();
}

int main()
{
   int life,year;
   string message;
   cout<<"Enter sample lifespan of the animal\n";
   cin>>life;
   cout<<"Enter year before current year\n";
   cin>>year;
   cout<<"type message\n";
   cin>>message;
   Animal demo1(life,year);
   Animal demo2;
   demo1.communicate();
   demo1.communicate(message);

   Person p1;
   p1.getdetails();
   p1.setName();
   p1.setgender();
}
