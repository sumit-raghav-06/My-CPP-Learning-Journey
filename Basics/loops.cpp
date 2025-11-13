#include <iostream>
using namespace std;

int main() {
   for (int i = 1; i <=10; i++)
   {
       cout << "1 to 10:  " << i << endl;
   }
}
    

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter number" << endl;
    cin >> number;
    int sum = 0;
   for (int i = 1; i <= number; i++)
   {
       sum = sum + i;
      
   }
 cout << "Sum of 1 to " << number << ": " << sum << endl;
}
    







#include <iostream>
using namespace std;

int main() {
   for (int i =1; i <= 50; i++) {
       if (i % 2 == 0) {
           cout << "even numbers " << i << endl;
       }
   }
}
    
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter number" << endl;
    cin >> number;
    int factorial = 1;
    while (number > 0) {
        factorial = factorial * number;
        number--;
    }
    cout << "factorial is : " << factorial << endl;
}
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "*";
    }
    cout << endl;
}

}
    