#include <iostream>
using namespace std;

void toBinary(int n){
    string s;
    while (n){
        s += n % 2 + '0';
        n /= 2;
    }
    for (int i = s.length() - 1; i >= 0; i--) cout << s[i];
    cout << endl;
}

void toDecimal(int n){
    string s;
    while (n){
        s += n % 10 + '0';
        n /= 10;
    }
    for (int i = s.length() - 1; i >= 0; i--){
        n = (n + (s[i] - '0')) * 2;
    }
    cout << n/2;
}

int main(){
    int n;
    cin >> n;
    toBinary(n);
    toDecimal(n);
    return 0;
}
