#include <cstdio>
#include <cstdlib>

FILE* f = fopen("out.data", "w");

void hanoi(int n, char * start, char * temp, char * target)
{
	//base case
	if (n>1)
	{
		hanoi(n-1, start, target, temp);
	}
	std::fprintf(f, "Move disk %d from %s to %s.\n",n, start, target); 
	if (n>1)
	{
		hanoi(n-1,temp, start, target);
	}
	
}

int main(int argc, char ** argv)
{
	if (argc > 2 || argc < 2)
	{
		std::printf("usage: hanoi <# of levels>\n");
		exit(1);
	}
	int n = std::atoi(argv[1]);
	char a[] = "left";
	char b[] = "middle";
	char c[] = "right";
	hanoi(n, a, b, c);
}

/******************************
 * HOW  TO RUN: 
 * c++ hanoi.cpp
 * ./a.out (# of things) EX: ./a.out 9
 * Done
******************************/
