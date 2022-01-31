#include <iostream>
#include <istream>
#include <fstream>
#include "vector"
#include "map"

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the countTriplets function below.
long countTriplets(vector<long> arr, long r)
{
  map<long,long>v2;
  map<long,long>v3;

  long count = 0;

  for(auto i : arr)
  {
    if( v3.find(i) != v3.end())
      count += v3.find(i)->second;

    if( v2.find(i) != v2.end())
    {
      if(v3.find(i*r) != v3.end())
      {
        v3.find(i*r)->second += v2.find(i)->second;
      }
      else
      {
        v3.insert(pair<long,long>(i*r,v2.find(i)->second));
      }
    }
    if(v2.find(i*r) != v2.end())
    {
      v2.find(i*r)->second += 1;
    }
    else
    {
      v2.insert(pair<int,int>(i*r,1));
    }
  }

  return count;
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string nr_temp;
  getline(cin, nr_temp);

  vector<string> nr = split(rtrim(nr_temp));

  int n = stoi(nr[0]);

  long r = stol(nr[1]);

  string arr_temp_temp;
  getline(cin, arr_temp_temp);

  vector<string> arr_temp = split(rtrim(arr_temp_temp));

  vector<long> arr(n);

  for (int i = 0; i < n; i++) {
    long arr_item = stol(arr_temp[i]);

    arr[i] = arr_item;
  }

  long ans = countTriplets(arr, r);

  fout << ans << "\n";

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

vector<string> split(const string &str) {
  vector<string> tokens;

  string::size_type start = 0;
  string::size_type end = 0;

  while ((end = str.find(" ", start)) != string::npos) {
    tokens.push_back(str.substr(start, end - start));

    start = end + 1;
  }

  tokens.push_back(str.substr(start));

  return tokens;
}



