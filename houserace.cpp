#include <random>
#include <iostream>
std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

int coin = dist(rd);

#define NUM_HORSES 5
#define RACE_LENGTH 15

void advance(int horseNum, int* horses) {
	horses[horseNum] += dist(rd);
}


void printLane(int horseNum, int* horses) {
	for (int y = 0; y < RACE_LENGTH; ++y) {
		if (y == horses[horseNum]) {
			std::cout << "H";
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

	while (winner) {
		for (int y = 0; y < NUM_HORSES; ++y) {
			advance(y, horses);
			printLane(y, horses);

			if (isWinner(y, horses)) {
				winner = true;
				break; //sorryyyy 
			}
		}
	}
	return 0;
}

