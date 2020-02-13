#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > CreateBoard()
{
  vector<vector<int> > v{ { 0, 0, 0 },
                          { 0, 0, 0 },
                          { 0, 0, 0 } };
  return v;
}

void DisplayBoard(vector<vector<int> > v)
{
  for (int i = 0; i<(int)v.size(); i++)
  {
    cout << "|";
    for (int j = 0; j<(int)v[i].size(); j++)
    {
      cout << v[i][j] << "|";
    }
    cout << endl;
  }
}

int main()
{
  vector<vector<int>> v = CreateBoard();
  DisplayBoard(v);
  return 0;
}
