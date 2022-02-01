#include <iostream>
#include <istream>
#include <fstream>
#include "vector"

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'sherlockAndAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

vector<string> generateSubstrings(string s)
{
  int lenght_of_string = s.length();
  vector<string> subStrings;
  for(int index =0; index < lenght_of_string; index++)
  {
    for(int index_b = 1; index_b <= lenght_of_string - index; index_b++)
    {
      //cout << "substring " << s.substr(index,index_b) << endl;
      subStrings.push_back(s.substr(index,index_b));
    }

  }
  return subStrings;
}

int sherlockAndAnagrams(string s)
{
  vector<string> subStrings = generateSubstrings(s);
  int counter = 0;
  vector<string>::iterator it1;
  vector<string>::iterator it2;
  for(it1 = subStrings.begin(); it1 < subStrings.end(); it1++)
  {
    for(it2 = it1+ 1; it2 < subStrings.end(); it2++)
    {
      int lenA = (*it1).length();
      int lenB = (*it2).length();

      if(lenA != lenB)
      {
        continue;
      }
      string a = *it1;
      string b = *it2;

      sort(a.begin(),a.end());
      sort(b.begin(),b.end());

      //cout << " " << a << " ; " << b << endl;
      if(a == b)
        counter++;
    }
  }

  return counter;
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string q_temp;
  getline(cin, q_temp);

  int q = stoi(ltrim(rtrim(q_temp)));

  for (int q_itr = 0; q_itr < q; q_itr++) {
    string s;
    getline(cin, s);

    int result = sherlockAndAnagrams(s);

    //fout << result << "\n";
    cout << result << "\n";
  }

  fout.close();

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


