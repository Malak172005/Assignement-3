#include <iostream>
using namespace std; 

class Person
{
private:
    string Name;
    int ID;
    int age;

public:
    Person()
    {
        Name = "";
        ID = 0;
        age = 0;
    }
    struct Appointement
    {
        int hours[12]; 
        int minutes[60]; 
    };
    string getName()
    {
        return Name;
    }
    void setName(string n)
    {
        Name = n;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int a)
    {
        age = a;
    }
    int getID()
    {
        return ID;
    }
    void setID(int i)
    {
        ID = i;
    }
    void printInfo()
    {
        cout << "Name: " << Name << " Age: " << age << " ID: " << ID << endl;
    }

};
