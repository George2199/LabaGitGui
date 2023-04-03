#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char name[255];

    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    printf("length = %d\n", strlen(name)); /* debug line */
    name[strlen(first)-1] = '\0'; /* remove the newline at the end */

    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? hh what's that? */

    printf("Hello, %s %s!n", first, last)
    return 0;
}
