#include <iostream>
using namespace std;

int findH(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findL(int a, int b) {
    int h = findH(a, b);
    int l = (a * b) / h;
    return l;
}

int main() {
    int num1 = 24;
    int num2 = 36;
    
    int hResult = findH(num1, num2);
    cout << "The first output of " << num1 << " and " << num2 << " is: " << hResult << endl;

    int lResult = findL(num1, num2);
    cout << " The first output of " << num1 << " and " << num2 << " is: " << lResult << endl;

    return 0;
}

