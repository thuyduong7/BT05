#include <iostream>

using namespace std;

int ucln(int a, int b)
{
    int c;
    while (b){
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << ucln(a,b) << endl;
    if (ucln(a,b) == 1) printf ("%d va %d nguyen to cung nhau", a, b);
    return 0;
}
