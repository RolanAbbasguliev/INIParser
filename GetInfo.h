//
// Created by Rolan Abbasguliev on 30.09.2020.
//

#ifndef OOP_GETINFO_H
#define OOP_GETINFO_H

#include "Parser.h"


class GetInfo : public MainInfo
{
public:
  string type;
public:
  bool isNumber(string str);
  void TypeDetector(string str);

  int _GetInfo(string file, string section_name, string var, string type);

};

#endif //OOP_GETINFO_H
