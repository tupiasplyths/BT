#include<iostream>

using namespace std;

/* void swap_pointers(char* x, char* y)
{
   char *tmp;
   tmp = x;
   x = y;
   y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   swap_pointers(s1,s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}
*/

//Ham tren khong doi duoc gia tri con tro vi truyen vao gia tri cua bien con tro, phai truyen vao con tro cua bien con tro thi ham moi co ket qua mong muon

void swap_pointers(char** x, char** y){
   char **tmp;
   *tmp = *x;
   *x = *y;
   *y = *tmp;
}

int main(){
   char *a = "I should print second";
   char *b = "I should print first";

   char **p1 = &a;
   char **p2 = &b;
   swap_pointers(p1,p2);
   cout << "p1 is " << *p1 << endl;
   cout << "p2 is " << *p2 << endl;
   return 0;
}
