#include <iostream>
#include <string>
using namespace std;

string check(string S, string T){
    string str;
    int j = 0;
    for (int i = 0; i < S.length(); i++){
        if ((S.compare(i,T.length(),T) == 0)){
            i += T.length()-1;
        } else {
            str += S[i];
        }
    }
    return str;
}

int main(){
    string S, T;
    cin >> S >> T;
    while (check(S,T).length() != S.length()){
        S = check(S,T);
    }
    cout << S;
}