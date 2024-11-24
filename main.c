#include "ft_printf.h"
#include <stdio.h>
int main()
{
    setvbuf(stdout, NULL, _IONBF, 0);
    printf("%x",255);
}