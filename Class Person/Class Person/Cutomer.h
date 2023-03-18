#include "PersonClass.h"
#include<iostream>
using namespace std; 

class Customer : public Person
{
private:
    int MechanicID;
    struct Appointement
    {
        int hours; 
        int mins; 
    };

public:
    Customer()
    {
        MechanicID=12334;
    }
    int getMechanicID()
    {
        return MechanicID;
    }
    void setMechanicID(int M)
    {
        MechanicID = M;
    }
    Customer operator==(const Customer& c)
    {
        Appointement customer;
        Appointement customer2; 
        if (customer.hours == customer2.hours&&customer.mins==customer2.mins)
        {
            cout << "both customers have the same time" << endl; 
            
        }
          //finish this 

    }
    Customer operator>(const Customer& c)
    {
        //finish this 

    }
    Customer operator<(const Customer& c)
    {

    }
    //add Other overloading function 

};
