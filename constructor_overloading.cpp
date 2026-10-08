#include <iostream>
using namespace std;

class Sample
{
    int x;

public:
    Sample()
    {
        x = 0;
        cout << "Constructor with zero args" << endl;
    }

    Sample(int a)
    {
        x = a;
        cout << "Constructor with two args" << endl;
    }

    void display()
    {
        cout << x << endl;
    }
};

int main()
{
    Sample s1;
    Sample s2(200);

    s1.display();
    s2.display();

    return 0;
}