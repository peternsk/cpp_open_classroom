#include <iostream>
#include <string>

using namespace std;

void update(int x){
	cout << "X: " << x << endl;
}

int main(void)
{
	int val = 10;

	update(val);

	cout << "val: " << val << endl;
	
	return 0;
}