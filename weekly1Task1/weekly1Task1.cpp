
#include <iostream>
#include <conio.h>
#include <string>

std::string name = "";
int age = 0;
char initial = ' ';
long phone = 0;

    int year = 0;
    int month = 0;
    int day = 0;

int main()
{
    std::cin.ignore();
    std::cout << "What is your fullname? "; 
    std::getline(std::cin, name);
    initial = name[0];
    std::cout << "How old are you? ";
    std::cin >> age;
    std::cout << "What is your phone number? ";
    std::cin >> phone;
    std::cout << "When is your birthday?\n"; 
    std::cout << "day:";
    std::cin >> day;    
    std::cout << "month:";
    std::cin >> month;
    std::cout << "year:";
    std::cin >> year;

    std::cout << "_________________________________" << std::endl;
    std::cout << "|Fullname " << "    |" << name << std::endl;
    std::cout << "|Initial " << "     |" << initial << std::endl;
    std::cout << "|Age " << "         |" << age << std::endl;
    std::cout << "|Phone number " << "|" << phone << std::endl;
    std::cout << "|Birthday " << "    |" << day << '/' << month << '/' << year << std::endl;;
    std::cout << "__________________________________" << std::endl;;
    
    system("pause");
    return 0;
}
