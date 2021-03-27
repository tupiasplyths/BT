#include <iostream>

using namespace std;

int UCLN(int a, int b){
	int u = 0;
	if (a < b)
	{
		for (int i = a; i <= b; i++)
		{
			if (a % i == 0 && b % i == 0) GCD = i;
		}
		return GCD;
	}

	if (a > b)
	{
		for (int i = b; i <= a; i++)
		{
			if (a % i == 0 && b % i == 0) GCD = i;
		}
		return GCD;
	}
	if (a == b) return a;
	return 1;
}

int main(){

}
