Observation #1:
A bulb is ON if it is toggled odd times: (ON), (ON -> OFF -> ON), (ON -> OFF -> ON -> OFF -> ON) ...
A bulb is OFF if it is toggled even times: (ON -> OFF), (ON -> OFF -> ON -> OFF ) ...
​
Observation #2:
Once we reach and toggle the i-th bulb, it will never be touched anymore.
​
for exmaple, let n = 5 ( changes in each round denoted as bold ), initial state is all OFF:
1-th round : ON, ON, ON, ON, ON
2-nd round: ON, OFF, ON, OFF, ON
3-rd round : ON, OFF, OFF, OFF, ON
4-th round : ON, OFF, OFF, ON, ON
5-th round : ON, OFF, OFF, ON, OFF
​
You can see that, after each round, all bulbs before that round will not be touched anymore.
​
So, given a bulb at position X, how do I know it will be toggled EVEN/ODD times ?
Answer: We can find the number of divisors of X.
​
for example, if the position of a bulb is 3, its divisor is [1,3], that mean we will toggle the 3-rd bulb at 1-st round and 3-rd round:
Combine the observation above,
at 3-rd round, the third bulb will have been toggeld even times ( [1,3] ), so it is OFF. And it will not be changed later on round.
at 5-th round, the fifth bulb will have been toggled even times ( [1,5] ), so it is OFF. And it will not be changed later on round.
​