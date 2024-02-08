#include <stdio.h>
#include <math.h>
int jump_search(int *array, size_t size, int value){
	int m = sqrt(size),i=0,a = size, b ;
	if (array == NULL){
		return -1;
	}
       while(*(array + i) < value && i<a ){
	       printf("Value checked array[%d] = [%d]\n",i,*(array + i));
	      b = i;
	      i = i + m;
       }
       printf("Value found between indexes [%d] and [%d]\n",b,i);
       for(;b<= i && b < a; b++){
	        printf("Value checked array[%d] = [%d]\n",b,*(array + b));
	       if(*(array + b) == value){
		      
		       return b;

	       }
       }
	       return -1;

	 }

