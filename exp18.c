/*find the longest word*/
#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "aa bbb ccccc dddddd", s[50], lwd[50];
    int i = 0, j = 0, llw = 0;

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
            s[j++] = str[i];
        else
        {
            s[j] = '\0';
            if (strlen(s) > llw)
            {
                llw = strlen(s);
                strcpy(lwd, s);
            }
            j = 0;
        }
        i++;
    }

    s[j] = '\0';

    if (strlen(s) > strlen(lwd))
        printf("%s", s);
    else
        printf("%s", lwd);
}

