// #include "pushswap.h"
// int *ft_strjoin(int s1[],int len, int s2) {
//     size_t i;
//     int *new;
//     int *arr;

//     arr = malloc(  len+ 4);
//     if (arr == NULL)
//         return NULL;
//     i = 0;
//     while (i < (len/4) )
//     {
//         arr[i] = s1[i];
//         i++;
//     }
//     arr[i] = s2;
//     return arr;
// }
//    void print_array(int arr[], size_t size) {
//     for (size_t i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int *s1 ;
//     int nbr = 4;
//     int *result = ft_strjoin(s1,sizeof(s1) ,nbr);
//      size_t size = sizeof(s1) / sizeof(int) + 1;

//     printf("s1: ");
//     print_array(s1, sizeof(s1) / sizeof(int));
//     printf("nbr: %d\n", nbr);
//     printf("Result: ");
//     print_array(result, size);

//     free(result); // Don't forget to free the dynamically allocated memory

//     return 0;
// }
