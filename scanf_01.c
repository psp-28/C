/*
Here is the simple code which shows the use of scanf() input function, and how it works with buffer.
I tried to get the input of single character ch, and then I want to take the character of sequence which is word and will break when their is white space found,
similarly taking input for the string sen to input the sentence.
here first scanf() will take the input of the single character.
second scanf() will take the input of the string which will break once the input is found with the white space [NOTE : string is initialised as an array which itself act as pointer, therefore,
we do not use &. Because & points to the address, so in case of single character we can point the address of the individual location, but in case of array & will point to the whole array location not the specific 
element.]

now third scanf(" "), or scanf("\n"), which can be used to exclude the newline in buffer.

whenever we enter any input, then along with the input newline is also gets stored in buffer.
Example: 
    if the input is given as 'A' using scanf(); then in buffer memory it will stored as 'A \n'.

Before using '%[^\n]%*c' in the scanf(), we will exclude the newline already present in the buffer.

You call:

scanf("%[^\n]%*c", sen);   --- >> [this means

                                  %[…] → This is a scan set: it tells scanf to read characters that match a set of allowed characters.
                                  
                                  ^\n → The ^ means "read everything except the newline character".
                                  
                                  So %[^\n] means:
                                  
                                  Read characters until a newline ('\n') is found.
                                  
                                  %*c → Read one character but discard it (the * suppresses assignment).
                                  This consumes the leftover newline.  ]




But the buffer STILL contains:

\n


So %[^\n] stops immediately (because the very first character is \n), and the result is an empty string.

This breaks your program.

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c", &ch);
    
    scanf("%s", s);
    
    scanf(" ");
    scanf("%[^\n]%*c", sen);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    
    
    return 0;
}
