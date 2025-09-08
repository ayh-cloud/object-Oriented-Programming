#ifndef CLASSROOM_H
#define CLASSROOM_H


class Classroom
{
    private:
    int roomNumber;
    int capacity;
public:
    void setRoomNumber(int roomNumber)
    {
        this->roomNumber=roomNumber;
    }
    void setCapacity(int capacity)
    {
        this->capacity=capacity;
    }
    int getRoomNumber()
    {
        return roomNumber;
    }
    int getCapacity()
    {
        return capacity;
    }
    Classroom()
    {

    }
    Classroom(int roomNumber,int capacity)
    {
      this->roomNumber=roomNumber;
      this->capacity=capacity;
    }
    virtual ~Classroom()
    {

    }
    void print()
    {
        cout<<"The Room Number Is : "<<roomNumber<<endl;
        cout<<"The Capacity Is : "<<capacity<<endl;
    }

};

#endif // CLASSROOM_H
