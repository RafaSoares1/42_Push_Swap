# Push_Swap
This project was completed in February 2023 as part of the 42 cursus. The project takes a list of unique numbers, and returns a series of instuctions on how to sort them, using a second stack as an auxiliary, doing this process in as few movements as possible.


# Solving the problem
One of the challenges was that for this project, complexity was not measure in number of computations within the program, but in number of instructions, which makes the project very unique and challenging. It requires a good understanding of the mechanics of the of the algorithm we put into practice in order to adapt them to the problem.

# Instructions
At the beginning the stack A contains a random amount of negative and/or positive numbers
which cannot be duplicated and the stack B is empty.<br />
The goal is to sort in ascending order numbers into stack a. To do so you have the
following operations at your disposal:

![Screenshot 2023-02-22 at 11-52-21 anaiel_push_swap 42 project push_swap](https://user-images.githubusercontent.com/103336451/220613061-034bfcc4-0da5-432b-94b1-43cf12ee8506.png)

# My algorithm
I used a version of the radix algorithm in this project.
## How does radix works
Radix sort is an efficient algorithm to sort non-negative integers, it's like dark magic 😵‍💫.<br />
Let's take the following example:

![maxresdefault](https://user-images.githubusercontent.com/103336451/220614039-ce7e2fd5-5e6f-4195-b547-f57647dd5660.jpg)

- Start from the least significant digit (which is the digit in 1’s place),we put the numbers in ascending order (first we look for number 0, then 1, then 2 ...) and they are put in the order they are found in the original list. <br />
- As we can see, the numbers are sorted according to the digit in 1’s place. For those with the same digit in 1’s place, they’re sorted according to their order in the original list. <br />
- We repeat this process for the digit in 10’s place. <br />
- At this moment, the numbers are sorted according to the digit in 10’s place, then the digit in 1’s place.<br />
- Same things for the digit in 100’s place. (This is will be the last time since the largest number in the list is 781, which has only 3 digits.)
- Now, the numbers are all sorted, as I said before, this algorithm it's true dark magic.<br />

**At this point we need some adaptation to be able to use this on our push_swap. First, we must simplify the numbers.**
## Simplify numbers (Indexing)
As mentioned before, this algorithm is for non-negative integers. However, we’ll have negative numbers in this project, so we should simplify the numbers before we start.<br />

For example we have the following array of intengers:

![image](https://user-images.githubusercontent.com/103336451/220619884-92f692f8-50d4-4f29-aaf0-264c77d75511.png)

Once we know the numbers in our array, the first step is to create a temporary array and arrange our original array in ascending order, like this:

![image](https://user-images.githubusercontent.com/103336451/220620389-8bfab7b2-0c6e-4923-aed9-3b6c4de55d56.png)

At this point we will have something like this:

![image](https://user-images.githubusercontent.com/103336451/220622260-bd11fe62-2d3a-4b23-8e5f-2fea7cb5e27d.png)

Our goal is to perform some operations to replace the original array of int's (that have some negative numbers) with 0, 1, 2, … like this:

![image](https://user-images.githubusercontent.com/103336451/220623669-d66b500a-261e-48c4-ba88-d2b89f102497.png)

The operations to make -3 -6 10 4 -2 sorted can also make 1 0 4 3 2 sorted and vice versa.

So, instead of sorting -3 -6 10 4 -2, now we only need to sort 1 0 4 3 2.

In code it will look something like this:

![image](https://user-images.githubusercontent.com/103336451/220624886-833a56c4-b78e-4ae0-ab0c-09dcabc50046.png)

# Apply Radix in Push_Swap

