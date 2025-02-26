#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    int t = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < i+1; j++){
            cout << t%10;
            t++;
        }
        cout << "\n";
    }
}