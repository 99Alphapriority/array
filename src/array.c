#include <stdio.h>
#include <stdlib.h>
#include "array.h"

struct_t *arrayt_gp;
int last_element_idx = 0;

void create_array(int size_in, int length_in)
{
	arrayt_gp = (struct_t*)malloc(sizeof(struct_t));
	arrayt_gp->arr = (int*)malloc(sizeof(int)*size_in);
	arrayt_gp->size = size_in;
	arrayt_gp->length = length_in;
	last_element_idx = 0;

	for(int idx = 0; idx<length_in; idx++)
		append();
}

void append()
{
	int element = 0;
	printf("Enter an element to add to the array:\t");
	scanf("%d",&element);
	arrayt_gp->arr[last_element_idx] = element;
	last_element_idx++;
	arrayt_gp->length = last_element_idx;
}

void insert(int index, int element)
{
	arrayt_gp->arr[index] = element;
	if(index == last_element_idx)
		last_element_idx++;
	arrayt_gp->length = last_element_idx;
}

void display_array()
{
	for(int idx = 0; idx <last_element_idx; idx++)
		printf("%d\t", arrayt_gp->arr[idx]);
}

int delete_element(int idx)
{
	int element = arrayt_gp->arr[idx];
	
	for(idx; idx<last_element_idx-1; idx++)
		arrayt_gp->arr[idx] = arrayt_gp->arr[idx+1];
	last_element_idx--;
	arrayt_gp->length = last_element_idx;
	return element;
}

int search_element(int element)
{
	int idx = 0;
	for(idx; idx < last_element_idx; idx++)
	{
		if(arrayt_gp->arr[idx] == element)
			return idx;
	}
	return -1;
}

int get(int idx)
{
	if(idx >= last_element_idx)
		return -1;
	else
		return arrayt_gp->arr[idx];
}

void set(int idx, int value)
{
	arrayt_gp->arr[idx] = value;
	if(idx == last_element_idx)
		last_element_idx++;
	else if(idx > last_element_idx)
		last_element_idx = idx + 1;
}
