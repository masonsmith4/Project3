#include <random>
#include <iostream>
#include <cstdlib>

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

coin = dist(rd);

#define NUM_HORSES 5
#define RACE_LENGTH 15

/////// I ended up just writing advance in int main practically
}

// print the text lane
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

	while(!finish) {
		for (int y = 0; y < NUM_HORSES; ++y) {
			horses[y] += dist(rd);
		}


		printLane(horses);

		finish = isWinner(horses);

		if(!finish) {
			std::cout << "Press enter to continue" << std::endl;
			std::cin.get();
		}
	}
	return 0;
}
