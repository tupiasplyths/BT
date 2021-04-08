#include <iostream>

using namespace std;

struct a{
    int * p;
    a(){};
    a(int *_p){
        p = _p;
    }
};

struct b{
    int *q;
    b(){}
    void clone(a A){
    q = A.p;
    }
};

int main(){
    int n = 10100;
    int * np = &n;

    a hatsu(np);
    b nido;
    nido.clone(hatsu);

    cout << hatsu.p <<endl << nido.q;
    return 0;
}
