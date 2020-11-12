#ifndef BLOODDB_H_INCLUDED
#define BLOODDB_H_INCLUDED
#include "Donors.h"
#include "Bloodgrp.h"
#include<list>
#include<iterator>
class blooddb {

    std::list<Bloodgrp>grps;
  public:
    void addDonor(std::string,std::string,std::string,std::string,int,int);
    Bloodgrp* Searchdonor(std::string);

    void read_data( std::list<Bloodgrp>&);
    void display(std::list<Bloodgrp>&);
   // double Bloodpressure();
    //double sugar();


};

#endif // BLOODDB_H_INCLUDED
