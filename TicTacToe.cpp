#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<vector<std::string> > CreateBoard()
{
  vector<vector<std::string> > v{ { " ", " ", " " },
                          { " ", " ", " " },
                          { " ", " ", " " } };
  return v;
}

void DisplayBoard(vector<vector<std::string> > v)
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
  cout << "Where would you like to play? Format (x,y)" << endl;
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

// PlaceMarker places the marker on the board and returns new board
vector<vector<std::string> > PlaceMarker(vector<int> choice, std::string marker, vector<vector<std::string> > board)
{
  int row = choice[0];
  int col = choice[1];
  board[row][col] = marker;
  return board;
}


int main()
{
  vector<vector<std::string>> v = CreateBoard();
  DisplayBoard(v);

  vector<int> choice;
  std::string marker;

  for (int i = 0; i < 4; ++i)
  {
    // Player 1's turn
    marker = "X";
    choice = GetPlayerChoice();
    v = PlaceMarker(choice, marker, v);
    DisplayBoard(v);

    // Player 2's turn
    marker = "O";
    choice = GetPlayerChoice();
    v = PlaceMarker(choice, marker, v);
    DisplayBoard(v);
  }

  // final turn
  marker = "X";
  choice = GetPlayerChoice();
  v = PlaceMarker(choice, marker, v);
  DisplayBoard(v);

  return 0;
}
