#include <iostream>
using namespace std;

class patient
{
protected:
       string name, gender, pressure, diagnosis, prescription;
       int yob;
       float temp;
       double bill;
public:
    void regno();
    void triage();
    void consultation();
    void setbill();
    void paybill();
    void issuedrugs();
};
void patient::regno()
{
    cout<<"Enter name of the patient\n";
    cin>>name;
    cout<<"Enter gender of the patient\n";
    cin>>gender;
    cout<<"Enter year of birth of the patient\n";
    cin>>yob;
}
void patient::triage()
{
    cout<<"Enter the temperature of the patient\n";
    cin>>temp;
    cout<<"Enter the pressure of the patient\n";
    cin>>pressure;
}
void patient::consultation()
{
    cout<<"Enter the diagnosis of the patient\n";
    cin>>diagnosis;
    cout<<"Enter the prescription of the patient\n";
    cin>>prescription;
}
void patient::setbill()
{
   float fee, medication;
   cout<<"Enter consultation fee\n";
   cin>>fee;
   cout<<"Enter medication fee\n";
   cin>>medication;
   bill=fee+medication;
}
void patient::paybill()
{
    float amount,newbill;
    cout<<"Enter amount paid by the patient\n";
    cin>>amount;
    newbill=bill-amount;
    cout<<"Your balance is "<<newbill<<endl;
}
void patient::issuedrugs()
{
    float newbill;
    if(newbill==0)
    {
        cout<<"You can issue drugs\n";
    }
    else
    {
        cout<<"Please do not issue drugs, bill must be cleared\n";
    }
}


class inpatient:protected patient
{
private:
    string ward;
    int bed, duration;
public:
    void admission();
    void discharge();
    void setbill();
    void paybill();
};

void inpatient::admission()
{
    cout<<"Enter the ward\n";
    cin>>ward;
    cout<<"Enter bed number\n";
    cin>>bed;
    cout<<"Enter number of days stayed in the ward\n";
    cin>>duration;
}

void inpatient::setbill()
{
    float fee, medication, inpatient_fee;
    cout<<"Input the consultation fee\n";
    cin>>fee;
    cout<<"Input the medication fee\n";
    cin>>medication;
    cout<<"The inpatient fee is \n";
    inpatient_fee=duration*500;
    cout<<inpatient_fee;
    bill=fee+medication+inpatient_fee;
    cout<<"\nThe bill "<<bill<<endl;
}

void inpatient::paybill()
{
    float amount,newbill;
    cout<<"Enter the amount you want to pay\n";
    cin>>amount;
    newbill=bill-amount;
    cout<<"your new balance is "<<newbill;
}

void inpatient::discharge()
{
    float newbill;
    if(newbill==0)
    {
        cout<<name <<"Thanks for visiting our hospital, you are now discharged\n";
    }
    else
    {
        cout<<name <<"you will not be discharged due to an outstanding bill of "<<newbill<<" please clear your bill first\n";
    }
}

int main()
{
    cout<<"New patient\n";
    patient p;
    p.regno();
    p.triage();
    p.consultation();
    p.setbill();
    p.paybill();
    p.issuedrugs();
    cout<<"New inpatient\n";
    inpatient p1;
    p1.admission();
    p1.setbill();
    p1.paybill();
    p1.discharge();
}

