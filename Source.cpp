#include <iostream>

int main() 
{
	int pNumber;
	int cNumber = rand() % 100 + 1;
	std::cout << cNumber << std::endl;
	std::cout << "Guess the secret number (1 - 100): " << std::flush;
	std::cin >> pNumber;

	while (cNumber != pNumber) {
		if (cNumber > pNumber) {
			std::cout << "Too small: " << std::flush;
			std::cin >> pNumber;
		}
		else if (cNumber < pNumber) {
			std::cout << "Too big: " << std::flush;
			std::cin >> pNumber;
		}
	}

	std::cout << "Correct, the number is " << pNumber << "!" << std::endl;

}