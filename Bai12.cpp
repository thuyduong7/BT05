#include <iostream>
using namespace std;

int giaiThua(int x)
{
    int y = 1;
    for (int i = 2; i <= x; i++) y *= i;
    return y;
}

int toHop(int k, int n)
{
    return giaiThua(n)/(giaiThua(k) * giaiThua(n-k));
}

void nhapKN(int k[], int n[], int *soPhanTu)
{
    int i = 0;
    do {
        cin >> *(k + i) >> *(n + i);
        i++;
    } while (*(k + i - 1) != -1 && *(n + i - 1) != -1);
    i--;
    *soPhanTu = i;
}

int kiemTra(int k, int n)
{
    if (k < 0 || k > n || n < 1 || n > 20) return 0;
    return 1;
}

int main(){
    int k[20], n[20];
    int *soPhanTu;
    nhapKN(k, n, soPhanTu);
    for (int i = 0; i < *soPhanTu; i++){
        cout << toHop(k[i],n[i]) << endl;
    }
    return 0;
}
