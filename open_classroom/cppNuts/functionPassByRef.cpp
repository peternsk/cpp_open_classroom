#include <iostream>
#include <string>

using namespace std;

void update(int& x){
	x = x + 10;
}

int main(void)
{
	int val = 10;
	cout << "before change: " << val << endl;
	update(val);
	cout << "after change: " << val << endl;
	return 0;
}