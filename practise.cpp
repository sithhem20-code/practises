#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "Before swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    swap(&x, &y);

    cout << "After swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}

