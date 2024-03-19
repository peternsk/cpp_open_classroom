#include <iostream>
#include <string>

using namespace std;

class Base{

	private:
		int *ptr;
		int x;
		int y;

	public:
		Base(){
			x = 0;
			y = 0;
			cout << "Default constructor" << endl;
		} // default constroctor

		void	func1(){
			cout << "this is function 1" << endl;
		}

		~Base(){
			cout << "Destructor" << endl;
		};
};

int main(void) {
	int *p = new int;
	Base b;
	delete p;
	return 0;
}