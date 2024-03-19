#include <iostream>
#include <string>

using namespace std;

void	change(int* newx){
	*newx = 20;
	cout << "new x in function: " << newx << endl; 

}

int main(void)
{
	int x = 10;
	change(&x);
	cout << "new x in main: " << x << endl; 
}