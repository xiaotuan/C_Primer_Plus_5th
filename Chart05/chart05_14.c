/* convert.c -- 自动类型转换 */
#include <stdio.h>

int main(void) 
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';	/* 第9行 */
    printf("ch = %c, i = %d, fl =%2.2f\n", ch, i, fl);	/* 第10行 */
    ch = ch + 1;    /* 第11行 */
    i = fl + 2 * ch;	/* 第12行 */
    fl = 2.0 * ch + i;	/* 第13行 */
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);	/* 第14行 */
    ch = 5212205.17;	/* 第15行 */
    printf("Now ch = %c\n", ch);
    return 0;
}
