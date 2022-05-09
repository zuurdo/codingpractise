#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {

  int carry = 0;
  vector <int> arr(500,0);
  arr[0] = 1;

  int aux = 0;
  for(int i = 1; i<=n; i++)
  {
    for(int j = 0; j<=aux;j++)
    {
      arr[j] = arr[j] * i + carry;
      carry = arr[j] / 10;
      arr[j] = arr[j]%10;
    }
    while (carry)
    {
      aux ++;
      arr[aux] = carry % 10;
      carry /=10;
    }
  }

  for (int i =aux ; i >=0; i--)
  {
    cout << arr[i];
  }
}

int main()
{
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  extraLongFactorials(n);

  return 0;
}

