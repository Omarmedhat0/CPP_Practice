#include <iostream>
class Bank_Account
{
private:
std::string Holder_Name ;
std::string Account_Type ;
int Account_Number ;
int Account_Balance ;
public:
Bank_Account(std::string Name,std::string AcoountType , int AccountNumber , int AccountBalance 
 ) : Holder_Name(Name), Account_Type(AcoountType), Account_Number(AccountNumber), Account_Balance(AccountBalance) {}
void Withdraw (int number)
{
    Account_Balance -= number ;
}
void Deposit (int number)
{
    Account_Balance += number ;
}
int GetAccountNumber(void)
{
    return Account_Number ;
}
std::string GetHolderName(void)
{
    return Holder_Name ;
}
int GetAccountBalance(void)
{
    return Account_Balance ;
}
std::string GetAccountType(void)
{
    return Account_Type ;
}
void DisplayAccountInfo(void)
{
    std::cout << "Account Holder Name : " << Holder_Name << std::endl ;
    std::cout << "Account Type : " << Account_Type << std::endl ;
    std::cout << "Account Number : " << Account_Number << std::endl ;
    std::cout << "Account Balance : " << Account_Balance << std::endl ;
}
};
int main()
{
Bank_Account Account1("John", "Savings", 1001, 10000) ;
Account1.DisplayAccountInfo() ;
std::cout << "Account Holder Name : " << Account1.GetHolderName() << std::endl ;
std::cout << "Account Type : " << Account1.GetAccountType() << std::endl ;
std::cout << "Account Number : " << Account1.GetAccountNumber() << std::endl ;
std::cout << "Account Balance : " << Account1.GetAccountBalance() << std::endl ;
return 0 ;
}