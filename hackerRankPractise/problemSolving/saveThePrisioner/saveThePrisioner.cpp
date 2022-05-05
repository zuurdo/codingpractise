#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

vector<string> split_string(string);

// Complete the saveThePrisoner function below.
long long saveThePrisoner(long long n, long long m, long long s)
{
  // n prisioneros
  // m caramelos
  // s primera silla.
  return ((s + m - 1) %n )> 0 ? ((s + m - 1 ) % n ) : n ;

}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  int t;
  cin >> t;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (int t_itr = 0; t_itr < t; t_itr++) {
    string nms_temp;
    getline(cin, nms_temp);

    vector<string> nms = split_string(nms_temp);

    long long n = stoi(nms[0]);

    long long m = stoi(nms[1]);

    long long s = stoi(nms[2]);

    long long result = saveThePrisoner(n, m, s);

    fout << result << "\n";
  }

  fout.close();

  return 0;
}

vector<string> split_string(string input_string) {
  string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
      return x == y and x == ' ';
  });

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

