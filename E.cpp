#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N, D; cin >> N >> D;
    int X[N], Y[N];
    int Tmax = 0, Tmin = 10000;
    for (int i = 0; i < N; i++){
        cin >> X[i] >> Y[i];
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (i == j){
                continue;
            }
            double xx = abs(X[j]-X[i]);
            double yy = abs(Y[j]-Y[i]);
            int tmp = ((int) pow(xx,D)) + ((int) pow(yy,D));
            Tmax = max(Tmax,tmp);
            Tmin = min(Tmin,tmp);
        }
    }
    
    cout << Tmin << " " << Tmax;
}