#ifndef DONORS_H_INCLUDED
#define DONORS_H_INCLUDED
#include<string>
#include<iostream>
using namespace std;
class Donors
{
public:
    std::string m_name;
    std::string m_phoneno;
    std::string m_mail;
    std::string m_grp;


    Donors();
    Donors(std::string,std::string,std::string,std::string);
    std::string get_name();
    std::string get_phoneno();
    std::string get_mail();
    std::string get_Bloodgrp();
   // virtual double bloodpressure()=0;
   // virtual  double health()=0;
};



#endif // DONORS_H_INCLUDED
