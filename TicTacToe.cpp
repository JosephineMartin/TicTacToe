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

void DisplayBoard(vector<vector<int>> v) 
{
		for (int row = 0; row < 3; row++)
		{
			cout << "|";
			for (int col = 0; col < 3; col++)
			{
				cout << v[row][col] << "|";
			}
			cout << endl;
		}
}

int main()
{
	vector<vector<int>> vec = CreateBoard();
	DisplayBoard(vec);
  return 0;
}
