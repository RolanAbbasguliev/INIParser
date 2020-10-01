//
// Created by Rolan Abbasguliev on 30.09.2020.
//

#include "FileHandler.h"


int FileError::FileHandle(string file_name)
{
  ifstream fin(file_name);

  // File check
  if (!fin.is_open())
  {
    cout << "FILE: " << file_name << " not found!";
    return 1;
  }

  // Expansion check
  istringstream iss(file_name);
  string word;
  vector <string> token;
  while (getline(iss, word, '.'))
    token.push_back(word);

  if (token.back() != "ini")
  {
    cout << "Error expansion \n"<< "." << token.back() << " expansion not supported!";
    return 1;
  }

  // ADD FIRST LINE NAME OF SECTION WITH REG !!!!

  //Parsed File by line
  string line;
  while (getline(fin, line))
    this->file_info.push_back(line);

  //Check First line of ini file
  string _str = file_info[0];
  if ((_str[0] != '[') || (_str[_str.length() - 1] != ']'))
  {
    cout << "Error: ini file bad decription";
    return 1;
  }

  fin.close();
  return 0;
}