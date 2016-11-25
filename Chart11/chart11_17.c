/* compare.c -- 这个程序满足要求 */
#include <stdio.h>
#include <string.h> /* 声明strcmp()函数 */

#define ANSWER "Grant"
#define MAX 40

int main(void)
{
    char try[MAX];

    puts("Who is buried in Grant's tomb?");
    gets(try);
    while (strcmp(try, ANSWER) != 0)
    {
	puts("No, that's wron. Try again.");
	gets(try);
    }
    puts("That's right!");

    return 0;
}
