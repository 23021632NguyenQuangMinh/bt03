
#include <iostream>
using namespace std;

struct Point {
	double x, y;
};
struct Rect {
	double x, y, w, h;
	bool contains(const Point& p) {
		if (p.x < x) {
			return false;
		}
		if (p.y < y) {
			return false;
		}
		if (p.x > x + w) {
			return false;
		}
		if (p.y > y + h) {
			return false;
		}
	}
};
int main()
{
	Rect hcn = { 1.0, 2.0,3.0,4.0 };
	Point A = { 2.0,4.0 };
	if (hcn.contains(A)) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}

