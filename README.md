# Data-Structure-HW3
You are asked to write a program which can

read a natual number n, a lower bound a_min, an upper bound a_max, and up
pirntout a sequence of n random integer numbers (i.e. A[0], A[1],..., A[n-1]) uniformly distributed in the range [a_min, a_max]
write a function duplicate_array(A,B,m,n) to copy the entire mxn array A to another mxn array B. (e.g. here in this assignment we assume an one-dimensional 1xn array, thus m=1. This function will be used again for some future assignments, so I suggest you to implement an mxn version rather than a 1xn version.
write a function printout_arrary(A,m,n) to printout the entire mxn array A (m=1 in this assignment. however, this function will be used again for some future assignments, so I suggest you to implement an mxn version rather than a 1xn version.)
= all the above are the same as the 2nd coding assignment (i.e. homework 3) =

write a function heap_sort(A,n) which sorts these n integers by heap sort
printout the sorted array A by printout_array(A,1,n). (!Note!, DO NOT invoke printout_array(A,1,n) inside function heap_sort(A,n). You HAVE TO invoke printout_array(A,1,n) in the main function)
write a function quick_sort(B,1,n) which sorts these n integers by quick sort
sort these n integers by the quick sort, printout the sorted sequence
Screen Input: n, a_min, a_max
Screen Output:

first output the sorted sequence by heap sort in one line, then output the sorted sequence by quick sort in one line

example: suppose your code is named as sort1, then when you execute sort1, you should see:

Please input [n, a_min, a_max]: (then you input, say, 5 10 100, press enter)

then you should see 5 numbers generated on the screen, say,

11 22 55 18 53

then you should see the sorted results which look like

By heap sort:
11 18 22 53 55
By quick sort:
11 18 22 53 55
