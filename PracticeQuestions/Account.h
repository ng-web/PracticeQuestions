#pragma once
class Account
{
private:
	int accont_no;
	double balance;

public:
	Account() { balance = 0.0; }
	void GetAcctInfo();
	void DisplayAcctInfo();

	double GetBalance();

};

