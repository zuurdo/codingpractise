#include <fstream>
#include <iostream>
#include "vector"

using namespace std;

/*
 * Complete the 'commonChild' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */
static int T[5001][5001];
int commonChild(string s1, string s2) {
  int m = s1.size();
  int n = s2.size();

  for(int i = 0; i <= m; i++)
  {
    for(int j = 0; j <= n; j++)
    {
      if(i==0 || j==0)
      {
        T[i][j] = 0;
      }
      else if (s1[i-1] == s2[j-1])
      {
        T[i][j] = 1 + T[i-1][j-1];
      }
      else
      {
        T[i][j] = max(T[i-1][j],T[i][j-1]);
      }
    }
  }
  return T[m][n];
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string s1;
  getline(cin, s1);

  string s2;
  getline(cin, s2);

  int result = commonChild(s1, s2);

  //fout << result << "\n";
  cout << result << "\n";

  fout.close();

  return 0;
}

