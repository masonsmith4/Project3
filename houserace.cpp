#include <random>
#include <iostream>
#include <cstdlib>

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

int coin = dist(rd);

#define NUM_HORSES 5
#define RACE_LENGTH 15

void advance(int horseNum, int* horses) {
	horses[horseNum] += dist(rd);
}


void printLane(int horseNum, int* horses) {
	for(int x = 0; x < NUM_HORSES; ++x) {
		for (int y = 0; y < RACE_LENGTH; ++y) {
			if (y == horses[horseNum]) {
				std::cout << x;
			} else {
				std::cout << ".";
			}
		}
		std::cout << std::endl;
}

bool isWinner(int horseNum, int* horses){
	bool result = false;
	if (horses[horseNum] >= RACE_LENGTH){
		std::cout << "Horse number " << horseNum << " Wins! " << std::endl;
		result = true;
	}
	return result;
}

int main() {
	int horses[NUM_HORSES] = {0};
	bool winner = false;

	for(int y = 0; y < NUM_HORSES; ++y) {
		horses[y] += dist(rd);
	}
	printLane(horses);

	finish = isWinner(horses);

	if(!finish) {
		std::cout << "Press enter to go another turn" << std::endl;
		std::cin.get(); //had to look this one up
	}
}
return 0;