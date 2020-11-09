#include <string>
#include "employee3.h"
using namespace std;

class Engineer : public Employee {
  int m_projCode;
  public:
  Engineer(std::string id, std::string name, double salary,int exp,int code);
  double payroll();
  double appraisal();


};

