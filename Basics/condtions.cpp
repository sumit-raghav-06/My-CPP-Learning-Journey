/* #include <iostream>
using namespace std;

int main() {
    int age;
    cout << " whats your age " << endl;
    cin >> age;
    if ( age >= 18) {
        cout << " you are adult" << endl;
    } else {
        cout << "you are minor" << endl;
    }
    return 0;
    
}
    
#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "enter the day number" << endl;
    cin >> day;
    switch (day) {
        case 1:
        cout << "Sunday" << endl;
        break;
        case 2:
        cout << "Monday" << endl;
        break;
        case 3:
        cout << "Tuesday" << endl;
        break;
        case 4:
        cout << "wednesday" << endl;
        break;
        case 5:
        cout << "Thursday" << endl;
        break;
        case 6:
        cout << "Friday" << endl;
        break;
        case 7:
        cout << "Saturday" << endl;
        break;
        default:
        cout << "Invalid day" << endl;
        
    }
    return 0;
}
    