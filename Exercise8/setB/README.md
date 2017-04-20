#### Que 1
Write a recursive function to calculate the nth Fibonacci number. Use this function in main to display the first n Fibonacci numbers. The recursive definition of nth Fibonacci number is as follows:
	fib(n) = 1			 if n = 1 or 2
               = fib(n - 2) + fib(n - 1) if n > 2

#### Que 2
Write a recursive function to calculate the sum of digits of a number till you get a single digit number. Example: 961 -> 16 -> 5. (Note: Do not use a loop)

#### Que 3
Write a recursive C function to print the digits of a number in reverse order. Use this function in main to accept a number and print the digits in reverse order separated by tab.

Example 3456
6	5	4	3

Hint: Recursiveprint(n) = print n if n is single digit number
	= print n % 10 + tab + Recursiveprint(n / 10)
