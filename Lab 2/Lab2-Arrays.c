#include <stdio.h>

int main()
{
	int marks[3] = {81,67,75};
	
	printf("Displaying intergers: ");
	
	//printing elements of an array 
	for(int i=0; i<3; ++i)
	{
		printf("%d\n", marks[i]);
	}
	return 0;
}

