
#include <stdio.h>

static void PrintfTable(const char *str_format, int start, int end, int cols)
{
    int str_num = 1, n, i;
    for (i = 0, n = start; n <= end; n++, i++)
    {
        printf(str_format, n, n);

        if (i == cols * str_num - 1)
        {
            printf("\n");
            str_num++;
        }
    }

    if (i > cols * (str_num - 1) )
        printf("\n");
}

/// \brief Prints test table for all codes
/// source: https://en.wikipedia.org/wiki/ANSI_escape_code
void CT_PrintTable(void)
{
    printf("Table:\n");
    PrintfTable(" \e[%dm%3d\e[0m", 0, 107, 10);
}

/// \brief Prints test table for all codes
/// source: https://en.wikipedia.org/wiki/ANSI_escape_code
void CT_PrintTableRGB(void)
{
    printf("TableRGB Foreground:\n");
    PrintfTable(" \e[38;5;%dm%3d\e[0m", 0,   15,  8);
    PrintfTable(" \e[38;5;%dm%3d\e[0m", 16,  231, 6);
    PrintfTable(" \e[38;5;%dm%3d\e[0m", 232, 239, 8);
    PrintfTable(" \e[38;5;%dm%3d\e[0m", 240, 255, 8);

    printf("TableRGB Background:\n");
    PrintfTable(" \e[30;48;5;%dm%3d\e[0m", 0,   15,  8);
    PrintfTable(" \e[30;48;5;%dm%3d\e[0m", 16,  231, 6);
    PrintfTable(" \e[30;48;5;%dm%3d\e[0m", 232, 239, 8);
    PrintfTable(" \e[30;48;5;%dm%3d\e[0m", 240, 255, 8);
}

///
/// https://habr.com/ru/post/161999/
/// https://github.com/mudasobwa/TermColorBuilder
__attribute__ ((const))
unsigned char CT_RgbToNum(unsigned char r, unsigned char g, unsigned char b)
{
    if ( r == g && r == b )
        return ( r > 239 ) ? 15 : r/10 + 232;

    r /= 51;
    g /= 51;
    b /= 51;

    return 16 + 36 * r + 6 * g + b;
}
