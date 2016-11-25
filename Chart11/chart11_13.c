/* test.c -- 试用缩短字符串的函数 */
#include <stdio.h>
#include <string.h> /* 该头文件包含字符串函数的原型 */

void fit(char *, unsigned int);

int main(void)
{
    char mesg[] = "Hold on to your hats, hackers. ";

    puts(mesg);
    fit(mesg, 7);
    puts(mesg);
    puts("Let's look at some more of the string. ");
    puts(mesg + 8);
    return 0;
}

void fit(char *string, unsigned int size)
{
    if (strlen(string) > size) 
    {
	*(string + size) = '\0';
    }
}
