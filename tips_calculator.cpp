#include <iostream>
using namespace std;

int tips_menu() {
  int option;
  int tip_percentage;
  cout << "Leave a tip?\n"
  << "1. 15%\n"
  << "2. 20%\n"
  << "3. 25%\n"
  << "4. custom\n";
  cin >> option;

  if (option == 1) {
    tip_percentage = 15;
    return tip_percentage;
  }
  else if (option == 2) {
    tip_percentage = 20;
    return tip_percentage;
  }
  else if (option == 3) {
    tip_percentage = 25;
    return tip_percentage;
  }
  else if (option == 4) {
    cout << "Enter custom tip: ";
    cin >> tip_percentage;
    return tip_percentage;
  }
  else {
    cout << "Invalid option";
    return 0;
  }
}

 int tips_calculator(double bill, int tip_percentage) {
    double tip = (tip_percentage*0.01)*bill;
    return tip;
  }

  int main() {
   int tip_percentage = tips_menu();
    double tip_amount = tips_calculator(1000, tip_percentage);
    cout << "$" << tip_amount;
  }



