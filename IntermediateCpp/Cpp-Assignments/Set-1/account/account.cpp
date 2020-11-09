//
// pch.cpp
// Include the standard header and generate the precompiled header.
//
#include<iostream>
#include "pch.h"
//#include "account_test.cpp"
Account::Account() :
	m_accNumber(0), m_accName(""), m_balance(0) {
}
Account::Account(int id, std::string name, double bal) :
	m_accNumber(id), m_accName(name), m_balance(bal) {

}
Account::Account(int id, std::string name) {
	m_accNumber = id;
	m_accName = name;
	m_balance = 0;
}
Account::Account(const Account& ref) :
	m_accNumber(ref.m_accNumber), m_accName(ref.m_accName),
	m_balance(ref.m_balance) {

}
void Account::credit(double amount) {
	m_balance += amount;
}
void Account::debit(double amount) {
	//min balance check
	m_balance -= amount;
}
double Account::getBalance() const {
	return m_balance;
}
void Account::display() {
	std::cout << m_accNumber << "," << m_accName << ","
		<< m_balance << "\n";
}
