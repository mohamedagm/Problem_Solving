//equal or not
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    if (a == b) {
        cout << "The numbers are equal." << endl;
    } else {
        cout << "The numbers are not equal." << endl;
    }

    return 0;
}
//even or odd
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Even number." << endl;
    } else {
        cout << "Odd number." << endl;
    }

    return 0;
}
// + - 0
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num > 0) {
        cout << "Positive number." << endl;
    } else if (num < 0) {
        cout << "Negative number." << endl;
    } else {
        cout << "Zero." << endl;
    }

    return 0;
}
// name of day
#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1 to 7): ";
    cin >> day;

    if (day == 1) cout << "Sunday";
    else if (day == 2) cout << "Monday";
    else if (day == 3) cout << "Tuesday";
    else if (day == 4) cout << "Wednesday";
    else if (day == 5) cout << "Thursday";
    else if (day == 6) cout << "Friday";
    else if (day == 7) cout << "Saturday";
    else cout << "Invalid day number";

    return 0;
}
//who is bigger?
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    if (a > b) {
        cout << "Maximum is: " << a << endl;
    } else if (b > a) {
        cout << "Maximum is: " << b << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}
