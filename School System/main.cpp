#include <iostream>
#include <Student.h>
#include <Teacher.h>
#include <Staff.h>
#include <School.h>
#include<Course.h>
#include<Classroom.h>
using namespace std;

int main()
{
    cout<<"\t\t\t~~~THE STUDENTS~~~"<<endl;
    Student s("Mohamed",12,"male","01265463245","Alex","Mohamed@gmail.com",1,"6",3.54);
    Student s1("Ahmed",12,"male","01064345352","Cairo","ahmed@gmail.com",2,"6",3);
    Student s2("Ali",10,"male","01126763524","Alex","ali@gmail.com",5,"4",4);
    Student s3("Mariam",10,"female","01064543462","Giza","mariam@gmail.com",7,"4",3.5);
    Student s4("Habiba",9,"female","01265463992","Cairo","habiba@gmail.com",8,"3",3.58);
    Student s5("Sara",9,"female","01265434766","Giza","sara@gmail.com",10,"3",3.55);
    Student s6("Esraa",11,"female","01034566775","Fayoum","esraa@gmail.com",15,"5",3.9);

    Teacher t("Mona",30,"female","01056544546","Assiut","mona@gmail.com",10,"Math",9000);
    Teacher t1("Salah",40,"male","01265626536","Fayoum","salah@gmail.com",15,"Arabic",10000);
    Teacher t2("Lamiaa",35,"female","01135265624","NewValley","lamiaa@gmail.com",13,"Technology",8500);
    Teacher t3("Hiba",44,"female","01116763738","Alex","hiba2gmail.com",9,"English",9500);
    Teacher t4("Ahmed",28,"male","01277267625","Giza","ahmed@gmail.com",11,"Science",8000);

    Staff st("Hamdi",24,"male","01136745365","Cairo","hamdi@gmail.com",5,"Security",5000);
    Staff st1("Moataz",26,"male","01056454656","Fayoum","moataz@gmail.com",3,"Boss",11000);
    Staff st2("Sabah",28,"female","01251625613","Alex","sabah@gmail.com",8,"Agent",9700);
    Staff st3("Ahlam",25,"female","01073764735","Fayoum","ahlam@gmail.com",10,"Secretary",8600);
    Staff st4("Halah",31,"female","01245543545","Alex","halah@gmail.com",16,"Specialist",8800);

    Course c("1","Arabic","Salah");
    Course c1("2","Math","Mona");
    Course c2("3","English","Hiba");
    Course c3("4","Technology","Lamiaa");
    Course c4("5","Science","Ahmed");
    Course c5("6","French","Majed");

    Classroom cr(1,50);
    Classroom cr1(4,50);
    Classroom cr2(7,50);
    Classroom cr3(9,50);
    Classroom cr4(3,50);


    School sc;
    sc.addStudent(s);
    sc.addStudent(s1);
    sc.addStudent(s2);
    sc.addStudent(s3);
    sc.addStudent(s4);
    sc.addStudent(s5);
    sc.addStudent(s6);
    sc.printStudents();
    cout<<endl;
    cout<<"\t\t\t~~~THE TEACHERS~~~"<<endl;
    cout<<endl;
    School ss;
    ss.addTeacher(t);
    ss.addTeacher(t1);
    ss.addTeacher(t2);
    ss.addTeacher(t3);
    ss.addTeacher(t4);
    ss.printTeachers();
    cout<<endl;
    cout<<"\t\t\t~~~THE STAFF~~~"<<endl;

    School sh;
    sh.addStaff(st);
    sh.addStaff(st1);
    sh.addStaff(st2);
    sh.addStaff(st3);
    sh.addStaff(st4);
    sh.printStaffMembers();
    cout<<endl;
    cout<<"\t\t\t~~~THE COURSES~~~"<<endl;
    School so;
    so.addCourse(c);
    so.addCourse(c1);
    so.addCourse(c2);
    so.addCourse(c3);
    so.addCourse(c4);
    so.addCourse(c5);
    so.printCourses();
    cout<<endl;
    cout<<"\t\t\t~~~THE CLASSROOM~~~"<<endl;
    School sl;
    sl.addClassRoom(cr);
    sl.addClassRoom(cr1);
    sl.addClassRoom(cr2);
    sl.addClassRoom(cr3);
    sl.addClassRoom(cr4);
    sl.printClassRooms();
    return 0;
}
