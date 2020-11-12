#include<iostream>
#include "blooddb.h"
#include "Donors.h"
#include "Bloodgrp.h"
#include<list>
#include <bits/stdc++.h>
std::list<Bloodgrp>grps;
void blooddb::addDonor(std::string name,std::string grp,std::string phoneno,std::string mail,int no,int amount) {

    grps.push_back(Bloodgrp(name,grp,phoneno,mail,no,amount));
}
Bloodgrp* blooddb::Searchdonor(std::string grp){

     std::list<Bloodgrp> :: iterator iter;

    for(iter=grps.begin();iter!=grps.end();++iter)

        if(iter->get_Bloodgrp()==grp)

            return &(*iter);

    return NULL;
}
void blooddb::read_data( std::list<Bloodgrp>&grps)
{
     string S,A,B,C,D,E,F;
    fstream fin;
    fin.open("Blooddata.csv", ios::in);
    while( getline(fin, S))
    {
        stringstream X(S);
        getline(X, A, ',');
        getline(X, B, ',');
        getline(X, C, ',');
        getline(X, D, ',');
        getline(X, E, ',');
        getline(X, F, ',');

        Bloodgrp temp(A,B,C,D,stoi(E),stoi(F));
        grps.push_back(temp);
    }
}
void blooddb::display(std::list<Bloodgrp>&grps)
{
list<Bloodgrp>::iterator iter;

for(iter=grps.begin();iter!=grps.end();++iter)
{ cout<<"NAME:"<<iter->m_name<<"\n";
cout<<"PHONE NUM:"<<iter->m_phoneno<<"\n";
cout<<"GROUP:"<<iter->m_mail<<"\n";
cout<<"MAIL:"<<iter->m_grp<<"\n";
cout<<"NUMBER:"<<iter->m_amount<<"\n";
cout<<"AMOUNT:"<<iter->m_no<<"\n\n\n\n";
}
fstream fcou;
    fcou.open("output.txt", ios::out);
    for(iter=grps.begin();iter!=grps.end();++iter)
{ fcou<<"NAME:"<<iter->m_name<<"\n";
fcou<<"PHONE NUM:"<<iter->m_phoneno<<"\n";
fcou<<"GROUP:"<<iter->m_mail<<"\n";
fcou<<"MAIL:"<<iter->m_grp<<"\n";
fcou<<"NUMBER:"<<iter->m_amount<<"\n";
fcou<<"AMOUNT:"<<iter->m_no<<"\n\n\n\n";
}
fcou.close();



}


///


