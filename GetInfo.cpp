//
// Created by Rolan Abbasguliev on 30.09.2020.
//

#include "GetInfo.h"
bool GetInfo::isNumber(string str)
{
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '.')
      continue;
    else if (isdigit(str[i]) == false)
      return false;
  }

  return true;
}

void GetInfo::TypeDetector(string str)
{
  if (isNumber(str))
  {
    if (str.find('.') != string::npos)
      this->type = "float";
    else
      this->type = "int";
  }
  else
    this->type = "string";
}


int GetInfo::_GetInfo(string file, string section_name, string var, string _type)
{
  if (FileHandle(file))
    return 1;
  Parsing();
  string result = "";

  for (int i = 0; i < Section.size(); i++)
  {
    if (Section[i][0] == section_name)
    {
      for (int j = 1; j < Section[i].size(); j++)
      {
        if (Section[i][j] == var)
        {
          TypeDetector(Section[i][j+1]);
          if (this->type != _type)
          {
            cout << "\n\nError type";
            return 1;
          }
          result = Section[i][j+1];
          cout << "\n\nRESULT: " << result << "\n";
          return 0;
        }
        else if (j == Section[i].size() - 1)
        {
          cout << "\n\nError: variable " << var << " not found in section " << Section[i][0] << "\n";
          return 1;
        }
      }
    }
    else if (i == Section.size() - 1)
    {
      cout << "\n\nError: section " << section_name << " not found\n";
      return 1;
    }
  }
  cout << "\n\nRESULT: " << result << "\n";
  return 0;
}


