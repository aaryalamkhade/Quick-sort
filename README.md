 # Quick-sort
Cpp code for quick sort.
It uses divide and conqure method.
I used a recursion method to solve this.
# Algorithm
we will declare the 3 variables<br>
Note that pivote is an array element but low and high are the array index<br>
1st Element i.e at index 0 will be the pivote element<br>
Index 1 will low position<br>
Index of last element will be the high position<br>
At 1st we will check that ele at low position is lower than the pivote ele and if yes then we will increment low until low position element become greater than pivote<br>
Then 2 nd while loop will check that element present at high position is greater than pivote and if yes then it will decrement high posiotion until high posotioned ele become lesser than pivote <br>
Now we will swap high and low elements if low index value is lesser than higher index value<br>
If low index value greater than high index value then we will swap pivote element and high element<br>
Pivote element will go to its correct position<br>
```
INPUT
Enter the no of ele:5
Enter the array ele:2 6 3 9 1
OUTPUT
Sorted array :12369
```
