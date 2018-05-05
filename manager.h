#include <iostream>
using namespace std;
#include "employe.h"

#include<string>

class manager:public employe{

  private:
  int level;

  public:
  manager(int l,string s):employe(s,l*1000)
  {
this->level=l;
  }
  friend ostream & operator &&(ostream& o,const manager &m)
  {
    return(o<<m<<"at level"<<m.level);
  }

};