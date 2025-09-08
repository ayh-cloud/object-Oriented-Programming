#ifndef COURSE_H
#define COURSE_H


class Course
{
    private:
    string courseCode;
    string courseName;
    string teacherName;
public:
    void setCourseCode(string courseCode)
    {
        this->courseCode=courseCode;
    }
    void setCourseName(string courseName)
    {
        this->courseName=courseName;
    }
    void setTeacherName(string teacherName)
    {
        this->teacherName=teacherName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getCourseName()
    {
        return courseName;
    }
    string getTeacherName()
    {
        return teacherName;
    }
    Course()
    {

    }
    Course(string courseCode,string courseName,string teacherName)
    {
        this->courseCode=courseCode;
        this->courseName=courseName;
        this->teacherName=teacherName;
    }
    void print()
    {
        cout<<"The Course Code IS : "<<courseCode<<endl;
        cout<<"The Course Name IS : "<<courseName<<endl;
        cout<<"The Teacher Name IS : "<<teacherName<<endl;
    }
};

#endif // COURSE_H
