#include "Employee.h"
#include <iostream>

int main()
{
    int SSN, ssnChecker, hours;
    char name[21];
    float wage, donations;
    Employee highEarn;
    Employee lowDonation;
    Employee temp;
    highEarn.setDonations(1);
    std::cout << "enter details, to end enter 0:" << std::endl;
    while (true)
    {
        int digits=0;
        std::cin >> SSN;
         if(SSN == 0)
        {
            break;
        }
        std::cin >> name;
        std::cin >> wage;
        std::cin >> hours;
        std::cin >> donations;
        ssnChecker = SSN;
        while(ssnChecker)
        {
            ssnChecker/=10;
            digits ++;
        }
        if(digits!=9)
        {
            std::cout << "ERROR" << std::endl;
            continue;
        }
        if(wage<0 || hours < 0 || donations < 0)
        {
            std::cout << "ERROR" << std::endl;
            continue;
        }
        temp.setWage(wage);
        temp.setHours(hours);
        temp.setDonations(donations);
        if(donations<lowDonation.getDonations())
        {
            lowDonation.setSSN(SSN);
            lowDonation.setHours(hours);
            lowDonation.setName(name);
            lowDonation.setDonations(donations);
            lowDonation.setWage(wage);
        }
        if(temp.earned()>highEarn.earned())
        {
            highEarn.setDonations(donations);
            highEarn.setHours(hours);
            highEarn.setName(name);
            highEarn.setSSN(SSN);
            highEarn.setWage(wage);
        }
    }
    // low donations
    std::cout << "minimum sum: " <<lowDonation.getDonations() << ' ' << lowDonation.getName() << ' ' << 
    lowDonation.getSSN() << std::endl;

    // high earner
    std::cout << "highest salary: " << highEarn.earned() << ' ' << highEarn.getName() << ' ' <<
    highEarn.getSSN() << std::endl;
}
