//
// pch.h
// Header for standard system include files.
//

//#pragma once
#include<string>
#include "gtest/gtest.h"
//#include"account.cpp"
class Account {
	int m_accNumber; // ideally to be of string type
	std::string m_accName;
	double m_balance;

public:
	Account();
	Account(int, std::string, double);
	Account(int, std::string);
	Account(const Account&);
	void debit(double);
	void credit(double);
	double getBalance() const;
	void display();
};

