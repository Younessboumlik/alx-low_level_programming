#include "hash_tables.h"
#include <stdio.h>
#include <stdbool.h>
void hash_table_print(const hash_table_t *ht)
	
{ 
	bool check;
	hash_node_t **p;
        unsigned long int i ;	
	check = false;
	if (ht != NULL)
	{
		printf("{");
		for(i =0 ;i < ht->size;i++)
		{
			p = ht->array + i;
			while(*p != NULL)
			{
			 
			  if (check == true)
			  {
				  printf(", ");
			  }
                         printf("'%s': '%s'",(*p)->key,(*p)->value);
			 check = true ;
			 p = &((*p)->next);

			}
		}
		printf("}\n");
	}
}
