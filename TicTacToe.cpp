#include <iostream>
#include <vector>
#include <sstream>
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

// GetPlayerChoice", which should prompt the user for a location to play, then return that choice
vector<int> GetPlayerChoice()
{
  string choice;
  cout << "Where whould you like to play? Format (x,y)" << endl;
  getline(cin, choice);
  vector<int> v;
  stringstream sstream(choice);
  while(sstream.good())
  {
    string value;
    getline(sstream, value, ',');
    v.push_back(stoi(value));
  }
  return v;
}


int main()
{
  vector<vector<int>> v = CreateBoard();
  DisplayBoard(v);
  
  vector<int> choice = GetPlayerChoice();
  cout << choice[0] << " "<< choice[1] <<endl;

  return 0;
}
