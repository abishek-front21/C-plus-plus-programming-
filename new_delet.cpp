#include <iostream>
#include <string>
using namespace std;

class Student
{
    int id;
    string name;

public:
    Student()
    {
        id = 0;
        name = "Tingu";
    }

    ~Student()
    {
    }

    void display()
    {
        cout << "The ID is: " << id << endl;
        cout << "The Name is: " << name << endl;
    }
};

int main()
{
    Student *ptr;

    ptr = new Student();

    ptr->display();

    delete ptr;

    return 0;
}