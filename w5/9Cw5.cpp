#include <iostream>
#include <ctime>
#include<cstdlib>

using namespace std;

int rnd(int n){
	return rand() % n;
}

int main(){
	srand(time(0));
	int n;
	cin >> n;
	cout << rnd(n);
}
