#include "main.h"

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
        while (1)
{
        int int_mode = isatty(STDIN_FILENO);

   if (int_mode == 1)
   {
     write(STDOUT_FILENO,"Enter a command:", 14);
   }

   /* The code continues below */
}
return (0);
}
