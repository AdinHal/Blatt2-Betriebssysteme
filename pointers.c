#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
    //Assigning values, int* b is a pointer variable, and with NULL, it means that the Pointer is not on any variable
    int  a = 4;
    int* b = NULL;

    
    printf("\n0: a=%d &a=%p *(&a)=%d", a, &a, *(&a));
    printf("\n0: b=%p &b=%p\n", b, &b);

    int* c = b = (int*) malloc(sizeof(int) * 4);
    *b         = 10;

    printf("\n1: b=%p *b=%d &b=%p", b, *b, &b);
    printf("\n1: c=%p *c=%d &c=%p\n", c, *c, &c);

    b[2] = 20;
    b++;
    *(b + 2) = 30;
    *(b--)   = 40;

    for (int i = 0, *pi = c; i < 4; ++i, ++pi)
    {
        printf("\n2: b[%ld]=%d (addr=%p)", pi - c, *pi, pi);
    }
    printf("\n");

    free(b);
    b = &a;
    /*The free command is in the wrong place . This function allows us to release or deallocate the memory blocks.
    free(b);
    It should be moved above the b=&a; line, after that the programm runs smooth.
    */

    printf("\n3: a=%d &a=%p *(&a)=%d", a, &a, *(&a));
    printf("\n3: b=%p *b=%d &b=%p\n", b, *b, &b);

    printf("\n4: size(int)=%zu, size(int*)=%zu\n", sizeof(*b), sizeof(b));

    return EXIT_SUCCESS;
}
