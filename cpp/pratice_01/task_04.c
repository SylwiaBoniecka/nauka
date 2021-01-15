/* Write a program in C which will ask user for:
• an integer number - display it with hexadecimal system ( use %x and %#x)
• a double number - display it with e notation (use %E)
• one character - display it on a screen and its value from ASCII table
• string consists of two word - use fgets() function to read text and 
  display it by puts() function */

#include <stdio.h> 

int main()
{
    
    int my_int;
    printf("Enter an integer number: ");
    scanf("%d", &my_int);
    printf("Your number in hexadecimal system is %x (%#x) \n", my_int, my_int);

    double my_double;
    printf("Enter a double number: ");
    scanf("%lf", &my_double);
    printf("Your number is %E \n", my_double);

    char my_char;
    printf("Enter one character: ");
    getchar();      // scanf("%c", &my_char); --> problem with enter
    scanf("%c", &my_char);
    printf("Your character is %c and its valueis equal to %x \n", my_char, my_char);

    char my_two_words[30];
    printf("Enter your sting consist of two words: ");
    getchar();
    fgets(my_two_words, sizeof(my_two_words), stdin);
    puts(my_two_words);

    return 0;
}