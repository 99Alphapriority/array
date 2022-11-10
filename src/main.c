#include <stdio.h>
#include "array.h"
#include "test.h"

int main()
{
	int size = 0, length = 0;
	printf("Enter size of array:\t");
	scanf("%d",&size);
	printf("Enter number of elemnets you want to create the array with:\t");
	scanf("%d",&length);
	create_array(size, length);
	printf("\nOperations will be performed on the following array:\n");
	display_array();
	run_tests();
	return 0;
}
