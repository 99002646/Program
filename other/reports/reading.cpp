

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <boost/algorithm/algorithm.hpp>
#include <boost/tokenizer.hpp>
int main()
{ 
    using namespace std; 
    using namespace boost; 
    string data("AppointmentData.csv"); //also worked for video_games.csv,Video_Games_Sales_as_at_22_Dec_2016.csv
 ifstream in(data.c_str()); 
 if (!in.is_open()) return 1;
 typedef tokenizer< escaped_list_separator<char> > Tokenizer; 
 vector< string > vec; 
 string line;
 while(getline(in,line))
 { 
     Tokenizer tok(line); 
     vec.assign(tok.begin(),tok.end());
 //vector now contains strings from one row, output to cout here copy(vec.begin(), vec.end(), ostream_iterator<string>(cout, ","));
 copy(vec.begin(),vec.end(),ostream_iterator<string>(cout,","));
 cout << "\n----------------------" << endl; }
 }
 
 
/* 
#include <iostream>
#include <string>
#include <fstream>
#include <regex>

#define FILENAME "AppointmentData.csv" //Your filename as Macro 
//(The compiler just sees text.csv instead of FILENAME)



void read(){
std::string n;

//date format pattern %m/%dd/%YY
std::regex pattern1("\\b\\d{1}[/]\\d{2}[/]\\d{2}\\b");
//date format pattern %mm/%dd/%YY
std::regex pattern2("\\b\\d{2}[/]\\d{2}[/]\\d{2}\\b");
std::smatch result1, result2;

std::ifstream file(FILENAME, std::ios::in);
    if ( ! file.is_open() )
    {
        std::cout << "Could not open file!" << '\n';
    }

    do{
            getline(file,n,',');
            //https://en.cppreference.com/w/cpp/string/basic_string/getline
            if(std::regex_search(n,result1,pattern1))
                    std::cout << result1.str(1) << n <<  std::endl;
            if(std::regex_search(n,result2,pattern2))
                    std::cout << result2.str(1) << n <<  std::endl;
    }
    while(!file.eof());
    file.close();
}

int main ()
{
    read();
    return 0;
}*/
