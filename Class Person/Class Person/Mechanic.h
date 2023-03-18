#include "PersonClass.h"
#include <iostream>
using namespace std; 

class Mechanic :public Person
{
private:
    int counter;
    int Appointement[];
public:
    bool isAvailable(int i)
    {
        if (Appointement[i] == 0)
        {
            cin >> Appointement[i];
            counter++;
            return true;
        }
        else
        {
            return false;
        }
    }

    void setCounter(int c)
    {
        counter = c;
    }
    int getCounter()
    {
        return counter;
    }

};

