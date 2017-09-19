#include <iostream>

using namespace std;

class employee
{
public:
    int age;
    char name[20];
    void newEmployee()
    {
        cout << "Enter name" << endl;
        cin >> name;
        cout << "Enter age" << endl;
        cin >> age;
    }
    void Print()
    {
        cout << "The employees name is " << name << " he is " << age << " years old" << endl;
    }
    ~employee()
    {
        cout << "Employee has been erased " << endl;

    }
};
int main()
{
    employee numberOne;
    numberOne.newEmployee();
    numberOne.Print();

    return 0;
}
