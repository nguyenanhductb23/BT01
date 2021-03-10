#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int tong = a + b;
    int hieu = abs(a-b);
    cout << (tong + hieu)/2 << endl;
    return 0;
}
