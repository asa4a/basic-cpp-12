#include <iostream>
using namespace std;

string prime(int N){
    if (N == 1) return "BUKAN\n";
    for (int i = 2; i*i <= N; i++){
        if (N % i == 0){
            return "BUKAN\n";
        }
    }
    return "YA\n";
    
}

int main(){
    int Q; cin >> Q;
    while(Q--){
        int N; cin >> N;
        cout << prime(N);
    }
}