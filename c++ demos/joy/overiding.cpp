#include <iostream>
using namespace std;

class patient
{
private:
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
    void issuediagnosis();
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
    float amount;
    cout<<"Enter amount paid by the patient\n";
    cin>>amount;
    newbill=bill-amount;
    cout<<"Your balance is "<<newbill<<endl;
}
void patient::issuedrugs()
{
    if(newbill==0)
    {
        cout<<"You can issue drugs\n";
    }
    else
    {
        cout<<"Please do not issue drugs, bill must be cleared\n";
    }
}


class inpatient:public patient
{
private:
    string ward;
    int bed, duration;
public:
    void admission();
    void discharge();
    void setbill();
};
