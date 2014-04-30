#include <iostream>

class everythingisawesome
{
public:
	everythingisawesome();
	~everythingisawesome();
	void hello();


};

everythingisawesome::everythingisawesome()
{
}

everythingisawesome::~everythingisawesome()
{

}

void everythingisawesome::hello()
{
	int i = 0;
    std::cout << "hello" << std::endl;
    std::cout << "everything is awesome!" << std::endl;
    std::cout << "input an integer: ";
    std::cin >> i;
    std::cout << "integer value: " << std::cout << i << std::endl;
}