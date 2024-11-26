#include <stdio.h>
#include <limits.h>
int main()
{
printf("%#5.x, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#5.0x, %#5.0x, %#5.0x, %#5.0x, %#5.0x, %#5.0x, %#5.0x, %#5.0x, %#5.0x, %#5.0x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#5.1x, %#5.1x, %#5.1x, %#5.1x, %#5.1x, %#5.1x, %#5.1x, %#5.1x, %#5.1x, %#5.1x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#10.x, %#10.x, %#10.x, %#10.x, %#10.x, %#10.x, %#10.x, %#10.x, %#10.x, %#10.x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#10.0x, %#10.0x, %#10.0x, %#10.0x, %#10.0x, %#10.0x, %#10.0x, %#10.0x, %#10.0x, %#10.0x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#10.1x, %#10.1x, %#10.1x, %#10.1x, %#10.1x, %#10.1x, %#10.1x, %#10.1x, %#10.1x, %#10.1x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#10.5x, %#10.5x, %#10.5x, %#10.5x, %#10.5x, %#10.5x, %#10.5x, %#10.5x, %#10.5x, %#10.5x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#100.x, %#100.x, %#100.x, %#100.x, %#100.x, %#100.x, %#100.x, %#100.x, %#100.x, %#100.x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#100.0x, %#100.0x, %#100.0x, %#100.0x, %#100.0x, %#100.0x, %#100.0x, %#100.0x, %#100.0x, %#100.0x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#100.1x, %#100.1x, %#100.1x, %#100.1x, %#100.1x, %#100.1x, %#100.1x, %#100.1x, %#100.1x, %#100.1x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#100.5x, %#100.5x, %#100.5x, %#100.5x, %#100.5x, %#100.5x, %#100.5x, %#100.5x, %#100.5x, %#100.5x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#5.x, %0#5.x, %0#5.x, %0#5.x, %0#5.x, %0#5.x, %0#5.x, %0#5.x, %0#5.x, %0#5.x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#5.0x, %0#5.0x, %0#5.0x, %0#5.0x, %0#5.0x, %0#5.0x, %0#5.0x, %0#5.0x, %0#5.0x, %0#5.0x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#5.1x, %0#5.1x, %0#5.1x, %0#5.1x, %0#5.1x, %0#5.1x, %0#5.1x, %0#5.1x, %0#5.1x, %0#5.1x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#10.x, %0#10.x, %0#10.x, %0#10.x, %0#10.x, %0#10.x, %0#10.x, %0#10.x, %0#10.x, %0#10.x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#10.0x, %0#10.0x, %0#10.0x, %0#10.0x, %0#10.0x, %0#10.0x, %0#10.0x, %0#10.0x, %0#10.0x, %0#10.0x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#10.1x, %0#10.1x, %0#10.1x, %0#10.1x, %0#10.1x, %0#10.1x, %0#10.1x, %0#10.1x, %0#10.1x, %0#10.1x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#10.5x, %0#10.5x, %0#10.5x, %0#10.5x, %0#10.5x, %0#10.5x, %0#10.5x, %0#10.5x, %0#10.5x, %0#10.5x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#100.x, %0#100.x, %0#100.x, %0#100.x, %0#100.x, %0#100.x, %0#100.x, %0#100.x, %0#100.x, %0#100.x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#5X, %#5X, %#5X, %#5X, %#5X, %#5X, %#5X, %#5X, %#5X, %#5X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#10X, %#10X, %#10X, %#10X, %#10X, %#10X, %#10X, %#10X, %#10X, %#10X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#100X, %#100X, %#100X, %#100X, %#100X, %#100X, %#100X, %#100X, %#100X, %#100X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#5.X, %#5.X, %#5.X, %#5.X, %#5.X, %#5.X, %#5.X, %#5.X, %#5.X, %#5.X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#5.0X, %#5.0X, %#5.0X, %#5.0X, %#5.0X, %#5.0X, %#5.0X, %#5.0X, %#5.0X, %#5.0X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#5.1X, %#5.1X, %#5.1X, %#5.1X, %#5.1X, %#5.1X, %#5.1X, %#5.1X, %#5.1X, %#5.1X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#10.X, %#10.X, %#10.X, %#10.X, %#10.X, %#10.X, %#10.X, %#10.X, %#10.X, %#10.X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#10.0X, %#10.0X, %#10.0X, %#10.0X, %#10.0X, %#10.0X, %#10.0X, %#10.0X, %#10.0X, %#10.0X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#10.1X, %#10.1X, %#10.1X, %#10.1X, %#10.1X, %#10.1X, %#10.1X, %#10.1X, %#10.1X, %#10.1X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#10.5X, %#10.5X, %#10.5X, %#10.5X, %#10.5X, %#10.5X, %#10.5X, %#10.5X, %#10.5X, %#10.5X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#100.X, %#100.X, %#100.X, %#100.X, %#100.X, %#100.X, %#100.X, %#100.X, %#100.X, %#100.X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#100.0X, %#100.0X, %#100.0X, %#100.0X, %#100.0X, %#100.0X, %#100.0X, %#100.0X, %#100.0X, %#100.0X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#100.1X, %#100.1X, %#100.1X, %#100.1X, %#100.1X, %#100.1X, %#100.1X, %#100.1X, %#100.1X, %#100.1X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#100.5X, %#100.5X, %#100.5X, %#100.5X, %#100.5X, %#100.5X, %#100.5X, %#100.5X, %#100.5X, %#100.5X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#5.X, %0#5.X, %0#5.X, %0#5.X, %0#5.X, %0#5.X, %0#5.X, %0#5.X, %0#5.X, %0#5.X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#5.0X, %0#5.0X, %0#5.0X, %0#5.0X, %0#5.0X, %0#5.0X, %0#5.0X, %0#5.0X, %0#5.0X, %0#5.0X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#5.1X, %0#5.1X, %0#5.1X, %0#5.1X, %0#5.1X, %0#5.1X, %0#5.1X, %0#5.1X, %0#5.1X, %0#5.1X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#10.X, %0#10.X, %0#10.X, %0#10.X, %0#10.X, %0#10.X, %0#10.X, %0#10.X, %0#10.X, %0#10.X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#10.1X, %0#10.1X, %0#10.1X, %0#10.1X, %0#10.1X, %0#10.1X, %0#10.1X, %0#10.1X, %0#10.1X, %0#10.1X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#10.5X, %0#10.5X, %0#10.5X, %0#10.5X, %0#10.5X, %0#10.5X, %0#10.5X, %0#10.5X, %0#10.5X, %0#10.5X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
 printf("%0#100.X, %0#100.X, %0#100.X, %0#100.X, %0#100.X, %0#100.X, %0#100.X, %0#100.X, %0#100.X, %0#100.X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory

}