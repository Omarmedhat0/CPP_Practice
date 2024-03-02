#include "Bank.hpp"
#include <limits> // Include the <limits> header
#include <cstdlib> // For system("CLS") on Windows

int main()
{

    Bank bank;

    std::string name, type;
    int number, balance, amount;
    char choice;
    Bank_Account Template_Account(name, type, number, balance);; // Move the declaration here

    do
    {
        std::cout << "Menu: "<<std::endl;
        std::cout << "1. Create Account" << std::endl;
        std::cout << "2. Deposit Funds" << std::endl;
        std::cout << "3. Withdraw Funds" << std::endl;
        std::cout << "4. Total Balance" << std::endl;
        std::cout << "5. Display all accounts" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cin >> choice;
        system("clear"); // For Unix/Linux
        switch (choice)
        {
        case '1':
            std::cout << "Enter account holder name: ";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
            std::getline(std::cin, name);
            std::cout << "Enter account type: ";
            std::getline(std::cin, type);
            std::cout << "Enter account number: ";
            std::cin >> number;
            std::cout << "Enter account balance: ";
            std::cin >> balance;
           Template_Account.SetBankAccountParameters(name, type, number, balance);
            bank.AddAccount(Template_Account);
            std::cout << "Succeeded Process" << std::endl;
            std::cout << "Do you want to add another account? (y/n): ";
            std::cin >> choice;
            system("clear"); // For Unix/Linux            
            break;
        case '2':
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
            std::cout << "Enter account number: ";
            std::cin >> number;
            std::cout << "Enter amount to deposit: ";
            std::cin >> amount;
            bank.DepositFunds(number, amount);
            std::cout << "Succeeded Process" << std::endl;
            std::cout << "Do you want to add another account? (y/n): ";
            std::cin >> choice;
            system("clear"); // For Unix/Linux            
            break;
        case '3':
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
            std::cout << "Enter account number: ";
            std::cin >> number;
            std::cout << "Enter amount to withdraw: ";
            std::cin >> amount;
            bank.WithdrawFunds(number, amount);
            std::cout << "Succeeded Process" << std::endl;
            std::cout << "Do you want to add another account? (y/n): ";
            std::cin >> choice;
            system("clear"); // For Unix/Linux            
            break;
        case '4':
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
            std::cout << "Total Balance " << bank.GetTotalBalance() << std::endl;
            std::cout << "Succeeded Process" << std::endl;
            std::cout << "Do you want to add another account? (y/n): ";
            std::cin >> choice;
            system("clear"); // For Unix/Linux            
            break;
        case '5':
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
            std::cout << "Accounts details :" << std::endl;
            bank.DisplayAllAccounts();
            std::cout << "Succeeded Process" << std::endl;
            std::cout << "Do you want to add another account? (y/n): ";
            std::cin >> choice;
            system("clear"); // For Unix/Linux            
            break;
        case '6':
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
            std::cout << "Goodbye!" << std::endl;
            choice = 'n' ;
            system("clear"); // For Unix/Linux            
            break;
        default:    
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    } while (choice == 'y' || choice == 'Y');

    return 0;
}