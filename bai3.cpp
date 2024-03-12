#include <iostream>
using namespace std;

struct point {
	int x, y;
};

point mid_point(point& p1, point& p2) {
	point midpoint;
	midpoint.x = (p1.x + p2.x) / 2;
	midpoint.y = (p1.y + p2.y) / 2;
	return midpoint;
}

int main()
{
	point p1 = { 1,2 };
	point p2 = { 3,4 };
	point midpoint = mid_point(p1, p2);
	cout << midpoint.x << " " << midpoint.y;
}
