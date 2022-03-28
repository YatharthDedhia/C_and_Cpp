#include<stdio.h>

int strlen_func(char *string)
 {
    int str_len =0;
	int i;
    for(i=0; string[i]!='\0'; i++)
    {
       str_len++;
    }
    return(str_len);
 }

int main()
{




	char str[100];
	printf("Enter a string: ");
	gets(str);

	printf("%d",strlen_func(str));
} 