#include <iostream>

using namespace std;

struct Point{
    int x, y;
    Point(){};
    Point (int _x, int _y) {
         x=_x;
         y=_y;
    }
    void print(){
        cout << x <<" ";
        cout << y << endl;
    }
};

int main(){
    Point m;
    cin >> m.x >> m.y;
    cout << &m.x << " " << &m.y <<" " <<&m;
    ///  dia chi x va y cach nhau 4 byte trong khi m co cung dia chi cung voi m.x
    return 0;
}
