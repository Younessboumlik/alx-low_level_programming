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
int binary_search(int *array, size_t size, int value){
	int *p = array + size-1,mil,index,*q = array,i;
	if (array == NULL){
		return -1;
	}
		
	
	while(p != array){
	
	  printf("Searching in array:");
	  for(i = array - q;i <= p-q ; i++){
		  if (i == p-q){
			  printf(" %d",*(q+i));
			  break;
		  }
		  printf(" %d,",*(q+i));
	 }
	 printf("\n");
	 
         mil = (p - array)/2;
	 
	 if (*(array+mil)== value){
            index = array + mil - q;
	    return index;
	 }
	 else  if(*(array+mil) < value){
		 array = array +  mil + 1;
		 
	 }
	 else{
		p =  array +  mil -1;
		 
	 }
	}
	 printf("Searching in array: ");
         printf("%d\n",*(array));
	 if(*p == value){
            index = array + mil - q;
	    return index ;
	 }
	 return -1;
}
