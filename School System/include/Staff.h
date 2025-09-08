#ifndef STAFF_H
#define STAFF_H
#include<Person.h>

class Staff:public Person
{
   private:
    int staffID;
    string role;
    float salary;
public:
    int getStaffID()
    {
        return staffID;
    }
    string getRole()
    {
        return role;
    }
    float getSalary()
    {
        return salary;
    }
    void setStaffID(int staffID)
    {
        this->staffID=staffID;
    }
    void setRole(string role)
    {
        this->role=role;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    Staff()
    {
    //cout<<"Default Constructor IN Staff Class"<<endl;
    }
    Staff(string name,int age,string gender,string phoneNumber,string address,string email
          ,int staffID,string role,float salary)
          :Person(name,age,gender,phoneNumber,address,email)
    {
        //cout<<"Parametrize Constructor IN Staff Class"<<endl;
        this->staffID=staffID;
        this->role=role;
        this->salary=salary;
    }
    ~Staff()
    {
    //cout<<"Default Destructor IN Staff Class"<<endl;
    }
    void print()
    {
        Person::print();
        cout<<"The StaffID Is:"<<staffID<<endl;
        cout<<"The Role Is:"<<role<<endl;
        cout<<"The Salary Is:"<<salary<<endl;
    }


};

#endif // STAFF_H
