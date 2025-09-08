#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;

class Person
{
    private:
    string name;
    int age;
    string gender;
    string phoneNumber;
    string address;
    string email;
public:
    Person()//Default Constructor
    {
        //cout<<"Default Constructor IN Person Class"<<endl;
        name="No Name";
        age=-1;
        gender="No Gender";
        phoneNumber="No Phone";
        address="No Address";
        email="No Email";
    }
    Person(string name,int age,string gender,string phoneNumber,string address,string email)
    {
        //cout<<"Parametrize Constructor IN Person Class"<<endl;
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->phoneNumber=phoneNumber;
        this->address=address;
        this->email=email;
    }
    ~Person()//Default Constructor
    {
       // cout<<"Default Destructor IN Person Class"<<endl;
    }
    string getEmail()
    {
        return email;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getGender()
    {
        return gender;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    string getAddress()
    {
        return address;
    }
    void setEmail(string email)
    {
        this->email=email;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setId(string gender)
    {
        this->gender=gender;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber=phoneNumber;
    }
    void setAddress(string address)
    {
        this->address=address;
    }
    void print()
    {
        cout<<"The Name Is : "<<name<<endl;
        cout<<"The Age Is : "<<age<<endl;
        cout<<"The Gender Is : "<<gender<<endl;
        cout<<"The Phone Number Is : "<<phoneNumber<<endl;
        cout<<"The Address Is : "<<address<<endl;
        cout<<"The Email Is : "<<email<<endl;
    }
};

#endif // PERSON_H
