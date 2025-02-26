#include <iostream>
using namespace std;

string gunung(int x){
    string str;
    for (int i = 0; i < x; i++){
        str += "*";
    }
    str += "\n";
    return str;
}

string fg(int x){
    if (x == 1){
        return gunung(1);
    }
    return fg(x-1) + gunung(x) + fg(x-1);
}

int main(){
    int N; cin >> N;
    cout << fg(N);
}