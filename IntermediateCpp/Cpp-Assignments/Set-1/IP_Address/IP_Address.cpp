#include<iostream>
#include<string>
#include"IP_Address.h"
using namespace std;

IPAddress::IPAddress(){

}
IPAddress::IPAddress(int a[0],int b[1],int c[2], int d[3]){
    ipval[0] = a[0]; ipval[1] = b[1]; ipval[2] = c[2]; ipval[3] = d[3];
}
IPAddress::IPAddress(int e[4]){
    ipval[4] = e[4];
}
bool IPAddress::isLoopBack(int a[0],int b[1],int c[2],int d[3]){
    if(a[0] == 127 && a[1] == 000 && a[2] == 000 && a[3] == 001)
        return true;
    else
        return false;
}
string IPAddress::getIPClass(int a[0])
{
    if (a[0]>=0 && a[0]<=127)
    {
        cout<<"A \n";
    }
    if (a[0]>127 && a[0]<191)
    {
        cout<<"B \n";
    }
    if (a[0]>191 && a[0]<224)
    {
        cout<<"C \n";
    }
    if (a[0]>224 && a[0]<=239)
    {
        cout<<"D \n";
    }
    if (a[0] > 239)
    {
        cout<<"E \n";
    }
    //void IPAddress::display()
    {
        cout<<ipval[0]<<","<<ipval[1]<<","<<ipval[2]<<","<<ipval[3]<<"\n";
    }
}
