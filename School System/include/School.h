#ifndef SCHOOL_H
#define SCHOOL_H
#include<Staff.h>
#include<Student.h>
#include<Teacher.h>
#include<Course.h>
#include<Classroom.h>

class School
{
private:
    int studentCounter;
    int teachercounter;
    int staffcounter;
    int coursecounter;
    int classroomcounter;
    string schoolName;
    string address;
    string principalName;
    Student students[500];
    Teacher teachers[20];
    Staff staffMembers[20];
    Course courses[6];
    Classroom classrooms[10];
public:
    School()
    {
        studentCounter=0;
        teachercounter =0;
        staffcounter=0;
        coursecounter=0;
        classroomcounter=0;
    }
    void setSchoolName(string schoolName)
    {
        this->schoolName=schoolName;
    }
    void setAddress(string address)
    {
        this->address=address;
    }
    void setPrincipalName(string principalName)
    {
        this->principalName=principalName;
    }
    string getSchoolName()
    {
        return schoolName;
    }
    string getAddress()
    {
        return address;
    }
    string getPrincipalName()
    {
        return principalName;
    }
    void addStudent(Student student)
    {
        if(studentCounter==500)
        {
            cout<<"The Student In School Is Full"<<endl;
        }
        else
        {
            students[studentCounter]=student;
            studentCounter++;
        }

    }
    void printStudents()
    {
        for(int i=0; i<studentCounter; i++)
        {
            students[i].print();
            cout<<"__________________________"<<endl;
        }
    }
    void addTeacher(Teacher teacher)
    {
        if(teachercounter ==20)
        {
            cout<<"The Teacher In School Is Full"<<endl;
        }
        else
        {
            teachers[teachercounter ]=teacher;
            teachercounter++;
        }
    }
    void printTeachers()
    {
         for(int i=0;i<teachercounter;i++)
        {
            teachers[i].print();
            cout<<"__________________________"<<endl;
        }
    }
      void addStaff(Staff staff)
      {
          if(staffcounter==20)
          {
              cout<<"The Staff In School Is Full"<<endl;
          }
          else
          {
              staffMembers[staffcounter]=staff;
              staffcounter++;
          }

      }
      void printStaffMembers()
      {
          for(int i=0;i<staffcounter;i++)
          {
              staffMembers[i].print();
               cout<<"__________________________"<<endl;
          }


      }
      void addCourse(Course course)
      {
          if(coursecounter==6)
          {
              cout<<"The Course In School Is Full"<<endl;
          }
          else
          {
              courses[coursecounter]=course;
              coursecounter++;
          }
      }
       void printCourses()
       {
           for(int i=0;i<coursecounter;i++)
           {
              courses[i].print();
              cout<<"__________________________"<<endl;
           }
       }

       void addClassRoom(Classroom classroom)
       {
           if(classroomcounter==10)
           {
               cout<<"The ClassRoom In School Is Full"<<endl;
           }
           else
           {
               classrooms[classroomcounter]=classroom;
               classroomcounter++;
           }
       }
       void printClassRooms()
       {
           for(int i=0;i<classroomcounter;i++)
           {
               classrooms[i].print();
            cout<<"__________________________"<<endl;
           }

       }

};

#endif // SCHOOL_H
