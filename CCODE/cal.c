#include "main.h"

/**
  * cal - Entry point of program
  *
  * argv: argument vector
  * argc: argument count
  *
  * Return: always 0 for success
  */

int main(int argc, char **argv[])
{
	char total;
	
	total = *argv[1] + *argv[2];
	printf("%d\n", total);

	return(0);
}
