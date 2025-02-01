#include <random>
std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

coin = dist(rd);

#define NUM_HORSES 5
#define RACE_LENGTH 15

void advance(int horseNum, int* horses);

void printLane(int horseNum int* horses); {
	for (int x = 0; x < RACE_LENGTH; ++x) {
		if (x == horses[horseNum]) {
			std::cout << "H";
		} else {
			std::cout << ".";
		}
	}
	std::cout << std<<endl;
}

bool isWinner(int horseNum, int* horses){
	bool result = false;
	if (horses[horseNum] >= RACE_LENGTH){
		std::cout << "Betting Horse " << horseNum << " Wins! " << std::end1;
		result = true;
	}
	return result;
}

int main()
