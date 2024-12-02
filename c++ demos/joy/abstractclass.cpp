#include <iostream>
using namespace std;

class polygon
    {
    protected:
        int length,width;
    public:
        polygon();
        int getlenght(){return length;};
        int getwidth(){return width;};
        void setlength();
        void setwidth();
        virtual void getArea()=0;
    };

polygon::polygon()
{
    cout<<"Enter the length\n";
    cin>>length;
    cout<<"Enter the width\n";
    cin>>width;
}

void polygon::setlength()
{
    cout<<"Enter the length\n";
    cin>>length;
}

void polygon::setwidth()
{
  cout<<"Enter the width\n";
  cin>>width;
}

class rectangle:public polygon
{
public:
    void getArea();
};

void rectangle::getArea()
{
    cout<<"The area of the rectangle is "<<length * width<<endl;
}

class triangle:public polygon
{
public:
     void getArea();
};

void triangle::getArea()
{
    cout<<"The area of the triangle is "<<length * width * 0.5<<endl;
}

int main()
{
    cout<<"Create a rectangle\n";
    rectangle R;
    R.getlenght();
    R.getwidth();
    R.setlength();
    R.setwidth();
    R.getArea();

    cout<<"Create a triangle\n";
    triangle T;
    T.getlenght();
    T.getwidth();
    T.setlength();
    T.setwidth();
    T.getArea();

}
