//
// Created by Rolan Abbasguliev on 30.09.2020.
//

#ifndef OOP_FILEHANDLER_H
#define OOP_FILEHANDLER_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <utility>


using namespace std;

class FileError
{
public:
  vector <string> file_info;
public:
  int FileHandle( string file_name );

};


#endif //OOP_FILEHANDLER_H
