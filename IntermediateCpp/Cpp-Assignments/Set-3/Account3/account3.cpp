#include<iostream>
#include"account3.h"
#include"creditacc.h"
#include"savingsacc.h"
using namespace std;

AccountBase::AccountBase(){}
AccountBase::AccountBase(string num,string name,double bal):
    m_accNumber(num),m_accName(name),m_balance(bal){}

AccountBase::AccountBase(string number,string name):
   m_accNumber(number),m_accName(name),m_balance(0){
}
AccountBase::AccountBase(const AccountBase &ref):
    m_accNumber(ref.m_accNumber),m_accName(ref.m_accName),m_balance(ref.m_balance){
}
CreditAccount::CreditAccount(){}
CreditAccount::CreditAccount(string num,string name,double bal):
    m_accNumber(num),m_accName(name),m_balance(bal){
}
CreditAccount::CreditAccount(string num,string name):
   m_accNumber(num),m_accName(name),m_balance(0){
}

SavingsAccount::SavingsAccount(){}
SavingsAccount::SavingsAccount(string num,string name,double bal):
    m_accNumber(num),m_accName(name),m_balance(bal){
}
SavingsAccount::SavingsAccount(string num,string name):
    m_accNumber(num),m_accName(name),m_balance(0){
}

double CreditAccount::debit(double db)
{
    m_balance -= db;
    return m_balance;
}
double SavingsAccount::debit(double db)
{
    m_balance -= db;
    return m_balance;
}
double CreditAccount::credit(double crd)
{
    m_balance += crd;
    return m_balance;
}
double SavingsAccount::credit(double crd)
{
    m_balance += crd;
    return m_balance;
}
void CreditAccount::display(){
    cout<<"Current:"<<m_accName<<","<<m_accNumber<<","<<m_balance<<endl;
}
void SavingsAccount::display(){
    cout<<"Savings:"<<m_accName<<","<<m_accNumber<<","<<m_balance<<endl;
}
