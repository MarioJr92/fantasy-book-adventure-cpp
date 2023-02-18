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
  }

  int rabbitChoice;
  cin >> rabbitChoice;
}