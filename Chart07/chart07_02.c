/* cypher1.c -- �ı����룬ֻ�������еĿո� */
#include <stdio.h>

#define SPACE ' '	/* SPACE�൱�ڡ�����-�ո�-���š� */

int main(void) 
{
	char ch;
	
	ch = getchar();	/*	����һ���ַ�	*/
	while (ch != '\n') 	/* ��һ��δ����ʱ	*/
	{
		if (ch == SPACE) 	/* �ո񲻱�	*/
		{
			putchar(ch);	/* ���ı�����ַ�	*/
		} else 
		{
			putchar(ch + 1);	/* �ı������ַ� */
		}
		ch = getchar();	/* ��ȡ��һ���ַ� */
	}
	putchar(ch);	/* ��ӡ�����ַ� */
	return 0;
}