#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n)
{
  int digits =0;
  int x = 0;
  int m = n;
  while(m > 0)
  {
    int digit = m%10;
    m /= 10;
    cout << n<<" "<<digit << endl;
    if(digit != 0 && ((n % digit) == 0) )
    {
      digits +=1;
    }

  }
  return digits;

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

    int result = findDigits(n);

    fout << result << "\n";
  }

  fout.close();

  return 0;
}

