#include <iostream>

using namespace std;

int count_even(int *a, int n){
    int i,c = 0;

    for (i=0; i<n; i++){
        if ( *(a + i)%2 == 0) c++;
    }
    return c;
}

int main(){
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    cout << count_even(a,5) << " " << count_even(a+5,5);
}
