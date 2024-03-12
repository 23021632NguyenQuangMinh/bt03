
#include <iostream>
using namespace std;

struct Rect {
    double x, y, w, h;
};
struct Ship {
    Rect p;
    string id;
    double dx, dy;
    
    void move() {
        p.x += dx;
        p.y += dy;
    }
};
void display(const Ship& ship) {
    cout << ship.id << " " << ship.p.x << " " << ship.p.y << endl;
}
int main()
{
    Ship ship1;
    ship1.p.x = 1;
    ship1.p.y = 2;
    ship1.p.w = 3;
    ship1.p.h = 4;
    ship1.dx = 1;
    ship1.dy = 3;
    ship1.id = "begay";

    Ship ship2;
    ship2.p.x = 5;
    ship2.p.y = 3;
    ship2.p.w = 1;
    ship2.p.h = 9;
    ship2.dx = 3;
    ship2.dy = 4;
    ship2.id = "notgay";

    int loop = 1;
    while (loop < 10) {
        ship1.move(); ship2.move();
        display(ship1); display(ship2);
        loop++;
    }

}

