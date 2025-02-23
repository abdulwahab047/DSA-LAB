. Factorial Calculation:
Concept: The factorial of a number n is the product of all positive integers less than or equal to n. In this recursive approach, the function calls itself with a smaller input, continuing until it reaches the base case (i.e., n = 0). This demonstrates the concept of reducing a problem by a smaller step each time.
2. Reversing Input:
Concept: This example demonstrates how recursion can be used to reverse a string or sequence of characters. The function reads a character, recursively processes the remaining input, and then prints the characters in reverse order, showing how recursion can handle input sequences efficiently.
3. Power Function:
Concept: This recursive function computes the power of a number x raised to the exponent n. The base case (n == 0) returns 1 since any number raised to the power of 0 is 1. The recursive step multiplies the base by the result of the smaller exponent (n - 1), showing how recursion can break down repetitive operations.
4. Ackermann Function:
Concept: The Ackermann function is a famous example of a highly recursive function with deep and complex recursive calls. It is a two-parameter function that demonstrates the power of recursion with multiple cases that call the function recursively within itself. This function’s growth rate is extremely fast, making it a challenging example to execute for larger values of m and n.
5. Binomial Coefficient (n choose k):
Concept: The binomial coefficient C(n, k) calculates the number of ways to choose k items from n items. The recursive formula C(n, k) = C(n-1, k-1) + C(n-1, k) is used here. This example demonstrates how recursion can be used in combinatorics and how a problem can be broken down into smaller subproblems.
6. Prime Number Check:
Concept: This recursive function checks if a number is prime by attempting to divide it by all integers from 2 to sqrt(n). If the number is divisible by any integer within this range, it is not prime. This function shows how recursion can be used to iterate through potential divisors and efficiently determine primality.
7. Printing Numbers in Reverse:
Concept: This program demonstrates how recursion can be used to print numbers from n down to 1 in reverse order. The function first prints the current number, then recursively calls itself with the next smaller number, providing an example of how recursion can manage sequences and loops.
