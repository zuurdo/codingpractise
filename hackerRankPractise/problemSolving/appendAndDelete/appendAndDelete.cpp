#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k)
{
  if ((s.size() + t.size()) < k )
  {
    return "Yes";
  }
  int commonIndex = 0;
  for (int i = 0; i < min(s.size(), t.size()); i++)
  {
    if (s[i] == t[i])
      commonIndex++;
    else
      break;
  }
  int a = s.size();
  int b = t.size();
  if( ((k - a - b + commonIndex +commonIndex) >= 0) &&(k - s.size() - t.size() + 2*commonIndex) % 2 == 0 )
  {
    return "Yes";
  }
  return "No";
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  string t;
  getline(cin, t);

  int k;
  cin >> k;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string result = appendAndDelete(s, t, k);

  fout << result << "\n";

  fout.close();

  return 0;
}

