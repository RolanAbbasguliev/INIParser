//
// Created by Rolan Abbasguliev on 30.09.2020.
//

#include "Parser.h"


void MainInfo::Parsing( void )
{
  string word = "";
  for (int i = 0; i < file_info.size(); i++)
  {
    string word = "";
    for (auto x : file_info[i])
    {
       if (x == '=')
         x = '\0';
       else if (x >= '0' && x <= '9')
         word += x;
       else if (x == ' ' && word != "")
       {
         this->DirtyVersion.push_back(word);
         word = "";
       }
       else if (x == ';')
         break;
       else if (x != ' ')
         word += x;
    }
    if (word != "")
      this->DirtyVersion.push_back(word);
  }

  int col = -1;
  for (int i = 0; i < DirtyVersion.size(); i++)
  {

    vector<string> tmp;
    string stmp = "";
    // Struct all info to Sections
    if (DirtyVersion[i].find('[') != string::npos)
    {
      col += 1;
      stmp = DirtyVersion[i];
      stmp.erase(remove(stmp.begin(), stmp.end(), '['), stmp.end());
      stmp.erase(remove(stmp.begin(), stmp.end(), ']'), stmp.end());
      tmp.push_back(stmp);

      Section.push_back(tmp);
    }
    else
    {
      stmp = DirtyVersion[i];
      Section[col].push_back(stmp);
    }
  }
}

