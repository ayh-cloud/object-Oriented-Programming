#ifndef STUDENT_H
#define STUDENT_H
#include<Person.h>

class Student:public Person
{
   private:
    int studentID;
    string gradeLevel;
    float GPA;
public:
    Student()
    {

    }
    Student(string name,int age,string gender,string phoneNumber,string address,string email,
            int studentID,string gradeLevel,float GPA)
        :Person(name,age,gender,phoneNumber,address,email)
    {
        this->studentID=studentID;
        this->gradeLevel=gradeLevel;
        this->GPA=GPA;

    }
    int getStudentID()
    {
        return studentID;
    }
    string getGradeLevel()
    {
        return gradeLevel;
    }
    float getGPA()
    {
        return GPA;
    }
    void setStudentId(int studentID)
    {
        this->studentID=studentID;
    }
    void setGradeLevel(string gradeLevel)
    {
        this->gradeLevel=gradeLevel;
    }
    void setGPA(float GPA)
    {
        this->GPA=GPA;
    }
    void print()
    {
        Person::print();
        cout<<"The Student ID Is : "<<studentID<<endl;
        cout<<"The Grade Level Is : "<<gradeLevel<<endl;
        cout<<"The GPA Is : "<<GPA<<endl;
    }
};

#endif // STUDENT_H
