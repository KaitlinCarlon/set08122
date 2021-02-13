#include <stdio.h>

int main()
{
	int intergerVariable;
	size_t size; /*size_t is a datatype unsigned integral type*/
				 /*It represents the size of any object in bytes*/
				 /*and returned by the sizeof operator*/	
	
	size = sizeof(intergerVariable);
	/*most common operator in C*/
	/*returns the size of a variable*/
	
	printf("Size of interger Variable is %zu bytes\n" , size);
	
	return 0;
	
	/* this is returning the size of the interger 'intergerVariable' */
	/* integer is 4 bytes*/
}

