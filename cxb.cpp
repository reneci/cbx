#include <iostream>
#include <iomanip>
#include <sstream>
#include <bitset>

long long hex;
int index;
bool value;
bool bit;
int errorcode = 1;

std::stringstream stream;

int main(int argv, char* argc[])
{
	stream << std::hex << argc[1];
	stream >> hex;

	index = std::atoi(argc[2]);
	value = (bool)std::atoi(argc[3]);
	
	bit = hex & (1 << index) > 0;
	if (bit == value) {
		errorcode = 0;
	}
	else {
		errorcode = 2;
	}

	std::cout << "Hex: " << argc[1] << std::endl;
	std::cout << "Dec: " << std::dec << hex << std::endl;
	std::cout << "Bin: " << std::bitset<64>(hex) << std::endl;
	std::cout << "Index: " << index << std::endl;
	std::cout << "Expected Bit: " << value << std::endl;
	std::cout << "Bit: " << bit << std::endl;
	std::cout << "Errorcode: " << errorcode << std::endl;

	return errorcode;
}