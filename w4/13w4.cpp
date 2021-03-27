#include <iostream>

using namespace std;

bool check(int *a, int n){
    int sum = 0;
	for (int i = 0; i < n; i++){
		sum = sum + a[i];
	}

	int count = a[0];
	if(sum == count) return true;
	for(int i=1;i<n; i++){
		if(sum-a[i]-count == count) return true;
        count += a[i];
    }
    return false;
}

int main(){
    int n,i;
    cin >> n;

    for (i=1; i<=n; i++){
        int c,j;
        cin >> c;
        int arr[c];
        for (j=0;j<c;j++){
            cin >> arr[j];
        }
        if (check(arr,c))  cout << "YES" <<endl;
        else    cout << "NO"<<endl;
    }

}
