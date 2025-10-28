#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * for multiples of three print Fizz
 * for the multiples of five print Bizz
 * for numbers which are multiples of both three and five print FizzBizz
 *
 * Return: Always 0 (Success)
 */

int main()
{
  for ( int i = 1; i <= 100; i++ )
  {
    if(i%3 == 0 && i%5 == 0)
    {
      printf("FizzBizz ");
    }
	else if(i%3 == 0)
	{
	  printf("Fizz ");
	}
	else if(i%5 == 0)
	{
	  printf("Bizz ");
	}
	else
	{
	  printf("%d ", i);
	}
  }
  printf("\n");
  return 0;
}
