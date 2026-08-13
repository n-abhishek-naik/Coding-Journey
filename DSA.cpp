#include <iostream>
using namespace std;

int factorial(int n) {
    int dig = 1;
    for(int i = 1; i <= n; i++) {
        dig *= i;
    }
    return dig;
}

int nCr (int n, int r) {
    int facto_n = factorial(n);
    int facto_r = factorial(r);
    int facto_nmr = factorial(n - r);

    return facto_n/(facto_r * facto_nmr);
}

int main() {
    
    int n, r;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "Enter the value of r : ";
    cin >> r;

    cout << nCr(n,r) << endl;
    
    return 0;   
}