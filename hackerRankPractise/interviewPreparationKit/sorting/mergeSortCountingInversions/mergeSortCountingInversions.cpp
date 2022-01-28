#include <iostream>
#include <fstream>
#include "vector"

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'countInversions' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 * fundamentos del merge
 */
long _merge(int arr[], int tmp[],int left , int mid, int right)
{
  long inv_count = 0;
  int i,j,k;

  i = left;
  j = mid;

  k = left;
  //cout << "i " << i << "; j " << j << "; k" << k << endl;
  while( (i <= mid - 1) && (j <= right) )
  {
    //cout << "arr[i] " << arr[i] << "; arr[j] " << arr[j] << endl;
    if(arr[i] <= arr[j])
    {
      tmp[k++] = arr[i++];

    }
    else
    {
      tmp[k++] = arr[j++];
      //cout << "inv_cnt " << inv_count << "; mid " << mid << "; i " << i << endl;
      inv_count = inv_count + (mid - i);
      //cout << "triqui truco " << inv_count << endl;
    }
  }

  while (i <= (mid - 1))
    tmp[k++] = arr[i++];

  while (j <= right )
    tmp[k++] = arr[j++];

  for (i = left; i <= right; i++)
    arr[i] = tmp[i];

  return inv_count;
}

long merge(int arr[], int tmp[], int left, int right)
{
  int mid = 0;
  long inv_count = 0;

  if(right > left)
  {
    mid = (right + left) / 2;
    inv_count += merge(arr, tmp, left, mid);
    inv_count += merge(arr, tmp, mid + 1, right);

    //cout << left << " " << right << endl;
    inv_count += _merge(arr, tmp, left, mid + 1, right);
    //cout << inv_count << endl;
  }

  return inv_count;
}

long countInversions(vector<int> arr)
{
  long count;
  int tmp[arr.size()];
  int vec[arr.size()];
  copy(arr.begin(),arr.end(),vec);
  count = merge(vec,tmp,0,arr.size()-1);
  return count;
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string t_temp;
  getline(cin, t_temp);

  int t = stoi(ltrim(rtrim(t_temp)));

  for (int t_itr = 0; t_itr < t; t_itr++) {
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
      int arr_item = stoi(arr_temp[i]);

      arr[i] = arr_item;
    }

    long result = countInversions(arr);

    //fout << result << "\n";
    cout << result << "\n";
  }

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


