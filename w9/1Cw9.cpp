#include <iostream>

using namespace std;

int get_size(const char a[])
{
    int c = 0;
    while (*(a + c) != '\0')
        c++;
    return c;
}

char* rvrs(const char a[])
{
    int s = get_size(a);
    char * rs =new char [s];

    for (int i = 0; i < s ; i++)
        rs[i]=a[s-i-1];
    return rs;
}

char* delete_char(const char *a ,const char &c){
	int n = get_size(a);
	char* temp = new char[n];
	int j = 0;

	for(int i=0;i<n;i++ ){
	   if(*(a+i) != c){
	   	*(temp + j) = *(a+i);
	   	j++;
	   }
	}
	return temp;
}

char* pad_right(const char a[],const int n){
    int s = get_size(a);
    char * rs = new char [n];

    for(int i=0; i<s; i++){
        *(rs + i) = *(a + i);
    }

    for (int i = s; i < n; i++){
        *(rs + i) = ' ';
    }
    return rs;
}

char* pad_left(const char a[],const int n){
    int s = get_size(a);
    char * rs = new char [n];

    for(int i=0; i<s; i++){
        *(rs + i) = *(a + i);
    }

    while (s < n){
        for (int i = s; i > 0; i--){
            *(rs + i) = *(rs + i - 1);
        }
        s++;
        *rs = ' ';
    }
    return rs;
}


char* trim_left(const char a[]){
    int s = get_size(a);
    char * rs=new char [s];

    for(int i=0; i<s; i++){
        *(rs + i) = *(a + i);
    }

    int i = 0;

    while (*(a + i) == ' ')
        i++;

    for (int j = 0; j < s - i; j++)
        *(rs + j) = *(rs + i + j);

    *(rs + s - i) = '\0';
    return rs;
}

char* trim_right(char a[]){
    int i = 0;
    int s=get_size(a);
    char * rs=new char [s];

    for(int i=0; i<s; i++){
        *(rs + i) = *(a + i);
    }

    while (*(a + i) != ' ')
        i++;
    *(rs + i) = '\0';
    return rs;
}

int main()
{
    char a[100];
    cin >> a;
    int n;
    cin >> n;
    char c;
    cin >> c;

    cout << get_size(a) << endl;
    cout<< rvrs(a) << endl;
    cout<<  delete_char(a,c) << endl;
    cout<< pad_right(a,n) << endl;
    cout<< pad_left(a,n) << endl;
    cout<< trim_left(pad_left(a,n)) << endl;
    cout<< trim_right(pad_right(a,n)) << endl;
    return 0;
}
