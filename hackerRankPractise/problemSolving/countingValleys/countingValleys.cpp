#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path)
{
  char down = 'D';
  char up = 'U';
  long int valley = 0;
  signed int track = 0;
  char previousStep;

  for(std::string::size_type i = 0 ; i < path.size() ; i ++ )
  {

    if (path[i] == up )
    {
      track +=1;
    }
    else
    {
      track -=1;
    }
    previousStep = path[i];

    if (track == 0 && previousStep == up)
    {
      valley +=1;
    }
  }


  return valley;
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string steps_temp;
  getline(cin, steps_temp);

  int steps = stoi(ltrim(rtrim(steps_temp)));

  string path;
  getline(cin, path);

  int result = countingValleys(steps, path);

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
