#include "hash_tables.h"
#include <string.h>
char *hash_table_get(const hash_table_t *ht, const char *key)
{
         int c =  hash_djb2((const unsigned char *)key) % ht->size ;
	 hash_node_t *p = ht->array[c];
	 while(p != NULL){
		 if(strcmp(p->key,key)==0)
		 {
			 return p->value;
		 }
		 p = p->next;
	 }
	 return NULL;
}
