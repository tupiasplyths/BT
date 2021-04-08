#include <iostream>

using namespace std;

struct Point{
    float x, y;
    Point(){};
    Point (float _x, float _y) {
         x=_x;
         y=_y;
    }
    Point midpoint(const Point a, const Point b){
        Point m( (a.x+b.x)/2 , (a.y+b.y)/2 );
        return m;
    }
};

int main(){
    Point a(19,5);
    Point b(20,2);
    Point m = Point.midPoint(a,b);
    cout << m.x << " " << m.y;
    return 0;
}
