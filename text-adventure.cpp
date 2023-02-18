#include <iostream>
using namespace std;

int main()
{
  cout << "Once upon a time, you find yourself in a magical forest. You see a path that splits in two. Which way do you choose?" << endl;
  cout << "1. Left" << endl;
  cout << "2. Right" << endl;

  int pathChoice;
  cin >> pathChoice;

  // First branch point
  if (pathChoice == 1)
  {
    cout << "You come across a talking rabbit who offers to guide you through the forest. Do you accept?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;

    int rabbitChoice;
    cin >> rabbitChoice;

    // Second branch point
    if (rabbitChoice == 1)
    {
      cout << "The rabbit leads you to a clearing where you find a treasure chest. You open it and discover a magical amulet that grants you unlimited wishes. What do you wish for?" << endl;
      cout << "1. Wealth and riches" << endl;
      cout << "2. Love and happiness" << endl;
      cout << "3. World peace" << endl;

      int wishChoice;
      cin >> wishChoice;
    }
  }
}