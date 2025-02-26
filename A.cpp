#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    int max = -100001, min = 100001;
    for (int i = 0; i < N; i++){
        int tmp; cin >> tmp;
        if (tmp > max) max = tmp;
        if (tmp < min) min = tmp;
    }
    cout << max << " " << min;
}