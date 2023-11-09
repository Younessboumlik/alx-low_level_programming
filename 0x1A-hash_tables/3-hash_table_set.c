#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	const unsigned char *key1 = (const unsigned char *)strdup(key);
	   int c =  hash_djb2(key1) % ht->size ;
	  hash_node_t *q = malloc(sizeof(hash_node_t));
	  if (key == NULL)
	  {
		  return 0;
	  }
	  q-> key = strdup(key);
	  q->value = strdup(value);
	
	q->next = ht->array[c];
	ht->array[c] = q;
	return 1 ;
	
}
