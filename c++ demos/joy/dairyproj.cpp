#include <iostream>
#include<vector>
using namespace std;

class Cow
{
protected:
    int Tagno,yob;
    string gender,weight;
public:
    //Cow();
    void setdetails();
    void setfeed();
};
/*Cow::Cow()
{
   cout<<"Enter the cow tag number\n";
    cin>>Tagno;
    cout<<"Enter the year of birth of the cow\n";
    cin>>yob;
    cout<<"Enter the gender of the cow\n";
    cin>>gender;
    cout<<"Enter the weight of the cow\n";
    cin>>weight;
}*/

void Cow::setdetails()
{
    cout<<"Enter the cow tag number\n";
    cin>>Tagno;
    cout<<"Enter the year of birth of the cow\n";
    cin>>yob;
    cout<<"Enter the gender of the cow\n";
    cin>>gender;
    cout<<"Enter the weight of the cow\n";
    cin>>weight;
}

class Calf:public Cow
{
private:
    int Age;
public:
    void performsetdetails(Cow &C){
        C.setdetails();}
    void getAge();
    void setfeed();
    void getcalf_future();

};

void Calf::getAge()
{
    int currentYear;
    cout<<"Input the current year\n";
    cin>>currentYear;
    Age=currentYear-yob;
    cout<<"This calf has "<<Age<<" years\n";
    return;
}

void Calf::getcalf_future()
{
    if(gender=="male")
    {
        if(Age>=2)
        {
            cout<<"This calf should be sold since it is a male\n";
        }
        else
        {
            cout<<"This calf needs to be fed well to grow faster so that it can be sold\n";
        }
    }
    else
    {
        if(Age>=2)
        {
            cout<<"This calf should be transfered to heifers' group\n";
        }
        else
        {
            cout<<"This calf needs to be fed well to grow faster and in good health\n";
        }
    }
}


class Dairy_cow:public Cow
{
public:
    void performsetdetails(Cow &C){
        C.setdetails();}
    void setstatus();   //either milked or pregnant
    void setfeed();      //type of the feeds
    void setmilk();      //total litres_of_milk , milk given to calves , milk sold
};

void Dairy_cow::setstatus()
{
    int months;
    cout<<"Enter months of pregnancy\n";
    cin>>months;
    if(months<=4)
    {
        cout<<"This cow gives milk\n";
    }
    else
    {
      cout<<"This cow has a pregnancy of "<<months<<" months and does not give milk"<<endl;
    }
}


class Employee
{
private:
    string name,division;
    int EmployeeID,EmployeeNO;
public:
    Employee();
    void updateEmployeeDetails();
    void getsalary();
};

Employee::Employee()
{
    cout<<"Enter the name of the Employee\n";
    cin>>name;
    cout<<"Enter the employee ID\n";
    cin>>EmployeeID;
    cout<<"Enter the employee Number\n";
    cin>>EmployeeNO;
    cout<<"Enter the division of the employee\n";
    cin>>division;
}

/*void Employee::updateEmployeeDetails()
{
    cout<<"Enter the name of the Employee\n";
    cin>>name;
    cout<<"Enter the employee ID\n";
    cin>>EmployeeID;
    cout<<"Enter the employee Number\n";
    cin>>EmployeeNO;
    cout<<"Enter the division of the employee\n";
    cin>>division;
}

void Employee::getsalary()
{
    int days;
    const int k=100,y=328,x=60000;
    float hours,Gross_salary,Total_hours;
  if(division=="veterinary")
    {
     cout<<"The Gross salary of "<<name<<" of ID number "<<EmployeeID<<" who works in the "
     <<division<<" section is "<<x<<" per a month,in case of any changes he/she will be updated\n";
    }
  else if(division=="milking")
  {
      cout<<"Salary depends on the working hours\n";
      cout<<"Enter total number of hours an employee works a day\n";
      cin>>hours;
      cout<<"Enter total number of days an employee worked in this month\n";
      cin>>days;
      Total_hours=days*hours;
      cout<<"The total number of worked hours is\n"<<Total_hours<<endl;
      Gross_salary=Total_hours*k;
      cout<<"Gross salary of "<<name<<" of ID number "<<EmployeeID<<" who works in the "<<division<<" section is "<<Gross_salary<<endl;

  }
  else
  {
    cout<<"Salary depends on the number of days an employee worked\n";
    cout<<"Enter the number of days the employee worked this month\n";
    cin>>days;
    cout<<"Gross salary of "<<name<<" of ID number "<<EmployeeID<<" who works in the "<<division<<" section is "<<days*y<<endl;
  }
}

int main()
{
   /* cout<<"New calf\n";

    Cow C;
    Calf P;
    P.setdetails();
    P.getAge();
    P.getcalf_future();

    cout<<"\n\nDairy cow\n";
    Dairy_cow D;
    D.setdetails();
    D.setstatus();*/

   // cout<<"\n\nNew Employee\n";
    Employee E;
    //E.updateEmployeeDetails();
    E.getsalary();
    return 0;

}




//pregnacy diagnosis
//weght of the calves,
