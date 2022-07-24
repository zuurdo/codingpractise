#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


class Node
{
public:
    int index;
    Node* leftNode;
    Node* rightNode;
    int depth;

    Node(int val, int d, Node* izq, Node* dch)
    {
      index = val;
      depth = d;
      leftNode = izq;
      rightNode = dch;
    }
};

void swapSubtrees(Node subtree)
{
  Node* auxNode = subtree.leftNode;
  subtree.leftNode = subtree.rightNode;
  subtree.rightNode = auxNode;
}

/*
 * Complete the 'swapNodes' function below.
 *
 * The function is expected to return a 2D_INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. 2D_INTEGER_ARRAY indexes
 *  2. INTEGER_ARRAY queries
 */

void inOrderTraversing(Node* node, vector<int>& result)
{
  if(node == NULL)
    return;
  inOrderTraversing(node->leftNode,result);
  result.push_back(node->index);
  inOrderTraversing(node->rightNode,result);
}

void swapInOrder(Node* node, int depth, int k)
{
  if(node == NULL)
    return;

  swapInOrder(node->leftNode,depth+1,k);
  swapInOrder(node->rightNode,depth+1,k);

  if(depth >= k && depth % k == 0)
  {
    Node* tmp = node->leftNode;
    node->leftNode = node->rightNode;
    node->rightNode = tmp;
  }
}

vector<vector<int>> swapNodes(vector<vector<int>> indexes, vector<int> queries)
{
  Node* rootNode = new Node(1,1, NULL, NULL);
  int deep = 1;
  queue<Node*> tree;
  tree.push(rootNode);
  // Reading the tree from input
  int numOfNodes = indexes.size();
  int N = 0;
  while (N < numOfNodes)
  {
    Node* aux = tree.front();
    tree.pop();

    int leftIndex = indexes[N][0];
    int rightIndex = indexes[N][1];

    aux->leftNode = (leftIndex == -1)?NULL: new Node(leftIndex,aux->depth+1,NULL,NULL);
    aux->rightNode = (rightIndex == -1)?NULL: new Node(rightIndex,aux->depth + 1, NULL, NULL);

    if(aux->leftNode!=NULL && aux->leftNode->index != -1)
      tree.push(aux->leftNode);
    if(aux->rightNode != NULL && aux->rightNode->index != -1)
      tree.push(aux->rightNode);

    N++;
  }

  vector<vector<int>> result{};

  // Do the swaps
  for (auto j : queries)
  {
    vector<int> swap{};
    swapInOrder(rootNode,1,j);
    inOrderTraversing(rootNode, swap);
    result.push_back(swap);
  }

  return result;
}

int main()
{
  //ofstream cout(getenv("OUTPUT_PATH"));

  string n_temp;
  getline(cin, n_temp);

  int n = stoi(ltrim(rtrim(n_temp)));

  vector<vector<int>> indexes(n);

  for (int i = 0; i < n; i++) {
    indexes[i].resize(2);

    string indexes_row_temp_temp;
    getline(cin, indexes_row_temp_temp);

    vector<string> indexes_row_temp = split(rtrim(indexes_row_temp_temp));

    for (int j = 0; j < 2; j++) {
      int indexes_row_item = stoi(indexes_row_temp[j]);

      indexes[i][j] = indexes_row_item;
    }
  }

  string queries_count_temp;
  getline(cin, queries_count_temp);

  int queries_count = stoi(ltrim(rtrim(queries_count_temp)));

  vector<int> queries(queries_count);

  for (int i = 0; i < queries_count; i++) {
    string queries_item_temp;
    getline(cin, queries_item_temp);

    int queries_item = stoi(ltrim(rtrim(queries_item_temp)));

    queries[i] = queries_item;
  }

  vector<vector<int>> result = swapNodes(indexes, queries);

  for (size_t i = 0; i < result.size(); i++) {
    for (size_t j = 0; j < result[i].size(); j++) {
      cout << result[i][j];

      if (j != result[i].size() - 1) {
        cout << " ";
      }
    }

    if (i != result.size() - 1) {
      cout << "\n";
    }
  }

  cout << "\n";


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
