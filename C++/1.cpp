//employee salary code
#include <iostream>
using namespace std;

class Employee{
  double salary;
  int no_of_hours;
  public:
    Employee()   //default const
    {
        
    }
    void getinfo()
    {
        cout<<"Enter the salary of employee: ";
        cin>>salary;
        cout<<"Enter the number of hours: ";
        cin>>no_of_hours;
    }
    void AddSal()     //if employee has salary less than 500 then include 10 rupees in his salary
    {
        if(salary<500)
        salary += 10;
    }
    void AddWork()    //employee work hour is greater than 6 than include 5 rupees in salary
    {
        if(no_of_hours>6)
        salary += 5;
    }
    void Display()
    {
        cout<<salary;
    }
};

int main()
{
    int num,i;
    cout<<"Enter the number of employee: ";
    cin>>num;
    Employee* emp= new Employee[num];
    
    for(i=0; i<num; i++)
    {
        emp[i].getinfo();
        emp[i].AddSal();
        emp[i].AddWork();
    }
    
    for(i=0;i<num; i++)
    {
        cout<<"\nThe final Salary of employee"<<i+1<<" is: ";
        emp[i].Display();
    }
}
