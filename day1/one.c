#include<stdio.h>

//function to make Uppercase to lowercase
char upper_to_lower(char input_var)
{
    return (input_var + 32);
}
void main()
{
    char input_var, output_var;
    printf("Enter the input character in lower case:");
    scanf("%c", &input_var);
    output_var = upper_to_lower(input_var);
    printf("Output in uppercase after function call is: %c\n", output_var);
}