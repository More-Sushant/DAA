# DAA
Codes done for the subject DAA will be updated in this repository. 


Course Objectives:
1. To study and implement application of divide and conquer algorithmic strategy
2. To study and implement application of greedy approach
3. To study and implement application of dynamic programming strategy
4. To study and implement application of backtracking approach
5. To identify and apply the suitable algorithmic strategy for the given problem.

LIST OF EXPERIMENTS:

A:

1. Implement a problem of the number of zeroes.
Statement: Given an array of 1s and 0s with all 1s first followed by all 0s? Find the number of 0s. Count the number of zeroes in the given array.
Input: arr[] = {1, 1, 1, 1, 0, 0} Output: 2
Input: arr[] = {1, 0, 0, 0, 0} Output: 4

2. Implement a problem of moving all zeroes to the end of
array.
Statement: Given an array of random numbers, Push all the zeros of a given array to the end of the array. For example, if the given arrays is {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed to {1, 9, 8, 4, 2, 7, 6, 0, 0, 0, 0}. The order of all other elements should be the same.
Input: arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
Output: arr[] = {1, 2, 4, 3, 5, 0, 0, 0};

3. Implement a problem of the smallest number with at least n trailing zeroes in factorial.
Statement: Given a number n. The task is to find the smallest number whose factorial contains at least n trailing zeroes.
Input: n = 1 Output: 5
Input: n = 6 Output: 25


B:

1. Implement a problem of activity selection problem
with K persons.
Statement: Given two arrays S[] and E[] of size N denoting the starting and closing time of the shops and an integer value K denoting the number of people, the task is to find out the maximum number of shops they can visit in total if they visit each shop optimally based on the following conditions:
 Only one person can visit a shop
 A person cannot visit another shop if its timing collides with it
Input: S[] = {1, 8, 3, 2, 6}, E[] = {5, 10, 6, 5, 9}, K = 2
Output: 4
Input: S[] = {1, 2, 3}, E[] = {3, 4, 5}, K = 2
Output: 3

2. Implement a problem of maximizing Profit by trading stocks based on the given rate per day.
Statement: Given an array arr[] of N positive integers which denotes the cost of selling and buying a stock on each of the N days. The task is to find the maximum profit that can be earned by buying a stock on or selling all previously bought stocks on a particular day.
Input: arr[] = {2, 3, 5} Output: 5
Input: arr[] = {8, 5, 1} Output: 0

3. Implement a problem of minimum work to be done per day to finish given tasks within D days problem.
Statement: Given an array task[] of size N denoting the amount of work to be done for each task, the problem is to find the minimum amount of work to be done on each day so that all the tasks can be completed in at
most D days. Note: On one day work can be done for only one task.
Input: task[] = [3, 4, 7, 15], D = 10
Output: 4
Input: task[] = [30, 20, 22, 4, 21], D = 6
Output: 22


C:

1. Implement Coin Change problem.
Statement Given an integer array of coins[ ] of size N representing different types of currency and an integer sum, The task is to find the number of ways to make sum by using different combinations from coins[].
Note: Assume that you have an infinite supply of each type of coin.
Input: sum = 4, coins[] = {1,2,3}, Output: 4
Input: sum = 10, coins[] = {2, 5, 3, 6} Output: 5

2. Implement Subset Sum Problem.
Statement Given a set of non-negative integers and a value sum, the task is to check if there is a subset of the given set whose sum is equal to the given sum.
Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 9
Output: True
Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 30
Output: False

3. Implement Check if it is possible to transform one string to another.
Statement Given two strings s1 and s2 (all letters in uppercase). Check if it is possible to convert s1 to s2 by performing the following operations.
1. Make some lowercase letters uppercase.
2. Delete all the lowercase letters.
Input: s1 = daBcd s2 = ABC Output: yes
Input: s1 = argaju s2 = RAJ Output: yes


D:

1. Implement a program to find all distinct subsets of a given set using the Bit Masking Approach.
Statement Given an array of integers arr[], The task is to find all its subsets. The subset cannot contain duplicate elements, so any repeated subset should be considered only once in the output.
Input: S = {1, 2, 2} Output: {}, {1}, {2}, {1, 2}, {2,
2}, {1, 2,2}
Input: S = {1, 2} Output: {}, {1}, {2}, {1, 2}

2. Implement program Count all possible Paths between two Vertices.
Statement Count the total number of ways or paths that exist between two vertices in a directed graph. These paths don’t contain a cycle, the simple enough reason is that a cycle contains an infinite number of
paths and hence they create a problem.

![image](https://github.com/user-attachments/assets/177444f1-22e7-4617-9006-ffe6e3bcb6b4)

Input: Count paths between A and E
Output: Total paths between A and E are 4
Input: Count paths between A and C
Output: Total paths between A and C are 2

3. Implement a program to print all subsets of a given Set or Array
Statement Given a set of positive integers, find all its subsets.
Input: array = {1, 2, 3}
Output: //This space denotes a null element.
 1 1 2 1 2 3 1 3 2
2 3 3
Input: 1 2
Output: 1 2 1 2

E:
Mini Project:-Implement CA assignment assigned in the group as a CO301 (DAA theory subject) and store in source code in git repository.
