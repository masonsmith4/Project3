# Project3
procedural horse race 

include random <br>
include iostream <br>

set randomization(coin flip) (0,1) <br>

number of horses = 5 <br>
race length = 15(when the horse is off the map) <br>

advance function<br>
	random placement (0 or 1)
	horse position will repeat for amount of horses

printLane function<br>
	for horses from 0 to NUM_HORSES( minus 1)
		for track from 0 to RACE_LENGTH(minus 1)
			if the track == horses[horseNum]
				print the horses
			else
				print a . 

		after round space it out

		///// I would like to add I wasn't sure how to break it into rounds, so it all runs as one giant round. I wasn't sure how to fix it really

isWinner function<br>
	for each horseNum from 0 to NUM_HORSES (minus 1)
		if horses[horseNum] >= RACE_LENGTH
			print that the horseNum won
			return true if winner was found
		return false if the winner has not been found

main<br>

	set all horses positions to 0

	while isWinner(horses) == false
		for each horseNum from 0 to NUM_HORSES (minus 1)
			advance horses

		print printLane and display the new round

		print "enter to continue"
		
		user imput

		if isWinner(horses) == true
			end program

end program<br>

