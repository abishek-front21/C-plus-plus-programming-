#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int id;
    string name;

public:
    Student(int i, string n)
    {
        id = i;
        name = n;
    }

    Student(const Student &s)
    {
        id = s.id;
        name = s.name;
    }

    void display()
    {
        cout << "The ID is: " << id << endl;
        cout << "The Name is: " << name << endl;
    }
};

int main()
{
    int id;
    string name;

    cin >> id;
    cin >> name;

    Student s1(id, name);
    Student s2(s1);

    s1.display();
    s2.display();

    return 0;
}