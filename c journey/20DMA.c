int main()
{
int *p; // local variable SMA
p=malloc(8); //DMA

/*
calloc is used to make no of blocks with the memory allocation 
 ## p=calloc(8,4) where 8 is no of blocks and 4 is memory in bytes 
*/


// realloc is used to change or reallocate the memory

double *q;
q=realloc(p,4);

// free(q);  
// ### free is used to release the memory


}