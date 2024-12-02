#include <iostream>
using namespace std;

class nurse;
class person
    {
    private:
        string name;
    public:
        person();
        void setname();
        string getname(){return name;}
        friend class nurse;
    };

person::person()
{
    cout<<"Enter your name\n";
    cin>>name;
}

void person::setname()
{
   cout<<"Enter your name\n";
   cin>>name;
}

class nurse
{
public:
    void registration(person *p)
    {
        p->setname();
        cout<<"The name of person is "<<p->getname()<<endl;
    }
    void immunization(person p2);
};
void nurse::immunization(person p2)
{
    p2.name="university";
}

int main()
{
    person demo;
    cout<<demo.getname()<<" you are welcomed\n";
    nurse ns;
    ns.registration(&demo);
    cout<<"Thank you "<<demo.getname()<<endl;
    person *ptr;
    ptr=&demo;
    ptr->setname();
    cout<<ptr->getname()<<" we are done\n";

/*int val1, val2;
float val3=2.5;
val1=8; val2=5;
int *ptr;
ptr=&val1;
cout<<ptr <<" holds "<< *ptr<<endl;
ptr=&val2;
cout<<ptr <<" holds "<< *ptr<<endl;
ptr=val3;
cout<<ptr <<" holds "<< *ptr<<endl;*/
return 0;
}
