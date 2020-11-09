#include"color.h"
#include<iostream>
using namespace std;


 Color::Color()
{
   m_r=0;
    m_g=0;
    m_b=0;
}
 Color::Color(int a,int b,int c)
{
    m_r=a;
    m_g=b;
    m_b=c;
}
 Color::Color(int a)
{
    m_r=a;
    m_g=a;
    m_b=a;
}
 Color::Color(color_t)
{
    m_r=red;
    m_g=green;
    m_b=blue;

}
int Color::getred()
{
     return m_r;
}
int Color::getgreen()
{
    return m_g;

}
int Color::getblue()
{
    return m_b;
}
void Color::invert()
{
    int temp = m_r;
    m_r=m_g;
    m_g=m_b;
    m_b=temp;

}
void Color::display()
{
    cout<<m_r<<endl<<m_g<<endl<<m_b;
}

