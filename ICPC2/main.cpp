#include <iostream>
using namespace std;
//Individual Bonus 2: Task 4 (1.5 mark) – Using AI for Programming
int main() {
//compute average of vector
int num;
cout << "Enter the number of elements in the vector: ";
cin >> num;
int v[num];
for (int i = 0; i < num; i++) {
cout << "Enter the element " << i << " of the vector: \n";
cin >> v[i];

}
int sum = 0;
for (int i = 0; i < num; i++) {
sum += v[i];

}
cout << "\nThe average of the vector is: " << sum / num << endl;
cout<<"\n";
    //fractal pattern
    int i, j, k, l, m, Num;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 - i; j++) {

            cout << " ";
        }
        cout << " ";

        for (k = 1; k <= i; k++) {
            cout << "*";

        }
        cout << " ";
        for (l = 1; l <= i - 1; l++) {
            cout << "*";

        }
        cout << " ";
        for (m = 1; m <= 5 - i; m++) {
            cout << " ";

        }
        cout << " ";
        for (num = 1; num <= 5 - i; num++) {
            cout << " ";

        }
        cout << " ";
        for (l = 1; l <= i - 1; l++) {
            cout << "*";
        }
        cout << " ";
        for (k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << " ";

        for (j = 1; j <= 5 - i; j++) {
            cout << " ";

        }
        cout << endl;
    }

}
