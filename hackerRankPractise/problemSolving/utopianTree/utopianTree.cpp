#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

// Complete the utopianTree function below.
int utopianTree(int n)
{
  if (n == 0) return 1;
  else {
    if((n % 2) == 0)
    {
      return 1 + utopianTree(n - 1);
    }
    else {
      return 2 * utopianTree(n -1);
    }
  }

}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  int t;
  cin >> t;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (int t_itr = 0; t_itr < t; t_itr++) {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = utopianTree(n);

    fout << result << "\n";
  }

  fout.close();

  return 0;
}
