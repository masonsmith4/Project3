#include <random>
#include <iostream>
#include <cstdlib>

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

coin = dist(rd);

#define NUM_HORSES 5
#define RACE_LENGTH 15

void advance(int horseNum, int* horses) {
	horses[horseNum] += dist(rd);
}


void printLane(int* horses) {
	for(int horseNum = 0; horseNum < NUM_HORSES; ++horseNum) {
		for (int track = 0; track < RACE_LENGTH; ++track) {
			if (track == horses[horseNum]) {
				std::cout << horseNum;
			} else {
				std::cout << ".";
			}
		}
		std::cout << std::endl;
	}
}

bool isWinner(int* horses){
	for (int horseNum = 0; horseNum < NUM_HORSES; ++horseNum) {
		if (horses[horseNum] >= RACE_LENGTH){
			std::cout << "Horse number " << horseNum << " Wins! " << std::endl;
			return true;
		}
	}
	return false;
}

int main() {
	int horses[NUM_HORSES] = {0};

	while(!isWinner(horses)) {
		for(int horseNum = 0; horseNum < NUM_HORSES; ++horseNum) {
			advance(horseNum, horses);
			printLane(horses);
			std::cout << "Press enter to advance" << std::endl;
			std::cin.get();

			if(isWinner(horses)) {
				return 0;
			}
		}
	}
	return 0;
}