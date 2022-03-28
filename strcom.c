/* 
ALTERNATIVE TO THE strcmp() COMMAND FOUND IN THE <string.h> LIBRARY.


FUNCTIONS:
1) Compares 2 strings taken from user.
2) Returns 0 if they are equal.
3) Returns the ASCII difference between the characters which are different; if the strings are not equal.
4) Returns the next character if the 2 strings are of unequal length, and all the characters of the smaller string are
   present in the bigger string.
*/


#include<stdio.h>


//Custom function made to get the string length.
int strlen_func(char *string)
{
    int str_len =0;
    for(int i=0; string[i]!='\0'; i++)
    {
        str_len++;
    }
    return(str_len);
}


//Main file starts.
int main()
{
    //Initisalizing the diff (difference) variable which stores the required ans.
    int diff;

    //Taking user input for the 2 strings, and storing them as string1 and string2.
    //NOTE: The string character limit is 100.
    char string1[100];
	printf("Enter a string 1: ");
	gets(string1); 

    char string2[100];
	printf("Enter a string 2: ");
	gets(string2);
    
    //If the length of string1 is greater than the length of string2: Ex: abcde,ab.
    if (strlen_func(string1)>strlen_func(string2))
    {
        //For loop which terminates if the string2(smaller string) reaches its end.
        for(int j =0; string2[j]!='\0';j++)
        {
            if(string1[j]==string2[j])
            {
                //diff(ans) = the next character of the string1(bigger string).
                diff = string1[strlen_func(string2)];
            }

            else if(string1[j]>string2[j])
            {
                //diff(ans) = the ASCII value difference between the 2 unequal characters.
                diff = string1[j]-string2[j];
                break;
            }

            else if(string1[j]<string2[j])
            {
                //diff(ans) = the ASCII value difference between the 2 unequal characters.
                diff = string2[j]-string1[j];
                break;
            }
        }
    }

    //If the string2 is greater than string1.
    //Similar to the working of the above if statement except string1 and string2 are interchanged.
    if (strlen_func(string2)>strlen_func(string1))
    {
        for(int k =0; string1[k]!='\0';k++)
        {
            if(string2[k]==string1[k])
            {
                diff = string2[strlen_func(string1)];
            }

            else if(string2[k]>string1[k])
            {
                diff = string2[k]-string1[k];
                break;
            }

            else if(string2[k]<string1[k])
            {
                diff = string1[k]-string2[k];
                break;
            }
        }
    }

    //If the 2 strings are of the same length
    else if(strlen_func(string2)==strlen_func(string1))
    {
        //Ends the loop only if the strings reach their end.
        for(int i=0; string1[i]!='\0';i++)
        {
            if(string1[i]== string2[i])
            {
                //diff(ans) = 0.
                diff = string1[i]-string2[i];
                break;
            }

            else if(string1[i]>string2[i])
            {
                //diff(ans) = the ASCII value difference between the 2 unequal characters.
                diff = string1[i]-string2[i];
                break;
            }

            else if(string1[i]<string2[i])
            {
                //diff(ans) = the ASCII value difference between the 2 unequal characters.
                diff = string2[i]-string1[i];
                break;
            }
        }
    }
    //Print the diff(ans)
    printf("%d",diff);
}