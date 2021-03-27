#include<iostream>

using namespace std;

int sch(int *a, const int& sz, const int& trgt){
    int l=0, r= sz-1;
	int pos;
	int index;
	bool cfm = false;

	while(!cfm && l <= r){
        index = (l+r)/2;
		if( *(a+index)==trgt){
			cfm = true;
			pos = index;
		}
        if( *(a+index)>trgt){
			r = index-1;
		}
		if ( *(a+index)<trgt) l = index+1;
	}
	return pos+1;
}

int main()
{
	int a[10] = {2, 5, 7, 9, 12, 16, 20, 27, 31, 35};
	int b;
	cin >> b;
	cout << sch(a, 10, b);
}
