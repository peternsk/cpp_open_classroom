#include <iostream>
#include <string>

using namespace std;

class Point {
	private :
		double p_x;
		double p_y;
	
	public :
		Point () {
			p_x = 0;
			p_y = 0;
			cout << "Default called" << endl;
		}  // default constroctor

		Point(double x, double y){
			p_x = x;
			p_y = y;
			cout << "Parameterize called" << endl;
		} // parameterized constroctor

		Point(const Point& rhs) {
			p_x = rhs.p_x;
			p_y = rhs.p_y;
			cout << "copy called" << endl;
		} // copy constroctor

		double getX(){
			return (p_x);
		}

		double getY(){
			return (p_y);
		}

};

int main(void)
{
	Point p1;
	Point p2(1.3, 3.4);
	Point p3 = p1;

	cout << p2.getX() << endl;
	cout << p2.getY() << endl;
}