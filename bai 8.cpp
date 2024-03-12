
#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point a = { 1,2 };
    cout << &a << endl;
    cout << &a.x << endl;
    cout << &a.y << endl;
}
//dia chi cua a trung voi a.x
