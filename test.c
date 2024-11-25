#include <stdio.h>
#include <limits.h>
int main()
{
    printf("% 5d, % 5d, % 5d, % 5d, % 5d, % 5d, % 5d, % 5d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 69, but expected: 66
printf("% 5d, % 5d, % 5d, % 5d, % 5d, % 5d, % 5d, % 5d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 10d, % 10d, % 10d, % 10d, % 10d, % 10d, % 10d, % 10d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 99, but expected: 96
printf("% 10d, % 10d, % 10d, % 10d, % 10d, % 10d, % 10d, % 10d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 100d, % 100d, % 100d, % 100d, % 100d, % 100d, % 100d, % 100d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 818, but expected: 814
printf("% 100d, % 100d, % 100d, % 100d, % 100d, % 100d, % 100d, % 100d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 5.d, % 5.d, % 5.d, % 5.d, % 5.d, % 5.d, % 5.d, % 5.d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 68, but expected: 66
printf("% 5.d, % 5.d, % 5.d, % 5.d, % 5.d, % 5.d, % 5.d, % 5.d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 5.0d, % 5.0d, % 5.0d, % 5.0d, % 5.0d, % 5.0d, % 5.0d, % 5.0d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 68, but expected: 66
printf("% 5.0d, % 5.0d, % 5.0d, % 5.0d, % 5.0d, % 5.0d, % 5.0d, % 5.0d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 5.1d, % 5.1d, % 5.1d, % 5.1d, % 5.1d, % 5.1d, % 5.1d, % 5.1d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 67, but expected: 66
printf("% 5.1d, % 5.1d, % 5.1d, % 5.1d, % 5.1d, % 5.1d, % 5.1d, % 5.1d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 10.d, % 10.d, % 10.d, % 10.d, % 10.d, % 10.d, % 10.d, % 10.d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 98, but expected: 96
printf("% 10.d, % 10.d, % 10.d, % 10.d, % 10.d, % 10.d, % 10.d, % 10.d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 10.0d, % 10.0d, % 10.0d, % 10.0d, % 10.0d, % 10.0d, % 10.0d, % 10.0d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 98, but expected: 96
printf("% 10.0d, % 10.0d, % 10.0d, % 10.0d, % 10.0d, % 10.0d, % 10.0d, % 10.0d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 10.1d, % 10.1d, % 10.1d, % 10.1d, % 10.1d, % 10.1d, % 10.1d, % 10.1d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 97, but expected: 96
printf("% 10.1d, % 10.1d, % 10.1d, % 10.1d, % 10.1d, % 10.1d, % 10.1d, % 10.1d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 100.d, % 100.d, % 100.d, % 100.d, % 100.d, % 100.d, % 100.d, % 100.d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 817, but expected: 814
printf("% 100.d, % 100.d, % 100.d, % 100.d, % 100.d, % 100.d, % 100.d, % 100.d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 100.0d, % 100.0d, % 100.0d, % 100.0d, % 100.0d, % 100.0d, % 100.0d, % 100.0d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 817, but expected: 814
printf("% 100.0d, % 100.0d, % 100.0d, % 100.0d, % 100.0d, % 100.0d, % 100.0d, % 100.0d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 100.1d, % 100.1d, % 100.1d, % 100.1d, % 100.1d, % 100.1d, % 100.1d, % 100.1d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 816, but expected: 814
printf("% 100.1d, % 100.1d, % 100.1d, % 100.1d, % 100.1d, % 100.1d, % 100.1d, % 100.1d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 100.5d, % 100.5d, % 100.5d, % 100.5d, % 100.5d, % 100.5d, % 100.5d, % 100.5d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 815, but expected: 814
printf("% 100.5d, % 100.5d, % 100.5d, % 100.5d, % 100.5d, % 100.5d, % 100.5d, % 100.5d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 5.d, %0 5.d, %0 5.d, %0 5.d, %0 5.d, %0 5.d, %0 5.d, %0 5.d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 68, but expected: 66
printf("%0 5.d, %0 5.d, %0 5.d, %0 5.d, %0 5.d, %0 5.d, %0 5.d, %0 5.d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 5.0d, %0 5.0d, %0 5.0d, %0 5.0d, %0 5.0d, %0 5.0d, %0 5.0d, %0 5.0d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 68, but expected: 66
printf("%0 5.0d, %0 5.0d, %0 5.0d, %0 5.0d, %0 5.0d, %0 5.0d, %0 5.0d, %0 5.0d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 5.1d, %0 5.1d, %0 5.1d, %0 5.1d, %0 5.1d, %0 5.1d, %0 5.1d, %0 5.1d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 67, but expected: 66
printf("%0 5.1d, %0 5.1d, %0 5.1d, %0 5.1d, %0 5.1d, %0 5.1d, %0 5.1d, %0 5.1d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 10.d, %0 10.d, %0 10.d, %0 10.d, %0 10.d, %0 10.d, %0 10.d, %0 10.d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 98, but expected: 96
printf("%0 10.d, %0 10.d, %0 10.d, %0 10.d, %0 10.d, %0 10.d, %0 10.d, %0 10.d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 10.0d, %0 10.0d, %0 10.0d, %0 10.0d, %0 10.0d, %0 10.0d, %0 10.0d, %0 10.0d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 98, but expected: 96
printf("%0 10.0d, %0 10.0d, %0 10.0d, %0 10.0d, %0 10.0d, %0 10.0d, %0 10.0d, %0 10.0d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 10.1d, %0 10.1d, %0 10.1d, %0 10.1d, %0 10.1d, %0 10.1d, %0 10.1d, %0 10.1d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 97, but expected: 96
printf("%0 10.1d, %0 10.1d, %0 10.1d, %0 10.1d, %0 10.1d, %0 10.1d, %0 10.1d, %0 10.1d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 100.d, %0 100.d, %0 100.d, %0 100.d, %0 100.d, %0 100.d, %0 100.d, %0 100.d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 817, but expected: 814
printf("%0 100.d, %0 100.d, %0 100.d, %0 100.d, %0 100.d, %0 100.d, %0 100.d, %0 100.d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 100.0d, %0 100.0d, %0 100.0d, %0 100.0d, %0 100.0d, %0 100.0d, %0 100.0d, %0 100.0d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 817, but expected: 814
printf("%0 100.0d, %0 100.0d, %0 100.0d, %0 100.0d, %0 100.0d, %0 100.0d, %0 100.0d, %0 100.0d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 100.1d, %0 100.1d, %0 100.1d, %0 100.1d, %0 100.1d, %0 100.1d, %0 100.1d, %0 100.1d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 816, but expected: 814
printf("%0 100.1d, %0 100.1d, %0 100.1d, %0 100.1d, %0 100.1d, %0 100.1d, %0 100.1d, %0 100.1d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 100.5d, %0 100.5d, %0 100.5d, %0 100.5d, %0 100.5d, %0 100.5d, %0 100.5d, %0 100.5d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 815, but expected: 814
printf("%0 100.5d, %0 100.5d, %0 100.5d, %0 100.5d, %0 100.5d, %0 100.5d, %0 100.5d, %0 100.5d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%- 5.1d, %- 5.1d, %- 5.1d, %- 5.1d, %- 5.1d, %- 5.1d, %- 5.1d, %- 5.1d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%- 10.1d, %- 10.1d, %- 10.1d, %- 10.1d, %- 10.1d, %- 10.1d, %- 10.1d, %- 10.1d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%- 10.5d, %- 10.5d, %- 10.5d, %- 10.5d, %- 10.5d, %- 10.5d, %- 10.5d, %- 10.5d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%- 100.1d, %- 100.1d, %- 100.1d, %- 100.1d, %- 100.1d, %- 100.1d, %- 100.1d, %- 100.1d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%- 100.5d, %- 100.5d, %- 100.5d, %- 100.5d, %- 100.5d, %- 100.5d, %- 100.5d, %- 100.5d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%- 100.10d, %- 100.10d, %- 100.10d, %- 100.10d, %- 100.10d, %- 100.10d, %- 100.10d, %- 100.10d", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 5i, % 5i, % 5i, % 5i, % 5i, % 5i, % 5i, % 5i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 69, but expected: 66
printf("% 5i, % 5i, % 5i, % 5i, % 5i, % 5i, % 5i, % 5i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 10i, % 10i, % 10i, % 10i, % 10i, % 10i, % 10i, % 10i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 99, but expected: 96
printf("% 10i, % 10i, % 10i, % 10i, % 10i, % 10i, % 10i, % 10i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 100i, % 100i, % 100i, % 100i, % 100i, % 100i, % 100i, % 100i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 818, but expected: 814
printf("% 100i, % 100i, % 100i, % 100i, % 100i, % 100i, % 100i, % 100i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 5.i, % 5.i, % 5.i, % 5.i, % 5.i, % 5.i, % 5.i, % 5.i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 68, but expected: 66
printf("% 5.i, % 5.i, % 5.i, % 5.i, % 5.i, % 5.i, % 5.i, % 5.i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 5.0i, % 5.0i, % 5.0i, % 5.0i, % 5.0i, % 5.0i, % 5.0i, % 5.0i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 68, but expected: 66
printf("% 5.0i, % 5.0i, % 5.0i, % 5.0i, % 5.0i, % 5.0i, % 5.0i, % 5.0i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 5.1i, % 5.1i, % 5.1i, % 5.1i, % 5.1i, % 5.1i, % 5.1i, % 5.1i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 67, but expected: 66
printf("% 5.1i, % 5.1i, % 5.1i, % 5.1i, % 5.1i, % 5.1i, % 5.1i, % 5.1i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 10.i, % 10.i, % 10.i, % 10.i, % 10.i, % 10.i, % 10.i, % 10.i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 98, but expected: 96
printf("% 10.i, % 10.i, % 10.i, % 10.i, % 10.i, % 10.i, % 10.i, % 10.i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 10.0i, % 10.0i, % 10.0i, % 10.0i, % 10.0i, % 10.0i, % 10.0i, % 10.0i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 98, but expected: 96
printf("% 10.0i, % 10.0i, % 10.0i, % 10.0i, % 10.0i, % 10.0i, % 10.0i, % 10.0i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 10.1i, % 10.1i, % 10.1i, % 10.1i, % 10.1i, % 10.1i, % 10.1i, % 10.1i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 97, but expected: 96
printf("% 10.1i, % 10.1i, % 10.1i, % 10.1i, % 10.1i, % 10.1i, % 10.1i, % 10.1i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 100.i, % 100.i, % 100.i, % 100.i, % 100.i, % 100.i, % 100.i, % 100.i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 817, but expected: 814
printf("% 100.i, % 100.i, % 100.i, % 100.i, % 100.i, % 100.i, % 100.i, % 100.i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 100.0i, % 100.0i, % 100.0i, % 100.0i, % 100.0i, % 100.0i, % 100.0i, % 100.0i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 817, but expected: 814
printf("% 100.0i, % 100.0i, % 100.0i, % 100.0i, % 100.0i, % 100.0i, % 100.0i, % 100.0i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 100.1i, % 100.1i, % 100.1i, % 100.1i, % 100.1i, % 100.1i, % 100.1i, % 100.1i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 816, but expected: 814
printf("% 100.1i, % 100.1i, % 100.1i, % 100.1i, % 100.1i, % 100.1i, % 100.1i, % 100.1i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("% 100.5i, % 100.5i, % 100.5i, % 100.5i, % 100.5i, % 100.5i, % 100.5i, % 100.5i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 815, but expected: 814
printf("% 100.5i, % 100.5i, % 100.5i, % 100.5i, % 100.5i, % 100.5i, % 100.5i, % 100.5i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 5.i, %0 5.i, %0 5.i, %0 5.i, %0 5.i, %0 5.i, %0 5.i, %0 5.i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 68, but expected: 66
printf("%0 5.i, %0 5.i, %0 5.i, %0 5.i, %0 5.i, %0 5.i, %0 5.i, %0 5.i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 5.0i, %0 5.0i, %0 5.0i, %0 5.0i, %0 5.0i, %0 5.0i, %0 5.0i, %0 5.0i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 68, but expected: 66
printf("%0 5.0i, %0 5.0i, %0 5.0i, %0 5.0i, %0 5.0i, %0 5.0i, %0 5.0i, %0 5.0i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 5.1i, %0 5.1i, %0 5.1i, %0 5.1i, %0 5.1i, %0 5.1i, %0 5.1i, %0 5.1i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 67, but expected: 66
printf("%0 5.1i, %0 5.1i, %0 5.1i, %0 5.1i, %0 5.1i, %0 5.1i, %0 5.1i, %0 5.1i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 10.i, %0 10.i, %0 10.i, %0 10.i, %0 10.i, %0 10.i, %0 10.i, %0 10.i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 98, but expected: 96
printf("%0 10.i, %0 10.i, %0 10.i, %0 10.i, %0 10.i, %0 10.i, %0 10.i, %0 10.i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 10.0i, %0 10.0i, %0 10.0i, %0 10.0i, %0 10.0i, %0 10.0i, %0 10.0i, %0 10.0i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 98, but expected: 96
printf("%0 10.0i, %0 10.0i, %0 10.0i, %0 10.0i, %0 10.0i, %0 10.0i, %0 10.0i, %0 10.0i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 10.1i, %0 10.1i, %0 10.1i, %0 10.1i, %0 10.1i, %0 10.1i, %0 10.1i, %0 10.1i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 97, but expected: 96
printf("%0 10.1i, %0 10.1i, %0 10.1i, %0 10.1i, %0 10.1i, %0 10.1i, %0 10.1i, %0 10.1i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 100.i, %0 100.i, %0 100.i, %0 100.i, %0 100.i, %0 100.i, %0 100.i, %0 100.i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 817, but expected: 814
printf("%0 100.i, %0 100.i, %0 100.i, %0 100.i, %0 100.i, %0 100.i, %0 100.i, %0 100.i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 100.0i, %0 100.0i, %0 100.0i, %0 100.0i, %0 100.0i, %0 100.0i, %0 100.0i, %0 100.0i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 817, but expected: 814
printf("%0 100.0i, %0 100.0i, %0 100.0i, %0 100.0i, %0 100.0i, %0 100.0i, %0 100.0i, %0 100.0i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 100.1i, %0 100.1i, %0 100.1i, %0 100.1i, %0 100.1i, %0 100.1i, %0 100.1i, %0 100.1i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 816, but expected: 814
printf("%0 100.1i, %0 100.1i, %0 100.1i, %0 100.1i, %0 100.1i, %0 100.1i, %0 100.1i, %0 100.1i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%0 100.5i, %0 100.5i, %0 100.5i, %0 100.5i, %0 100.5i, %0 100.5i, %0 100.5i, %0 100.5i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// returned: 815, but expected: 814
printf("%0 100.5i, %0 100.5i, %0 100.5i, %0 100.5i, %0 100.5i, %0 100.5i, %0 100.5i, %0 100.5i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%- 5.1i, %- 5.1i, %- 5.1i, %- 5.1i, %- 5.1i, %- 5.1i, %- 5.1i, %- 5.1i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%- 10.1i, %- 10.1i, %- 10.1i, %- 10.1i, %- 10.1i, %- 10.1i, %- 10.1i, %- 10.1i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%- 10.5i, %- 10.5i, %- 10.5i, %- 10.5i, %- 10.5i, %- 10.5i, %- 10.5i, %- 10.5i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%- 100.1i, %- 100.1i, %- 100.1i, %- 100.1i, %- 100.1i, %- 100.1i, %- 100.1i, %- 100.1i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%- 100.5i, %- 100.5i, %- 100.5i, %- 100.5i, %- 100.5i, %- 100.5i, %- 100.5i, %- 100.5i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%- 100.10i, %- 100.10i, %- 100.10i, %- 100.10i, %- 100.10i, %- 100.10i, %- 100.10i, %- 100.10i", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);// different memory
printf("%#5x, %#5x, %#5x, %#5x, %#5x, %#5x, %#5x, %#5x, %#5x, %#5x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#10x, %#10x, %#10x, %#10x, %#10x, %#10x, %#10x, %#10x, %#10x, %#10x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%#100x, %#100x, %#100x, %#100x, %#100x, %#100x, %#100x, %#100x, %#100x, %#100x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
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
// printf("%#100.10x, %#100.10x[...]%#100.10x, %#100.10x"(108 characters), 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#5.x, %0#5.x, %0#5.x, %0#5.x, %0#5.x, %0#5.x, %0#5.x, %0#5.x, %0#5.x, %0#5.x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#5.0x, %0#5.0x, %0#5.0x, %0#5.0x, %0#5.0x, %0#5.0x, %0#5.0x, %0#5.0x, %0#5.0x, %0#5.0x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#5.1x, %0#5.1x, %0#5.1x, %0#5.1x, %0#5.1x, %0#5.1x, %0#5.1x, %0#5.1x, %0#5.1x, %0#5.1x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#10.x, %0#10.x, %0#10.x, %0#10.x, %0#10.x, %0#10.x, %0#10.x, %0#10.x, %0#10.x, %0#10.x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#10.0x, %0#10.0x, %0#10.0x, %0#10.0x, %0#10.0x, %0#10.0x, %0#10.0x, %0#10.0x, %0#10.0x, %0#10.0x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#10.1x, %0#10.1x, %0#10.1x, %0#10.1x, %0#10.1x, %0#10.1x, %0#10.1x, %0#10.1x, %0#10.1x, %0#10.1x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#10.5x, %0#10.5x, %0#10.5x, %0#10.5x, %0#10.5x, %0#10.5x, %0#10.5x, %0#10.5x, %0#10.5x, %0#10.5x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#100.x, %0#100.x, %0#100.x, %0#100.x, %0#100.x, %0#100.x, %0#100.x, %0#100.x, %0#100.x, %0#100.x", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
// printf("%0#100.0x, %0#100.0x[...]%0#100.0x, %0#100.0x"(108 characters), 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
// printf("%0#100.1x, %0#100.1x[...]%0#100.1x, %0#100.1x"(108 characters), 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
// printf("%0#100.5x, %0#100.5x[...]%0#100.5x, %0#100.5x"(108 characters), 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
// printf("%0#100.10x, %0#100.1[...]#100.10x, %0#100.10x"(118 characters), 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
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
// printf("%#100.10X, %#100.10X[...]%#100.10X, %#100.10X"(108 characters), 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#5.X, %0#5.X, %0#5.X, %0#5.X, %0#5.X, %0#5.X, %0#5.X, %0#5.X, %0#5.X, %0#5.X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#5.0X, %0#5.0X, %0#5.0X, %0#5.0X, %0#5.0X, %0#5.0X, %0#5.0X, %0#5.0X, %0#5.0X, %0#5.0X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#5.1X, %0#5.1X, %0#5.1X, %0#5.1X, %0#5.1X, %0#5.1X, %0#5.1X, %0#5.1X, %0#5.1X, %0#5.1X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#10.X, %0#10.X, %0#10.X, %0#10.X, %0#10.X, %0#10.X, %0#10.X, %0#10.X, %0#10.X, %0#10.X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#10.1X, %0#10.1X, %0#10.1X, %0#10.1X, %0#10.1X, %0#10.1X, %0#10.1X, %0#10.1X, %0#10.1X, %0#10.1X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#10.5X, %0#10.5X, %0#10.5X, %0#10.5X, %0#10.5X, %0#10.5X, %0#10.5X, %0#10.5X, %0#10.5X, %0#10.5X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
printf("%0#100.X, %0#100.X, %0#100.X, %0#100.X, %0#100.X, %0#100.X, %0#100.X, %0#100.X, %0#100.X, %0#100.X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
// printf("%0#100.0X, %0#100.0X[...]%0#100.0X, %0#100.0X"(108 characters), 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
// printf("%0#100.1X, %0#100.1X[...]%0#100.1X, %0#100.1X"(108 characters), 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
// printf("%0#100.5X, %0#100.5X[...]%0#100.5X, %0#100.5X"(108 characters), 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
// printf("%0#100.10X, %0#100.1[...]#100.10X, %0#100.10X"(118 characters), 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);// different memory
}