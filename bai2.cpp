#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void Val(Point p) {
    p.x = 1;
    p.y =2;
}

void Ref(Point& p) {
    p.x = 4;
    p.y = 3;
}

int main() {
    Point point = { 1, 4 };
    Val(point);
    cout <<point.x << " " << point.y << endl;
    Ref(point);
    cout << point.x << " " << point.y << endl;
}

