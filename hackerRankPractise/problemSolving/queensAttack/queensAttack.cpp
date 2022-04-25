#include <tuple>
#include <iostream>
#include <vector>
#include <set>
#include <fstream>
#include <string>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'queensAttack' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER r_q
 *  4. INTEGER c_q
 *  5. 2D_INTEGER_ARRAY obstacles
 */

int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int> > obstacles)
{

  std::set< tuple<int, int> > obstacles_tuples;
  int result = 0;
  for(auto a : obstacles)
  {
    //cout << "Size of first vector " << a.size() << endl;
    std::tuple<int,int> x = make_tuple(a[0],a[1]);
    obstacles_tuples.insert(x);
  }
  // Move vertically over rows
  if(n==1 && k== 0)
  {
    return result;
  }
  for (int i = r_q + 1; i <= n ; i++ )
  {
    //cout << "Check on row 1" << i << " " << c_q << endl;
    tuple<int,int> posible_obstacle = make_tuple(i,c_q);
    if(obstacles_tuples.find(posible_obstacle) != obstacles_tuples.end())
    {
      //cout << "Find a obstacle at " << c_q << " " << i << endl;
      break;
    }
    cout << "Move on row 2" << i << " " << c_q << endl;
    result ++;
  }
  for (int i = r_q - 1; i > 0 ; i-- )
  {
    //cout << "Check on row 2" << i << " " << c_q << endl;
    tuple<int,int> posible_obstacle = make_tuple(i,c_q);
    if(obstacles_tuples.find(posible_obstacle) != obstacles_tuples.end())
    {
      //cout << "Find a obstacle at " << c_q << " " << i << endl;
      break;
    }
    cout << "Move on row 2" << i << " " << c_q << endl;
    result ++;
  }
  for (int i = c_q + 1; i <= n ; i++ )
  {
    //cout << "Check on row 3" << r_q << " " << i << endl;
    tuple<int,int> posible_obstacle = make_tuple(r_q,i);
    if(obstacles_tuples.find(posible_obstacle) != obstacles_tuples.end())
    {
      //cout << "Find a obstacle at " << r_q << " " << i << endl;
      break;
    }
    cout << "move on row 3" << r_q << " " << i << endl;
    result ++;
  }

  for (int i = c_q - 1; i > 0 ; i-- )
  {
    //cout << "Check on row 4" << r_q << " " << i << endl;
    tuple<int,int> posible_obstacle = make_tuple(r_q,i);
    if(obstacles_tuples.find(posible_obstacle) != obstacles_tuples.end())
    {
      //cout << "Find a obstacle at " << r_q << " " << i << endl;
      break;
    }
    cout << "move on row 4" << r_q << " " << i << endl;
    result ++;
  }


  for(int i = r_q + 1, j = c_q + 1 ; i <= n && j <= n ; i++ , j++)
  {
    //cout << "Check on row 6" << i << " " << j << endl;
    tuple<int,int> posible_obstacle = make_tuple(i,j);
    if(obstacles_tuples.find(posible_obstacle) != obstacles_tuples.end())
    {
      //cout << "Find a obstacle at " << r_q << " " << i << endl;
      break;
    }
    cout << "Move at " << i << ' ' << j << endl;
    result ++;
  }


  for(int i = r_q + 1, j = c_q - 1 ; i <= n && j > 0 ; i++ , j--)
  {
    //cout << "Check on row 7" << i << " " << j << endl;
    tuple<int,int> posible_obstacle = make_tuple(i,j);
    if(obstacles_tuples.find(posible_obstacle) != obstacles_tuples.end())
    {
      //cout << "Find a obstacle at " << r_q << " " << i << endl;
      break;
    }
    cout << "Move at " << i << ' ' << j << endl;
    result ++;
  }
  //cout << "continue " << r_q << ' ' << c_q << endl;
  for(int i = r_q - 1, j = c_q + 1 ; i > 0 && j <= n ; i-- , j++)
  {
    //cout << "Check on row 8" << i << " " << j << endl;
    tuple<int,int> posible_obstacle = make_tuple(i,j);
    if(obstacles_tuples.find(posible_obstacle) != obstacles_tuples.end())
    {
      //cout << "Find a obstacle at " << r_q << " " << i << endl;
      break;
    }
    cout << "Move at " << i << ' ' << j << endl;
    result ++;
  }

  for(int i = r_q - 1, j = c_q - 1 ; i > 0 && j > 0 ; i-- , j--)
  {
    // cout << "Check on row 9" << i << " " << j << endl;
    tuple<int,int> posible_obstacle = make_tuple(i,j);
    if(obstacles_tuples.find(posible_obstacle) != obstacles_tuples.end())
    {
      //cout << "Find a obstacle at " << r_q << " " << i << endl;
      break;
    }
    cout << "Move at " << i << ' ' << j << endl;
    result ++;
  }

  return result;

}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string first_multiple_input_temp;
  getline(cin, first_multiple_input_temp);

  vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

  int n = stoi(first_multiple_input[0]);

  int k = stoi(first_multiple_input[1]);

  string second_multiple_input_temp;
  getline(cin, second_multiple_input_temp);

  vector<string> second_multiple_input = split(rtrim(second_multiple_input_temp));

  int r_q = stoi(second_multiple_input[0]);

  int c_q = stoi(second_multiple_input[1]);

  vector<vector<int>> obstacles(k);

  for (int i = 0; i < k; i++) {
    obstacles[i].resize(2);

    string obstacles_row_temp_temp;
    getline(cin, obstacles_row_temp_temp);

    vector<string> obstacles_row_temp = split(rtrim(obstacles_row_temp_temp));

    for (int j = 0; j < 2; j++) {
      int obstacles_row_item = stoi(obstacles_row_temp[j]);

      obstacles[i][j] = obstacles_row_item;
    }
  }

  int result = queensAttack(n, k, r_q, c_q, obstacles);

  fout << result << "\n";

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

