#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float ft = 9.2 ,mi = 1.3, cm1 = ft*30.48, cm2 = mi*160934;
    cout << fixed;
    cout.precision(1);
    cout << ft << "ft = " << cm1 << "cm" << endl;
    cout << mi << "mi = " << cm2 << "cm";
    return 0;
}