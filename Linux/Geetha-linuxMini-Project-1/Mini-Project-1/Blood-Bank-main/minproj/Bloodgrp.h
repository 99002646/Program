#ifndef BLOODGRP_H_INCLUDED
#define BLOODGRP_H_INCLUDED
#include<iostream>
#include"Donors.h"
using namespace std;
class Bloodgrp:public Donors
{
public:
    int m_no;
    int m_amount;

    Bloodgrp();
    Bloodgrp(std::string,std::string,std::string,std::string,int,int);
     //double bloodpressure() override;
    // double health()override;

    int get_no_of_donaters();
    int get_amount_of_blood();
};


#endif // BLOODGRP_H_INCLUDED
