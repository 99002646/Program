#include<string.h>
#include<iostream>
#include"Donors.h"
using namespace std;
Donors::Donors():m_name(""),m_phoneno(""),m_mail(""),m_grp("") {};

Donors::Donors(std::string name,std::string phoneno,std::string mail,std::string grp):
    m_name(name),m_phoneno(phoneno),m_mail(mail),m_grp(grp) {};


std::string Donors::get_Bloodgrp()
{
    return m_grp;
}
std::string Donors::get_phoneno()
{
    return m_phoneno;
}
std::string Donors::get_mail()
{
    return m_mail;
}

std::string Donors::get_name()
{
    return m_name;
}

