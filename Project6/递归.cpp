//µÝ¹éº¯Êý 
int Factorial(int n)
{
	if (n < 2)
		return 1;
	else
		return n * Factorial(n - 1);
}
int Fib(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
