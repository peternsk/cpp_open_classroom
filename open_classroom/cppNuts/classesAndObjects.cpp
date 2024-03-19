#include <iostream>
#include <string>

using namespace std;

class Phone {

	private :
		string p_name;
		string p_size;
	
	public :

		Phone(string name, string size) {
			p_name = name;
			p_size = size;
		}

		void	makecall(){
			cout << "making call using" << " " <<p_name << endl;
		}

		void	recievecall(){
			cout << "receiveing call using" << " " << p_name << endl;
		}
};

int main(void){
	Phone iphone("iphone_X","1000x500");
	iphone.makecall();
	iphone.recievecall();
	cout << endl;
	Phone gpixel("Google Pixel 2 XL", "2000x700");
	gpixel.makecall();
	gpixel.recievecall();

	return 0;
}