# Draw-paint-repeat
Brute-force approach to combinatorics problem

#PROBLEM

There is unknown number of white balls in a box. You draw a ball, if it's white then you paint it black and return it to the box. If it's black then the sequence ends. Make an educated guess about the number of balls in the box if 10th drawn ball was black.

#SOLUTION
By running simulation for set sumber of balls in the box we can determine a function of probability for each of the draw being the last. This function is well-estimated by quadratic formula with R > 0,99. We can determine the extremum for these functions and plot extremum vs number of balls in the box. Based on this information we can then make educated guess. 

#ANSWER
I'd say that extremum being in range 9.5-10.5 gives us satisfying answer. That gives us range of 67 to 85 balls. Based on that, my best bet would be that there were initially 76 white balls in the box.
