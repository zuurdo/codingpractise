#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'repeatedString' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. LONG_INTEGER n
 */

long repeatedString(string s, long n)
{
  long output = 0;

  int occurences_in_one_string = std::count(s.begin(), s.end(), 'a');
  if(n < s.size())
  {
    cout << "1-" << endl;
    for(int i = 0; i < n; i++)
    {
      if(s.at(i) == 'a')
      {
        output++;
      }
    }
  }
  else {

    cout << "2-" << endl;
    if(n % s.size() == 0)
    {
      output = occurences_in_one_string * (n / s.size());
    }
    else
    {
      cout << "3-" << endl;
      output = occurences_in_one_string * (n / s.size());
      cout << output << endl;
      for(int i = 0; (i < (n % s.size())); i++)
      {
        if(s.at(i) == 'a')
          output++;
      }
    }
  }

  return output;
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  string n_temp;
  getline(cin, n_temp);

  long n = stol(ltrim(rtrim(n_temp)));

  long result = repeatedString(s, n);

  fout << result << "\n";

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

