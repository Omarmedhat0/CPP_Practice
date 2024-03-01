#include "Bank.hpp"

void Bank::AddAccount(const Bank_Account &account)
{
    accounts.push_back(account);
}
int Bank::GetTotalBalance()
{
    int totalBalance = 0;
    for (auto &account : accounts)
    {
        totalBalance += account.GetAccountBalance();
    }
    return totalBalance;
}

void Bank::DisplayAllAccounts()
{
    for (auto &account : accounts)
    {
        account.DisplayAccountInfo();
        std::cout << std::endl; // Add a line break between accounts
    }
}

void Bank::DepositFunds(int number, int amount)
{
    bool found = false;
    for (auto &account : accounts)
    {
        if (account.GetAccountNumber() == number)
        {
            account.Deposit(amount);
            found = true;
            break;
        }
    }
    if (!found)
    {
        std::cout << "Account not found." << std::endl;
    }
}

void Bank::WithdrawFunds(int number, int amount)
{
    bool found = false;
    for (auto &account : accounts)
    {
        if (account.GetAccountNumber() == number)
        {
            account.Withdraw(amount);
            found = true;
            break;
        }
    }
    if (!found)
    {
        std::cout << "Account not found." << std::endl;
    }
}
