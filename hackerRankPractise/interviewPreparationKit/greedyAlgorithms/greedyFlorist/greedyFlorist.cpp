#include <iostream>
#include <fstream>
#include "string"
#include "vector"
using namespace std;

vector<string> split_string(string);

// Complete the getMinimumCost function below.
int getMinimumCost(int k, vector<int> c)
{
  int sum = 0;
  int n = c.size();
  sort(c.begin(),c.end());

  int iteracion = n % k != 0? n/k + 1 : n/k;

  for(int i = 0; i < iteracion; i++)
  {
    int j = 1;
    while (j <= k && c.size() > 0)
    {
      sum += (i + 1) * c[c.size()-1];
      c.pop_back();
      j++;
    }
  }

  return sum;
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string nk_temp;
  getline(cin, nk_temp);

  vector<string> nk = split_string(nk_temp);

  int n = stoi(nk[0]);

  int k = stoi(nk[1]);

  string c_temp_temp;
  getline(cin, c_temp_temp);

  vector<string> c_temp = split_string(c_temp_temp);

  vector<int> c(n);

  for (int i = 0; i < n; i++) {
    int c_item = stoi(c_temp[i]);

    c[i] = c_item;
  }

  int minimumCost = getMinimumCost(k, c);

  cout << minimumCost << "\n";

  fout.close();

  return 0;
}

vector<string> split_string(string input_string) {
  string::iterator new_end = unique(input_string.begin(), input_string.end());

  input_string.erase(new_end, input_string.end());

  while (input_string[input_string.length() - 1] == ' ') {
    input_string.pop_back();
  }

  vector<string> splits;
  char delimiter = ' ';

  size_t i = 0;
  size_t pos = input_string.find(delimiter);

  while (pos != string::npos) {
    splits.push_back(input_string.substr(i, pos - i));

    i = pos + 1;
    pos = input_string.find(delimiter, i);
  }

  splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

  return splits;
}



