#include "../ft_printf/ft_printf.h"
#include <stdio.h>

int main(void)
{
	int	t = -2534;
	void	*pointer = &t;
	unsigned int	u = 4294967295;

	printf("-----+++++=====SIMPLE TEXT=====+++++-----\n\n");

	printf("| = %d <- OG\n", printf(NULL));
	printf("| = %d <- YOUR\n", ft_printf(NULL));
        printf("\n");

	printf("| = %d <- OG\n", printf(""));
	printf("| = %d <- YOUR\n", ft_printf(""));
	printf("\n");

	printf("| = %d <- OG\n", printf("Testing 1 2 3"));
        printf("| = %d <- YOUR\n", ft_printf("Testing 1 2 3"));
        printf("\n");

	printf("-----+++++=====%%C=====+++++-----\n\n");

	printf("| = %d <- OG\n", printf("%%c: %c", 'a'));
        printf("| = %d <- YOUR\n", ft_printf("%%c: %c", 'a'));
        printf("\n");

	printf("| = %d <- OG\n", printf("%%c: %c", 'g'));
        printf("| = %d <- YOUR\n", ft_printf("%%c: %c", 'g'));
        printf("\n");

	printf("| = %d <- OG\n", printf("%%c: %c", 'z'));
        printf("| = %d <- YOUR\n", ft_printf("%%c: %c", 'z'));
        printf("\n");

	printf("-----+++++=====%%S=====+++++-----\n\n");

	printf("| = %d <- OG\n", printf("%%s: %s", (char *)NULL));
        printf("| = %d <- YOUR\n", ft_printf("%%s: %s", (char *)NULL));
        printf("\n");	

	printf("| = %d <- OG\n", printf("%%s: %s", ""));
        printf("| = %d <- YOUR\n", ft_printf("%%s: %s", ""));
        printf("\n");

	printf("| = %d <- OG\n", printf("%%s: %s", "Hello World"));
        printf("| = %d <- YOUR\n", ft_printf("%%s: %s", "Hello World"));
        printf("\n");

	printf("-----+++++=====%%P=====+++++-----\n\n");

	printf("| = %d <- OG\n", printf("%%p: %p", pointer));
        printf("| = %d <- YOUR\n", ft_printf("%%p: %p", pointer));
        printf("\n");

	printf("-----+++++=====%%D=====+++++-----\n\n");

	printf("| = %d <- OG\n", printf("%%d: %d", 0));
        printf("| = %d <- YOUR\n", ft_printf("%%d: %d", 0));
        printf("\n");

	printf("| = %d <- OG\n", printf("%%d: %d", 5));
        printf("| = %d <- YOUR\n", ft_printf("%%d: %d", 5));
        printf("\n");
	
	printf("| = %d <- OG\n", printf("%%d: %d", 2147483647));
        printf("| = %d <- YOUR\n", ft_printf("%%d: %d", 2147483647));
        printf("\n");

	printf("-----+++++=====%%U=====+++++-----\n\n");

	printf("| = %d <- OG\n", printf("%%u: %u", 0));
        printf("| = %d <- YOUR\n", ft_printf("%%u: %u", 0));
        printf("\n");

        printf("| = %d <- OG\n", printf("%%u: %u", 5));
        printf("| = %d <- YOUR\n", ft_printf("%%u: %u", 5));
        printf("\n");

        printf("| = %d <- OG\n", printf("%%u: %u", 2147483647));
        printf("| = %d <- YOUR\n", ft_printf("%%u: %u", 2147483647));
        printf("\n");

	printf("| = %d <- OG\n", printf("%%u: %u", u));
        printf("| = %d <- YOUR\n", ft_printf("%%u: %u", u));
        printf("\n");
}
