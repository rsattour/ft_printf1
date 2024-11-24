#include "ft_printf.h"

// int ft_putchar(char c, t_flag *flag)
// {
//     int count;
//     int width;
    
//     count = 0;
//     width = flag->number - 1; // -1 because the character itself takes one space
    
//     if (!flag->dash && width > 0) // Right justify
//     {
//         while (width--)
//         {
//             write(1, " ", 1);
//             count++;
//         }
//     }
    
//     write(1, &c, 1);
//     count++;
    
//     if (flag->dash && width > 0) // Left justify
//     {
//         while (width--)
//         {
//             write(1, " ", 1);
//             count++;
//         }
//     }
//     return (count);
// }
int ft_putchar(char c, t_flag *flag)
{
    if(flag)
        flag->dash = 1;
    return write(1,&c,1);
}