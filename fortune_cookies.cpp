#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  // Write code here 💖
  srand(time(NULL));

  int option = rand() % 6;
  int LuckyNumber = rand() % 50;

  if (option == 0) {
    cout << "🥠 Don't pursue happiness – create it.\n" 
    << "Your Number is: " << LuckyNumber << endl << "Lucky numbers: 10 23 45 0 31 12";
  }
  else if (option == 1) {
    cout << "🥠 All things are difficult before they are easy.\n" 
    << "Your Number is: " << LuckyNumber << endl << "Lucky numbers: 10 23 45 0 31 12";
  }
  else if (option == 2) {
    cout << "🥠 The early bird gets the worm, but the second mouse gets the cheese.\n" 
    << "Your Number is: " << LuckyNumber << endl<< "Lucky numbers: 10 23 45 0 31 12";
  }
  else if (option == 3) {
    cout << "🥠 Someone in your life needs a letter from you.\n" 
    << "Your Number is: " << LuckyNumber << endl << "Lucky numbers: 10 23 45 0 31 12";
  }
  else if (option == 4) {
    cout << "🥠 The fortune you search for is in another cookie.\n" 
    << "Your Number is: " << LuckyNumber << endl << "Lucky numbers: 10 23 45 0 31 12"; 
  }
  else if (option == 5) {
    cout << "🥠 Help! I'm being held prisoner in a Chinese bakery!\n" 
    << "Your Number is: " << LuckyNumber << endl << "Lucky numbers: 10 23 45 0 31 12";
  }


}
