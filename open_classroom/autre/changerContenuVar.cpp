#include <iostream>
#include <string>

int main(void)
{
    int unNombre;

    unNombre = 20;

    int a(2), b(11), c;

    std::cout << "a = " << a << std::endl; 
    std::cout << "b = " << b << std::endl;

    std::cout << "swap" << std::endl;

    c = a;
    a = b;
    b = c;

    std::cout << "a = " << a << std::endl; 
    std::cout << "b = " << b << std::endl; 
}  