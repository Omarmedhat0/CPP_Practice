#include <iostream>
#include <string.h>
class student
{
    private:
        std::string Name;
        char Class;
        int Roll_Number ;
        int Marks;
    public:
    student () : Name("None"), Class('0'), Roll_Number(0), Marks(0)
    {
    }
    void set_Name(std::string name)
    {
        Name=name;
    }
    void set_Class(char cls)
    {
        Class=cls;
    }
    void set_Roll_Number(int rn)
    {
        Roll_Number=rn;
    }
    void set_Marks(int mrks)
    {
        Marks=mrks;
    }
    std::string get_Name()
    {
        return Name;
    }
    char get_Class()
    {
        return Class; 
    }
    int get_Roll_Number()
    {
        return Roll_Number;
    }
    int get_Marks()
    {
        return Marks;
    }
    void Calculate_Grade()
    {
        char grade = '0';
        if (Marks>=85)
        {
            grade='A';
        }
        else if (Marks>=75 && Marks<85)
        {
            grade='B';
        }
        else if(Marks>=65 && Marks<75)
        {
            grade='C';
        }
        else if(Marks>=50 && Marks<65)
        {
            grade='D';
        }
        else
        {
            grade='F';
        }
        std::cout<<"Student details :"<<std::endl;
        std::cout<<"Name :"<<Name<<std::endl;
        std::cout<<"Class :"<<Class<<std::endl;
        std::cout<<"Roll Number :"<<Roll_Number<<std::endl;
        std::cout<<"Marks(0-100) :"<<Marks<<std::endl;
        std::cout<<"Grade :"<<grade<<std::endl;
    }
};
int main()
{
    student st1 ;
    std::string name = "" ;
    char cls = '0';
    int rn = 0 , mrks = 0;
    std::cout<<"Enter the name of the student :"<<std::endl;
    std::getline(std::cin, name);
    std::cout<<"Enter the class of the student :"<<std::endl;
    std::cin>>cls;
    std::cout<<"Enter the roll number of the student :"<<std::endl;
    std::cin>>rn;
    std::cout<<"Enter the marks of the student :"<<std::endl;
    std::cin>>mrks;
    st1.set_Name(name);
    st1.set_Class(cls);
    st1.set_Roll_Number(rn);
    st1.set_Marks(mrks);
    st1.Calculate_Grade();


    return 0;
}