#include <iostream>
#include <cmath>
using namespace std;

int main() {
if (20 > 18)
    {
    cout << "20 is greater than 18" <<endl;
    }
int x = 20;
int y = 18;
if (x > y)
    {
    cout << "x is greater than y" <<endl;
    }
int time  = 20;
if (time < 18) {
    cout << "Good day." <<endl;
    } else {
    cout << "Good evening." << "\n";
    }
    time = 22;
if (time < 10) {
    cout << "Good morning." << endl;
    } else if (time < 20) {
    } else {
    cout << "Good evening." << endl;
    }
    string result = (time <18) ? "Good day." : "Good evening.";
    cout << result <<endl;
    int day = 4;
    switch (day) {
case 1:
    cout << "Monday";
    break;
case 2:
    cout << "Tuesday";
    break;
case 3:
    cout << "Wednesday";
    break;
case 4:
    cout << "Thursday" <<endl;
    break;
case 5:
    cout << "Friday";
    break;
case 6:
    cout << "Saturday";
    break;
case 7:
    cout << "Sunday";
    break;
    }
switch (day) {
case 6:
    cout << "Today is Saturday" <<endl;
    break;
case 7:
    cout << "Today is Sunday" <<endl;
    break;
default:
    cout << "Looking forward to the Weekend" <<endl;
    }
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }
    int u = 0;
    do {
        cout << u << "\n";
        u++;
    }
    while (u < 5);
    for (int p = 0; p <= 10; p = p + 2) {
        cout << p << "\n";
    }
    for (int c = 0; c <10; c++) {
        if (c == 4) {
            continue;
        }
        cout << c << "\n";
    }
    string cars[4] =  {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0] <<endl;
    cars[0] = "Opel";
    cout << cars[0] <<endl;
    for(int h = 0; h < 4; h++) {
        cout << cars[h] << "\n";
        cout << h << ": " << cars[h] << "\n";
    }
  return 0;
}

