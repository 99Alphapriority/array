#include <stdio.h>
#include "test.h"
#include "array.h"

extern struct_t *arrayt_gp;

void run_tests()
{
	test_append();
	test_insert();
	test_delete();
	test_search();
}
	

void test_append()
{
	printf("\n\ntest_append() started\n");
	append();
	printf("array after appending:\n");
	display_array();
	printf("\ntest_append() finished\n");
}

void test_insert()
{
	int index = 0, element = 0;
	printf("\ntest_insert() started\n");
	printf("Enter an index to insert an element at:\t");
	scanf("%d",&index);
	printf("Enter an element to insert at index %d:\t", index);
	scanf("%d",&element);
	insert(index, element);
	printf("array after inserting %d at index %d:\n",element, index);
	display_array();
	printf("\ntest_insert() finished\n");
}

void test_delete()
{
	int element = 0, idx = 0;
	printf("\ntest_delete() started\n");
	printf("Enter index to delete element from:\t");
	scanf("%d",&idx);
	element = delete_element(idx);
	printf("%d is deleted from index %d\n",element, idx);
	printf("array after deletion:\n");
	display_array();
	printf("\ntest_delete() finished\n");
}

void test_search()
{
	int idx = 0, element = 0;
	printf("\ntest_search() started\n");
	printf("Enter element to search:\t");
	scanf("%d",&element);
	idx = search_element(element);
	if(idx != -1)
		printf("element %d found at index %d\n",element,idx);
	else
		printf("element %d not present in the array\n",element);
	printf("test_search() finished\n");

}
