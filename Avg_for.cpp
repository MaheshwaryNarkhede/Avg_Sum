#include <iostream>
using namespace std;
int main() {
    int n, i;
    float avg = 0, sum;

    cout << "Enter the number of elements to calculate the average::\n";
    cin >> n;
    
    cout << "Enter " << n<< " elements one by one\n\n";
    for(i = 0; i < n; i++) {
        cin >> sum;
        avg += sum;
    }

    avg /= n;
    cout << "\nThe average of the entered input numbers is = " << avg;
    return 0;
}
