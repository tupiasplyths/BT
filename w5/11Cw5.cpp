#include <iostream>

using namespace std;

int decToBin(int n){
	long sum = 0;
	long d, i = 1;

	while (n > 0){
		d = n % 2;
		sum += i * d;
		n /= 2;
		i *= 10;
	}
	return sum;
}

int binToDec(int n){
    int num = n;
    int dec = 0;
    int base = 1;
    int tmp = num;

    while (tmp){
        int a = tmp % 10;
        tmp = tmp / 10;
        dec += a*base;
        base = base * 2;
    }

    return dec;
}

int main(){
    int n;
    cin >> n;

    if (n>100000)
    cout << binToDec(n);
    else cout << decToBin(n);
}


