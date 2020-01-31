#include <iostream>
#include <string>
using namespace std;

int main() {

  int roomCap;
  cout << "Enter the maximum capacity: " << endl;
  cin >> roomCap;
//user inputs the room maximum Cap
  int peopInRoom;
  cout << "Enter how many people are in the room: " << endl;
  cin >> peopInRoom;
//user inputs the people in the room
  if(peopInRoom <= roomCap){
    cout << "The meeting can continue on." << endl;
    cout << "The meeting can have this many more people: " << roomCap - peopInRoom << endl;
  }

  //calculates 

  else{
    cout << "The meeting is too large for this room." << endl;
    cout << "The meeting has: " << peopInRoom - roomCap << " to many people." << endl;
  }
  return 0;

}
