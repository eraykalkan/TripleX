#include <iostream>

/*
used UpperCamelCase intentionally as this is an unreal engine pre-tutorial.
unreal engine coding conventions suggests using UpperCamelCase / PascalCase
*/

int main() 
{
	std::cout << "You are breaking into a secure kitchen fridge..";
	std::cout << std::endl;
	std::cout << "You need to enter the code to open the fridge door...";

	int CodeA = 4;
	int CodeB = 5;
	int CodeC = 2;

	int CodeSum = CodeA + CodeB + CodeC;
	int CodeProduct = CodeA * CodeB * CodeC;

	std::cout << std::endl;
	std::cout << " + There are 3 numbers on the code." << std::endl;
	std::cout << " + There codes add up to: " << CodeSum << std::endl;
	std::cout << " + The codes multiply to give: " << CodeProduct << std::endl;

	int GuessA;
	int GuessB;
	int GuessC;

	std::cin >> GuessA;
	std::cin >> GuessB;
	std::cin >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB + GuessC;


	return 0;
}