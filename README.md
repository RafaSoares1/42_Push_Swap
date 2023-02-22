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

# Sort with 3 and 5 numbers

To do this 2 options when we have only 3 or 5 numbers is quite simple.

## Sort 3
To do the sort with 3 numbers is quite simple, there are only 5 possible cases as follow:

![image](https://user-images.githubusercontent.com/103336451/220641266-2a37b6fe-dd3b-477b-b0f1-a9b276f59d02.png)

## Sort 5

With 5 numbers the process is simple aswell.

1- Firstly we need to find the Max and Min numbers in our stackA;<br />
2- After that we need to send to stackB only the max and min numbers;<br />
3- At stackA we will have only 3 numbers and we sort them;<br />
4- At this point you will only need to send back the Max and Min numbers back to stackA and you will only need to use the PA and RA instructions.

It will work like this:

![image](https://user-images.githubusercontent.com/103336451/220652637-4d480594-5418-4b05-bd48-448126eba871.png)


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

# Implement Radix in Push_Swap

Back to the example above, if we want a list of instructions to sort 55 -999 651 -20 99 -3 2, is the same as sorting 4 0 6 1 5 2 3.<br />
To implement the radix on this project we will work with binary operators, and with that the array with 4 0 6 1 5 2 3 in the base of 2 will be 100 000 110 001 101 010 011.

Now the goal is to send to stackB the numbers that in the least significant bit have 0.<br />
Then we send everything from StackB to StackA using PA and shift (<<) once to the left so that next time we can check the next bit.<br />
Repeat the process until everything is sorted. Simple as that.

Something like this:

![image](https://user-images.githubusercontent.com/103336451/220665254-eed4155a-a6d2-4ed9-8a72-f2acaa98d2b2.png)

![image](https://user-images.githubusercontent.com/103336451/220666194-1bdca30d-56e9-4513-8910-0171f84085ac.png)

![image](https://user-images.githubusercontent.com/103336451/220666321-e10840bc-0d77-4005-a5cf-f959b4650b76.png)

![image](https://user-images.githubusercontent.com/103336451/220665879-6f494fd9-b539-4369-9a73-cd5468c7602d.png)

### Extra:

**NOTE:** To save movements and in order to reach a higher evaluation grade, what I chose to do is that when I send the numbers that have the number 0 in that bit to stackB, before sending them back to stackA what I do is check if in the next bit that number has 0 or 1 if it has a 0 it continues in stackB so that I'm not sending it to stackA and then send that number back again to stackB in the next process. This way I could save movements and everything works perfectly

# How to test this project

For testing I mainly used the Push_Swap Visualizer and the checker that is provided in the checker.

## Push_Swap Visualizer

Visualizer is a great help so that I can visually see the step by step process that my project performs.

It is possible to download it through this link:<br />
https://github.com/o-reo/push_swap_visualizer

![1 ZLKF3qJ75poRylB9g8wM5w](https://user-images.githubusercontent.com/103336451/220671702-167e5bfa-7d01-4295-99e8-c3d9e181e71a.gif)

## Checker

The checker is provided by the school and shows 2 possible outputs, OK if the program is operational or KO if something is wrong.

Example:

![Screenshot from 2023-02-22 15-37-16](https://user-images.githubusercontent.com/103336451/220674099-a6a1197d-74b3-4a45-a138-2427e60479de.png)

## Final grade

![image](https://user-images.githubusercontent.com/103336451/220674652-02860026-c6e8-41e8-89b1-7c94f2e1d1da.png)
