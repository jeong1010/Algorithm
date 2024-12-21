#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float n;
    cin >> n;
    cout << fixed;
    cout.precision(1);
    n *= 30.48;
    cout << n;
    return 0;
}