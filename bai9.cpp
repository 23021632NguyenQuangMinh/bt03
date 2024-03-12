#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void val(Point p) {
    p.x = 1;
    p.y = 2;
    cout << &p.x << " " << &p.y << endl;
}

void Ref(Point& p) {
    p.x = 2;
    p.y = 3;
    cout <<& p.x << " " <<& p.y << endl;
}

int main() {
    Point point = { 1, 4 };
    cout << &point.x << " " << &point.y << endl;
    val(point);
    cout << &point.x << " " << &point.y << endl;
    Ref(point);

}