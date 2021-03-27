#include <iostream>

using namespace std;

int get_size (char s[]){
    int c=0;
    while (s[c]!= '\0'){
        c++;
    }
    return c;
}

void reverse(char s[],const int n){
	char *s2=new char [n];
	for(int i=0;i<n;i++) {
		*(s2+i)=*(s+n-i-1);
	}
	for(int i=0;i<n;i++) {
		*(s+i)=*(s2+i);
	}
	for(int i=0;i<n;i++) {
		cout << s2[i];
	}
}

void pad_right(char s[], int n, int a){
    if(n>a){
        for(int i=a;i<n;i++) {
        	*(s+i)=' ';
		}
    }

    for (int i=0;i<n;i++){
        cout << s[i];
    }
}

void pad_left(char s[], int n,int a) {
    if(n>a) {
        for(int i=0;i<a;i++) {
		    *(s+i+(n-a))=*(s+i);
	     }
	     for(int i=0;i<n-a;i++) {
	        *(s+i)=' ';
	     }
    }
}

int main(){
    char * s = new char[30];
    cin >> s;
    int n = get_size(s);
    //reverse(s,n);
    int num;
    cin >> num;
    //pad_right(s,num,n);
    //pad_left(s,num,n);
}
