#include "cs1010.h"
#include <stdbool.h>
#include <unistd.h>

void print_o(long leading_spaces) 
{
    for (long i = 0; i < leading_spaces; i += 1) 
    {
        cs1010_print_string(" ");
    }
    cs1010_println_string("o");
}

int main()
{
    while (true) 
    {
        for (long i = 0; i < 60; i += 1) 
        {
            cs1010_clear_prev_line();
            print_o(i);
            usleep(100*1000);
        }
        for (long i = 60; i > 0; i -= 1) 
        {
            cs1010_clear_prev_line();
            print_o(i);
            usleep(100*1000);
        }
    }
}
