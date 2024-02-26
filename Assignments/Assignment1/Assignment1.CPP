#include <iostream>
#include <string.h>
class Date
{
private:
    int day;
    int month;
    int year;

public:
    void set_day(int new_day)
    {
        day = new_day;
    }
    void set_month(int new_month)
    {
        month = new_month;
    }
    void set_year(int new_year)
    {
        year = new_year;
    }
    int get_day()
    {
        return day;
    }
    int get_month()
    {
        return month;
    }
    int get_year()
    {
        return year;
    }
    void display()
    {
        int flag = 0;
        int Leap_year_flag = 0;
        std::cout << "Date:" << day << "/" << month << "/" << year << "\n";
        if (!((month >= 1) && (month <= 12)))
        {
            flag = 1;
        }
        if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (~((day >= 1) && (day <= 30)))
            {
                flag = 1;
            }
        }
        else if (month == 2)
        {
            if ((((year % 4) == 0 )&& ((year % 100) != 0)) || (year % 400 == 0))
            {
                Leap_year_flag = 1;
            }
            if ((day == 29) && Leap_year_flag == 0)
            {
                flag = 1;
            }
            else if (!((day >= 1) && (day <= 29)))
            {
                flag = 1;
            }
        }
        else
        {
            if (!((day >= 1) && (day <= 31)))
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            std::cout << "This date is valid" << std::endl;
        }
        else
        {
            std::cout << "This date is Invalid" << std::endl;
        }
    }
};
int main()
{
    Date Date1;
    int day , month , year ;
    std::cout << "Input day: ";
    std::cin >> day;
    std::cout << "Input month: ";
    std::cin >> month;
    std::cout << "Input year: ";
    std::cin >> year;
    Date1.set_day(day);
    Date1.set_month(month);
    Date1.set_year(year);
    Date1.display();
}