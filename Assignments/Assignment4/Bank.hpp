#ifndef BANK_HPP
#define BANK_HPP
#include <vector>
#include "BankAccount.hpp"
class Bank {
private:
    std::vector<Bank_Account> accounts;
public:
void DisplayAllAccounts();
int GetTotalBalance();
void AddAccount(const Bank_Account& account);
void WithdrawFunds(int number, int amount) ;
void DepositFunds(int number, int amount);
};
#endif // BANK_HPP