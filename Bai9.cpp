#include <iostream>
#include <ctime>
using namespace std;

int random(int n)
{
    return rand() % n;
}

int main(){
    srand(time(0));
    int n;
    cin >> n;
    cout << random(n);
    return 0;
}
