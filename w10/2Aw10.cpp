#include <iostream>

using namespace std;

struct Point{
    float x, y;
    Point(){};
    Point (float _x, float _y) {
         x=_x;
         y=_y;
    }
};


void print(Point a){
    cout << &a << endl;
}

void print2(Point &a){
    cout << &a << endl;
}

int main(){
  Point a(19,5);
  cout << &a << endl;

  print(a);
  print2(a);
}
