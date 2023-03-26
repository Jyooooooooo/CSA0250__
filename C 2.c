#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if ((ch>'a' and ch<'z') || (ch>'A' and ch<'Z'))
    {
    printf("It is ALPHABET");
    }
    else
    {
	printf("It is NOT ALPHABET");
    }	
	
    return 0;
}
