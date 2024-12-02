#include <iostream>

using namespace std;

int main()
{
    int cat1,cat2,cat3,final_exam;
    float cat_average,final_score;
    location:
    cout<<"Enter cat1 marks\n";
    cin>>cat1;
     if(cat1<0||cat1>30)
    {
        cout<<"Enter correct marks\n";
        goto location;
    }
    cout<<"enter cat2 marks\n";
    cin>>cat2;
     if(cat2<0||cat2>30)
    {
        cout<<"Enter correct marks\n";
        goto location;
    }
    cout<<"enter cat3 marks\n";
    cin>>cat3;
     if(cat3<0||cat3>30)
    {
        cout<<"Enter correct marks\n";
        goto location;
    }
    cout<<"The cat_average marks is"<<endl;
    cat_average=(cat1+cat2+cat3)/3;
    cout<<cat_average;
    cout<<"\nEnter final_exam marks"<<endl;
    cin>>final_exam;
     if(final_exam<0||final_exam>70)
    {
        cout<<"Enter correct marks\n";
        goto location;
    }
    cout<<"The final_score is\n";
    final_score=cat_average+final_exam;
    cout<<final_score;

    if(final_score<40)
    {
        cout<<"F\n";
    }
    else if(final_score<50)
    {
        cout<<"E\n";
    }
    else if(final_score<60)
    {
        cout<<"D\n";
    }
    else if(final_score<70)
    {
        cout<<"C\n";
    }
    else if(final_score<80)
    {
        cout<<"B\n";
    }
    else
    {
        cout<<"A\n";
    }
    return 0;
}
