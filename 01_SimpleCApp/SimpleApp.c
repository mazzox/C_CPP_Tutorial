#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t x = 5;

    int32_t y = x * x + 5 * x + 5;
    

    printf("f(%i) = %i", x, y);
    
}
