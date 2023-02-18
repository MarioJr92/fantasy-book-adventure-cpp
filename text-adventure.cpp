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

      // Endings
      switch (wishChoice)
      {
      case 1:
        cout << "You become the wealthiest person in the world, but your greed leads to your downfall. You die alone and unhappy." << endl;
        break;
      case 2:
        cout << "You find true love and live a long and happy life together. Congratulations!" << endl;
        break;
      case 3:
        cout << "Your wish is granted and the world becomes a peaceful place. You live a happy life knowing you made a difference." << endl;
        break;
      default:
        cout << "Invalid choice. Please try again." << endl;
        break;
      }
    }
    else if (rabbitChoice == 2)
    {
      cout << "You try to find your way on your own, but you get lost in the forest and are never seen again." << endl;
      return 0;
    }
    else
    {
      cout << "Invalid choice. Please try again." << endl;
    }
  }
  else if (pathChoice == 2)
  {
    cout << "You come across a group of bandits who demand that you give them all your belongings. What do you do?" << endl;
    cout << "1. Give them your things" << endl;
    cout << "2. Refuse and fight them" << endl;

    int banditChoice;
    cin >> banditChoice;

    // Third branch point
    switch (banditChoice)
    {
    case 1:
      cout << "The bandits take your things and let you go. You wander the forest alone and eventually die of starvation." << endl;
      break;
    case 2:
      cout << "You put up a fight and manage to defeat the bandits. You find a map in their camp that leads to a treasure. What do you do?" << endl;
      cout << "1. Follow the map" << endl;
      cout << "2. Leave the forest" << endl;

      int treasureChoice;
      cin >> treasureChoice;

      // Endings
      if (treasureChoice == 1)
      {
        cout << "You follow the map and find the treasure. You become a rich and famous adventurer." << endl;
        return 0;
      }
      else if (treasureChoice == 2)
      {
        cout << "You leave the forest and never think about the map again. You live a simple life and die of old age." << endl;
        return 0;
      }
      else
      {
        cout << "Invalid choice. Please try again." << endl;
        return 0;
      }
    default:
      cout << "Invalid choice. Please try again." << endl;
      break;
    }
  }
  else
  {
    cout << "Invalid choice. Please try again." << endl;
    return 0;
  }
}