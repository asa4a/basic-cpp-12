#include <iostream>
using namespace std;

int rek(int A, int B, int K, int x){
    return (abs(A*x + B));
}

int main(){
    int A, B, K, x; cin >> A >> B >> K >> x;
    while(K--){
        x = rek(A, B, K, x);
    }
    cout << x;
}