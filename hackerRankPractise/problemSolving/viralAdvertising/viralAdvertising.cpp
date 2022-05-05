#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n)
{
  int likesAccumulated = 0;
  int people = 5;
  int likesPerDay = 0;
  for (auto i = 1; i <= n ; i++)
  {
    likesAccumulated += (people / 2);
    likesPerDay = (people / 2);
    people = likesPerDay * 3;
  }

  return likesAccumulated;

}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int result = viralAdvertising(n);

  fout << result << "\n";

  fout.close();

  return 0;
}

