
#include "GetInfo.h"


int main(int argc, char **argv)
{

  GetInfo a;
  string _sec_name = "";
  string _var = "";
  string _type = "";
  string file_name = "";


  cout << "Input Ini file: ";
  cin >> file_name;

  cout << "Input -Section- Name: ";
  cin >> _sec_name;

  cout << "Input -Var- Name: ";
  cin >> _var;

  cout << "Input -Type- [int/float/string]: ";
  cin >> _type;


  a._GetInfo(file_name, _sec_name, _var, _type);

  return 0;
}
