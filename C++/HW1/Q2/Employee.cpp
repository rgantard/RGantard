#include "Employee.h"
#include <string.h>

Employee::Employee(int SSN, char name[21], float wage=1, int hours=1, float donations=__INT_MAX__)
{
    _SSN=SSN;
    _hours=hours;
    strcpy(_name, name);
    _wage=wage;
    _donations=donations;
}
Employee::Employee()
{
    _donations = __INT_MAX__;
}
int Employee::getSSN()
{
    return _SSN;
}
char* Employee::getName()
{
    return _name;
}
float Employee::getWage()
{
    return _wage;
}
int Employee::getHours()
{
    return _hours;
}
float Employee::getDonations()
{
    return _donations;
}

void Employee::setSSN(int SSN)
{
    _SSN = SSN;
}
void Employee::setName(char name[21])
{
   strcpy(_name, name);
}
void Employee::setWage(float wage)
{
    _wage = wage;
}
void Employee::setHours(int hours)
{
    _hours = hours;
}
void Employee::setDonations(float donations)
{
    _donations = donations;
}

float Employee::earned()
{
    int hours=this->getHours();
    float wage=this->getWage();
    float donations=this->getDonations();
    float earned=hours*wage;
    //donations <= 1000
    if(donations<=1000)
    {
        earned += (donations*.1);   
        return earned;
    }
    else
    {
        earned += (1000*.1);
        donations -= 1000;
    }
    //donations <= 2000
    if(donations<= 1000)
    {
        earned += (donations*.15);
        return earned;
    }
    else
    {
        earned += (1000*.15);
        donations -= 1000;
    }
    //donations <= 4000
    if(donations <= 2000)
    {
        earned += donations*.2;
        return earned;
    }
    else
    {
        earned += 2000*.2;
        donations -= 2000;
    }
    //donations <= 5000
    if(donations<=1000)
    {
        earned+= donations*.3;
        return earned;
    }
    else
    {
        earned+=1000*.3;
        donations-=1000;
    }
    //donations > 5000
    earned+= donations*.4;
    return earned;
}