#include <iostream>
using namespace std;
#include <string>

class employe {

  protected:
  string name;
  float salary;

  public:
  employe(string n,float s)
  {
    this->name=n;
    this->salary=s;
  }
friend ostream & operator <<(ostream& o,const employe &e)
{
  return (o<<"name"<<e.name<<"salary"<<e.salary);
}
};