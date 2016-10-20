#include <stdio.h>
#include "heapify.c"

int main(int argc, char **argv) {

    int i[5];

    i[0] = 4/3;
    i[1] = 5/3;
    printf("%d %d\n",i[0],i[1]);
    printf("------\n");

    int a[16] = { 4, 3, 5, 1, 4, 10, 123, 3, 47, 11, 432,1,54,85,99};
    heap_str *h;
    h = heap_build(a, 15);
    free(h);
    printf("array print\n");
    heap_print_array(h);

    h = heap_sort(a,16);
    printf("sorted array print\n");
    h->sizeOfHeap = 16;
    heap_print_array(h);
    free(h);

    return 0;
}


