#include<stdio.h>
#include<ctype.h>

int main()
 {

    char text[500], ch;
    int key;

    printf("Enter a message to encrypt: ");
    scanf("%s", text);  // Sender input.

    printf("Enter the key: ");
    scanf("%d", & key); // Key of sender choice .


    for (int i = 0; text[i] != '\0'; ++i)  // Converting character by character.
    {
    ch = text[i];

    if (isalnum(ch))           // Check for valid characters.
    {
          if (islower(ch)) //Lowercase characters.
          {
          ch = (ch - 'a' + key) % 26 + 'a';
          }
           
          if (isupper(ch))  // Uppercase characters.
          {
          ch = (ch - 'A' + key) % 26 + 'A';
          }

          if (isdigit(ch))  // Numbers.
          {
          ch = (ch - '0' + key) % 10 + '0';
          }
          }
        
    else  
         {
            printf("Invalid Message");  // Invalid character.

         }
                text[i] = ch; // Adding encoded answer.

    }

    printf("Encrypted message: %s", text);

    return 0;
}
