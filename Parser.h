//
// Created by Rolan Abbasguliev on 30.09.2020.
//

#ifndef OOP_PARSER_H
#define OOP_PARSER_H

#include "FileHandler.h"

class MainInfo : public FileError
{
public:
  vector <vector <string>> Section;
  vector <string> DirtyVersion;
public:
  void Parsing();
};
#endif //OOP_PARSER_H
