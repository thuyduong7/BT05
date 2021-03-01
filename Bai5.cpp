#include <iostream>
#include <cmath>
using namespace std;

bool nguyenTo(int n)
{
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        if (nguyenTo(i)) cout << i << ' ';
    }
    return 0;
}
