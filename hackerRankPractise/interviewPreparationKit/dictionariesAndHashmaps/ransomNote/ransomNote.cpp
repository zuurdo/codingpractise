#include <iostream>
#include <fstream>
#include <map>
#include "vector"

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'checkMagazine' function below.
 *
 * The function accepts following parameters:
 *  1. STRING_ARRAY magazine
 *  2. STRING_ARRAY note
 */

void checkMagazine(vector<string> magazine, vector<string> note)
{
  if(note.size() > magazine.size())
  {
    cout << "No" << endl;
    return;
  }
  std::map<string,int> mag;
  std::map<string,int> notes;
  bool result = true;
  for(string i : magazine)
  {
    if(mag.find(i) == mag.end())
    {
      mag.insert(std::pair<string,int>(i,0));
    }
    else
    {
      mag.find(i)->second += 1;
    }
  }
  for(string j : note)
  {
    if(notes.find(j) == notes.end())
    {
      notes.insert(std::pair<string,int>(j,0));
    }
    else
    {
      notes.find(j)->second += 1;
    }
  }
  for(string x: note)
  {
    if (mag.find(x) == mag.end())
    {
      cout << "No" << endl;
      return;
    }
    if(notes.find(x)->second > mag.find(x)->second)
    {
      cout << "No" << endl;
      return;
    }
  }
  cout << "Yes" <<endl;

}

int main()
{
  string first_multiple_input_temp;
  getline(cin, first_multiple_input_temp);

  vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

  int m = stoi(first_multiple_input[0]);

  int n = stoi(first_multiple_input[1]);

  string magazine_temp_temp;
  getline(cin, magazine_temp_temp);

  vector<string> magazine_temp = split(rtrim(magazine_temp_temp));

  vector<string> magazine(m);

  for (int i = 0; i < m; i++) {
    string magazine_item = magazine_temp[i];

    magazine[i] = magazine_item;
  }

  string note_temp_temp;
  getline(cin, note_temp_temp);

  vector<string> note_temp = split(rtrim(note_temp_temp));

  vector<string> note(n);

  for (int i = 0; i < n; i++) {
    string note_item = note_temp[i];

    note[i] = note_item;
  }

  checkMagazine(magazine, note);

  return 0;
}

string ltrim(const string &str) {
  string s(str);

  s.erase(
          s.begin(),
          find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
  );

  return s;
}

string rtrim(const string &str) {
  string s(str);

  s.erase(
          find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
          s.end()
  );

  return s;
}

vector<string> split(const string &str) {
  vector<string> tokens;

  string::size_type start = 0;
  string::size_type end = 0;

  while ((end = str.find(" ", start)) != string::npos) {
    tokens.push_back(str.substr(start, end - start));

    start = end + 1;
  }

  tokens.push_back(str.substr(start));

  return tokens;
}


