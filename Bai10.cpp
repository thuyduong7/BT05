#include <iostream>
#include <ctime>
using namespace std;

void chia25(int a[], int n)
{
    for (int i = 0; i < n-2; i++){
        int s = a[i];
        for (int j = i+1; j < i+3; j++){
            s += a[j];
        }
        if (s % 25 == 0){
            for (int k = i; k < 3; k++) cout << a[k] << ' ';
            cout << endl;
        }
    }
}

int main(){
    srand(time(0));
    int n = rand() % 20;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    chia25(a,n);
    return 0;
}
