#include <iostream>

using namespace std;

void func(int space, int ast){
    for(int i=0; i<space; i++) cout << " ";

    for(int i=0; i<ast; i++) cout << "*";
}

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        func(n-i-1, i*2+1);
        cout << endl;
    }
    return 0;
}
