
#include <stdio.h>
#include "../cterm.h"

int main(int argc, char **argv)
{
	printf("%s", CT_EXAMPLE);
	printf("Program:" CT_EXAMPLE2 "%s" CT_RESET "\n", argv[0]);
	printf("%s", CT_EXAMPLE3);
	printf("%s", CT_EXAMPLE4);
	printf("\n");
	
	CT_PrintTable();
	printf("\n");
	
	CT_PrintTableRGB();
	printf("\n");
	
	return 0;
}

