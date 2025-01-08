#include "ft_printf.h"
#include <stdio.h>
int	main(void)
{
	int				num;
	char			*str;
	char			c;
	unsigned int	hex;
	unsigned int	unsigned_num;
	void			*ptr;
	int				ft_ret;
	int				printf_ret;


	// ft_ret = ft_printf(NULL);
	// printf_ret = printf(NULL);
	// printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	// Test d'affichage simple
	ft_ret = ft_printf("Affichage simple : Hello, World!\n");
	printf_ret = printf("Affichage simple : Hello, World!\n");
	printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	// Test avec un entier
	num = 42;
	ft_ret = ft_printf("Affichage d'un entier : %d\n", num);
	printf_ret = printf("Affichage d'un entier : %d\n", num);
	printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	// Test avec un entier négatif
	num = -42;
	ft_ret = ft_printf("Affichage d'un entier négatif : %d\n", num);
	printf_ret = printf("Affichage d'un entier négatif : %d\n", num);
	printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	// Test avec un entier zéro
	num = 0;
	ft_ret = ft_printf("Affichage d'un entier zéro : %d\n", num);
	printf_ret = printf("Affichage d'un entier zéro : %d\n", num);
	printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	// Test avec une chaîne de caractères
	str = "42 School";
	ft_ret = ft_printf("Affichage d'une chaîne : %s\n", str);
	printf_ret = printf("Affichage d'une chaîne : %s\n", str);
	printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	// Test avec une chaîne NULL
	str = NULL;
	ft_ret = ft_printf("Affichage d'une chaîne NULL : %s\n", str);
	printf_ret = printf("Affichage d'une chaîne NULL : %s\n", str);
	printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	// Test avec un caractère
	c = 'A';
	ft_ret = ft_printf("Affichage d'un caractère : %c\n", c);
	printf_ret = printf("Affichage d'un caractère : %c\n", c);
	printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	// Test avec un caractère non imprimable
	c = '\n';
	ft_ret = ft_printf("Affichage d'un caractère non imprimable : [%c]\n", c);
	printf_ret = printf("Affichage d'un caractère non imprimable : [%c]\n", c);
	printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	// Test avec un nombre hexadécimal
	hex = 255;
	ft_ret = ft_printf("Affichage en hexadécimal (minuscule) : %x\n", hex);
	printf_ret = printf("Affichage en hexadécimal (minuscule) : %x\n", hex);
	printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	ft_ret = ft_printf("Affichage en hexadécimal (majuscule) : %X\n", hex);
	printf_ret = printf("Affichage en hexadécimal (majuscule) : %X\n", hex);
	printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	// Test avec un unsigned int
	unsigned_num = 4294967295;
	ft_ret = ft_printf("Affichage d'un unsigned int : %u\n", unsigned_num);
	printf_ret = printf("Affichage d'un unsigned int : %u\n", unsigned_num);
	printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	// Test avec un unsigned int zéro
	unsigned_num = 0;
	ft_ret = ft_printf("Affichage d'un unsigned int zéro : %u\n", unsigned_num);
	printf_ret = printf("Affichage d'un unsigned int zéro : %u\n", unsigned_num);
	printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	// Test avec un pointeur
	ptr = str;
	ft_ret = ft_printf("Affichage d'un pointeur : %p\n", ptr);
	printf_ret = printf("Affichage d'un pointeur : %p\n", ptr);
	printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	// Test avec un pointeur NULL
	ptr = NULL;
	ft_ret = ft_printf("Affichage d'un pointeur NULL : %p\n", ptr);
	printf_ret = printf("Affichage d'un pointeur NULL : %p\n", ptr);
	printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	// Test avec le caractère %
	ft_ret = ft_printf("Affichage du caractère %% : %%\n");
	printf_ret = printf("Affichage du caractère %% : %%\n");
	printf("Retour ft_printf : %d, Retour printf : %d\n", ft_ret, printf_ret);

	return (0);
}