#ifndef TEACHER_H
#define TEACHER_H
#include<Person.h>

class Teacher:public Person
{
    private:
    int teacherID;
    string subjectSpecialization;
    float salary;
public:
    Teacher()
    {

    }
    Teacher(string name,int age,string gender,string phoneNumber,string address,string email,
            int teacherID,string subjectSpecialization,float salary)
            :Person(name,age,gender,phoneNumber,address,email)
    {

     this->teacherID=teacherID;
     this->subjectSpecialization=subjectSpecialization;
     this->salary=salary;
    }
    int getTeacherID()
    {
        return teacherID;
    }
    string getSubjectSpecialization()
    {
      return subjectSpecialization;
    }
    float getSalary()
    {
        return salary;
    }
    void setTeacherID(int teacherID)
    {
        this->teacherID=teacherID;
    }
    void setSubjectSpecialization(string subjectSpecialization)
    {
        this->subjectSpecialization=subjectSpecialization;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    void print()
    {
        Person::print();
        cout<<"The Teacher ID Is : "<<teacherID<<endl;
        cout<<"The Subject Specialization Is : "<<subjectSpecialization<<endl;
        cout<<"The Salary Is : "<<salary<<endl;
    }
};

#endif // TEACHER_H
