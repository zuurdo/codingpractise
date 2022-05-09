#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
  /*
   * Write your code here.
   */
  // n pages of the book
  // p page I want to go to
  return min(p/2,(n/2)-(p/2));

}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int p;
  cin >> p;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int result = pageCount(n, p);

  fout << result << "\n";

  fout.close();

  return 0;
}


