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


void printLane(int* horses) {
	for(int x = 0; x < NUM_HORSES; ++x) {
		for (int y = 0; y < RACE_LENGTH; ++y) {
			if (y == horses[x]) {
				std::cout << x;
			} else {
				std::cout << ".";
			}
		}
		std::cout << std::endl;
	}
}

bool isWinner(int* horses){
	for (int y = 0; y < NUM_HORSES; ++y) {
		if (horses[y] >= RACE_LENGTH){
			std::cout << "Horse number " << y << " Wins! " << std::endl;
			return true;
		}
	}
	return false;
}

int main() {
	int horses[NUM_HORSES] = {0};

	while (!isWinner(horses)) {
		for (int y = 0; y < NUM_HORSES; ++y) {
			advance(y, horses);
		}
		printLane(horses);

		if(isWinner(horses)) {
			std::cout << "Press enter to advnace" << std::endl;
			std::cin.get();
			}
	}
	return 0;
}