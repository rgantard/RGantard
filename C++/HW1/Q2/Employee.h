#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
    private:
    int _SSN;
    char _name[21];
    float _wage;
    int _hours;
    float _donations;

    public:
    Employee(int SSN, char name[21], float wage, int hours, float donations);
    Employee();
    int getSSN();
    char* getName();
    float getWage();
    int getHours();
    float getDonations();

    void setSSN(int SSN);
    void setName(char name[21]);
    void setWage(float wage);
    void setHours(int hours);
    void setDonations(float donations);

    float earned();
};
#endif