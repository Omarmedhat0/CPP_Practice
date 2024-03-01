
#include "BankAccount.hpp"
Bank_Account ::Bank_Account(std::string name, std::string type, int number, int balance) : 
    Holder_Name(name), Account_Type(type), Account_Number(number), Account_Balance(balance) {
    
}

void Bank_Account::Withdraw(int number) {
    Account_Balance -= number;
}

void Bank_Account::Deposit(int number) {
    Account_Balance += number;
}

int Bank_Account::GetAccountNumber() {
    return Account_Number;
}

std::string Bank_Account::GetHolderName() {
    return Holder_Name;
}

int Bank_Account::GetAccountBalance() {
    return Account_Balance;
}

std::string Bank_Account::GetAccountType() {
    return Account_Type;
}

void Bank_Account::DisplayAccountInfo() {
    std::cout << "Account Holder Name : " << Holder_Name << std::endl;
    std::cout << "Account Type : " << Account_Type << std::endl;
    std::cout << "Account Number : " << Account_Number << std::endl;
    std::cout << "Account Balance : " << Account_Balance << std::endl;
}

void Bank_Account::SetBankAccountParameters(std::string name, std::string type, int number, int balance) 
{
    Holder_Name = name;
    Account_Type = type;
    Account_Number = number;
    Account_Balance = balance;
}

