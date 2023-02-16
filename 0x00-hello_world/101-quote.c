#include <stdio.h>

/**
 * main - Entry point
 * Description: This function uses inline assembly to print a string to the console using the syscall function in x86_64 architecture.
 * Return: Always 1 (Success)
 */
int main(void)
{
        char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
        long l = 59;
        long fd = 1;
        long syscall = 1;
        long ret = 0;
        __asm__ ("syscall"
                : "=a" (ret)
                : "a" (syscall),
                  "D" (fd),
                  "S" (s),
                  "d" (l));
        return (1);
}

