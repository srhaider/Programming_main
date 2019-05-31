#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

_Bool try_alloc(size_t Val)
{
    void *p = malloc(Val);
    free(p);
    return !!p;
}
int main()
{

    printf("SIZE_MAX=%zu\n ", SIZE_MAX);
    size_t it=0;
    size_t count=SIZE_MAX, step, first=0;
    while (count > 0) {
            it = first;
            step = count / 2;
            it += step;
            if (try_alloc(it)) {
                first = ++it;
                count -= step + 1;
            }
            else
                count = step;
    }
    printf("%zu\n", first); //found upper bound
    void *p; p= malloc(first-1); printf("test_alloc=%p\n", p); free(p);
}
