#include <iostream>
#include "employee3.h"
#include "manager.h"
#include "trainee.h"
#include "engg.h"

using namespace std;



Employee::Employee(std::string eid, std::string name, double salary,int exp):
     m_empid(eid),m_name(name),m_salary(salary),m_exp(exp){}

Manager::Manager(std::string mid, std::string name, double salary,int exp,int code,int reprtees):
     Employee(mid,name,salary,exp), m_projCode(code), m_reportees(reprtees){}

Trainee:: Trainee(std::string tid, std::string name, double salary,int exp,std::string track_code,double score):
     Employee(tid,name,salary,exp),m_track(track_code),scores(score){}

Engineer::Engineer(std::string egid, std::string name, double salary,int exp,int code):
     Employee(egid,name,salary,exp),m_projCode(code){}

void Employee::display(){
    cout<<m_empid<<" "<<m_name<<" "<<m_salary<<" "<<m_exp<<endl;
}

int Employee::salary()
{
    return m_salary;
}

double Manager::payroll(){
    int payment = salary();
    //cout<<pay<<endl;
    return payment;
}

double Manager::appraisal(){
    int payment = salary();
    int appr = 0.15*payment;
    //cout<<app<<endl;
    return appr;
}

double Trainee::payroll(){
    int payment = salary();
    //cout<<pay2<<endl;
    return payment;
}

double Trainee::appraisal(){
    int pay2 = salary();
    int app2=0;
    if (scores>50)
        app2 = 0.05*pay2;
    else
        app2 = 0;
    cout<<app2<<endl;
    return app2;
}

double Engineer::payroll(){
    int pay3 = salary();
     cout<<pay3<<endl;
     return pay3;
}

double Engineer::appraisal(){
    int pay3 = salary();
    int app3 = 0.10*pay3;
    cout<<app3<<endl;
    return app3;
}

