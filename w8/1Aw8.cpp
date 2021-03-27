#include<iostream>

using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   cout << &x << " ";
}
void g(int yval)
{
   int y;
   cout << &y;
}
int main()
{
   f(7);
   g(11);
   return 0;
}

/* dia chi x va y giong nhau, vi co cung kieu int va la bien dia phuong dau tien cua 2 ham rieng biet nen duoc sap xep vao cung dia chi*/
