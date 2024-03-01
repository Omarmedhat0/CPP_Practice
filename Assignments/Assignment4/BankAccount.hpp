#ifndef BankAccount_HPP
#define BankAccount_HPP
#include <iostream>
#include <string>
class Bank_Account
{
private:
    std::string Holder_Name;
    std::string Account_Type;
    int Account_Number;
    int Account_Balance;

public:
    void Withdraw(int number);
    void Deposit(int number);
    int GetAccountNumber();
    std::string GetHolderName();
    int GetAccountBalance();
    std::string GetAccountType();
    void DisplayAccountInfo();
    Bank_Account(std::string name, std::string type, int number, int balance);
    void SetBankAccountParameters(std::string name, std::string type, int number, int balance) ;

};
#endif