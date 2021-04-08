#include<iostream>
#include<cstring>

using namespace std;

struct String{
    int n;
    char* s;

    String(const char* x){
        n=strlen(x);
        s=new char[n];
        strcpy(s,x);
    }
    ~String(){
       delete [] s;
    }

    void print(){
        cout << s << endl;
    }
    void append(const char *x){
        int sz = n+strlen(x);
        char *tmp = new char[sz];

        strcpy(tmp,s);
        delete [] s;
        strcat(tmp,x);
        s=tmp;
    }
};

int main(){
    String greeting("kon");
    greeting.print();
	greeting.append("yappi");
	greeting.print();
	return 0;
}
