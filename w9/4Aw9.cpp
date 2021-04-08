#include <iostream>

using namespace std;

int main(){
	int a;
	cin  >> a;

	cerr << &a<<endl;
	cerr <<a<<endl;

	int *p = new int [a];
	cerr<< *p;
	delete p;
	//p tro den vung nho ngau nhien
}
