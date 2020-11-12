#include<iostream>
#include"Bloodgrp.h"
#include"Donors.h"
using namespace std;
Bloodgrp::Bloodgrp():Donors() {
     m_no=0;
     m_amount=0;
}
Bloodgrp::Bloodgrp(std::string name,std::string phoneno,std::string mail,std::string grp,int no,int amount):
    Donors(name,phoneno,mail,grp), m_no(no),m_amount(amount) { }

int Bloodgrp::get_no_of_donaters()
{
    return m_no;
}
int Bloodgrp::get_amount_of_blood()
{
    return m_amount;
}
