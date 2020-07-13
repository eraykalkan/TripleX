#include <iostream>
#include <ctime>

/*
used UpperCamelCase intentionally as this is an unreal engine pre-tutorial.
unreal engine coding conventions suggests using UpperCamelCase / PascalCase
*/

void PrintIntroduction(int Difficulty)
{
	std::cout << "\n\nYou are breaking into a LEVEL "<< Difficulty << " secure kitchen fridge..\n";
	std::cout << "You need to enter the code to open the fridge door...\n\n";
}

bool PlayGame(int Difficulty)
{
	PrintIntroduction(Difficulty);

	int CodeA = rand() % Difficulty + Difficulty;
	int CodeB = rand() % Difficulty + Difficulty;
	int CodeC = rand() % Difficulty + Difficulty;

	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;

	std::cout << std::endl;
	std::cout << " + There are 3 numbers on the code." << std::endl;
	std::cout << " + There codes add up to: " << CodeSum << std::endl;
	std::cout << " + The codes multiply to give: " << CodeProduct << std::endl;

	// Store player guess
	int GuessA;
	int GuessB;
	int GuessC;

	std::cin >> GuessA >> GuessB >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;


	// Check if the player guess is correct
	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "\nWell done! you can eat some of the stuff in the fridge!";
		return true;
	}
	else
	{
		std::cout << "\nYou lose.. stay hungry until next time.. or try again..";
		return false;
	}

}

int main() 
{
	srand(time(NULL)); //create new random based on time
	const int MaxDifficulty = 5;
	int LevelDifficulty = 1;
	while (LevelDifficulty <= MaxDifficulty) // Loop until all levels are completed
	{
		bool bLevelComplete = PlayGame(LevelDifficulty);

		std::cin.clear(); //clear console
		std::cin.ignore(); //discard the buffer

		if (bLevelComplete) 
		{
			// increase the difficulty
			++LevelDifficulty;
		}
	}
	std::cout << "\n ** Congrats! Have ALL the ice cream!";
	return 0;
}