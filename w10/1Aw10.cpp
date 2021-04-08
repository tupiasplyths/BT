#include <iostream>

using namespace std;

struct Point{
    float x, y;
    Point(){};
    Point (float _x, float _y) {
         x=_x;
         y=_y;
    }
    void print(){
        cout << x <<" ";
        cout << y << endl;
    }
};

int main(){
    Point m(19,5);
    m.print();
    return 0;
}
