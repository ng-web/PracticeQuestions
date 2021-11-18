#include "Account.h"
#include <iostream>

void Account::GetAcctInfo()
{
	std::cout << "Enter Account number: ";
	std::cin >> accont_no;

	std::cout << "Enter Account Balance: ";
	std::cin >> balance;
}

void Account::DisplayAcctInfo()
{
	std::cout << "Account no.: " << accont_no << std::endl;
	std::cout << "Account Balance: " << balance << std::endl;
}

double Account::GetBalance()
{
	return balance;
}
