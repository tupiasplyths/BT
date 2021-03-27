#include <iostream>

using namespace std;

int f(int a[]){
    return sizeof(a);
}

int main(){
    int a[5];
    cout << sizeof(a) <<endl;
    cout << f(a);

    //ham tra ve 20 trong khi lenh sizeof truc tiep tra ve gia tri 5
}

