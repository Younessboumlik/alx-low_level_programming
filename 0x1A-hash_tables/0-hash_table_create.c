#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p;
	p = malloc(sizeof(hash_table_t));
	if (p == NULL){
		return NULL;
	}
	p->size = size;
	p->array = malloc(size*sizeof(hash_node_t *));
	
	return (p);
}
