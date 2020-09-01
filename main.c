#include<stdio.h>
int main()
{
    char chr ='a';
    int a;
    printf("Enter a character: ");
    scanf("%c%d",&chr,&a);

    printf("You entered %c\n",chr);

    printf("ASCII value is %d\n",chr);
    printf("You entered %d",a);
    return 0;

}
