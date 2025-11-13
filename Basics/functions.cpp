#include <iostream>
using namespace std;

int multiply (int a , int b) {
    return a * b;
}

int main () {
    int x = 5,  y = 6;
    int product = multiply (x, y);
        cout << "product " << product << endl;
    
}

#include <iostream>
using namespace std;

void odd (int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << "" << endl;
        }
    }
}

int main () {
    int n;
   cout << " enter number" << endl;
   cin >>n;
   cout << " even" << n << endl;
   odd(n);
    
}
// static
// recur
#include <iostream>
using namespace std;

void printupto(int n) {
    if (n == 0) {
        cout << " printupto " << endl;
        return;
    }
    
    printupto(n-1);
cout << n << endl;
}

int main () {
    int userin;
    cout << "enter a number" << endl;
    cin >> userin;
    printupto(userin);
    return 0;
   
    
}

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    cout << "Enter number of terms: ";
    cin >> num;

    cout << "Fibonacci series: ";
    for (int i = 0; i < num; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

