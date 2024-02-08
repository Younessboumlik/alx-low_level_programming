#include <stdio.h>
#include <stddef.h>
/**
 * linear_search - find value in an array using linear search method
 * @array: pointer to first element in array to be searched
 * @size: size of the array (number of elements)
 * @value: value to searched for
 *
 * Return: 1st index where value is located or -1 if not found or array is null
 */
int linear_search(int *array, size_t size, int value){
size_t i ;
int ret ,j;
if (array == NULL){
return -1;
}
for(i = 0;i<size;i++){
j = i;
printf("Value checked array[%d] = [%d]\n",j,*(array+i));
if (*(array + i) == value){
ret = i;
return ret;
}
}
return -1;
}
