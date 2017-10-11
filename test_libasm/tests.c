#include "libftasm.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <ctype.h>

void	test_isalpha(void)
{
	/* isalpha */
	printf("%s\n", "ft_isalpha:");
	printf("@:%s\n", ft_isalpha('@') == isalpha('@') ? "ok" : "nope");
	printf("A:%s\n", ft_isalpha('A') == isalpha('A') ? "ok" : "nope");
	printf("Z:%s\n", ft_isalpha('Z') == isalpha('Z') ? "ok" : "nope");
	printf("[:%s\n", ft_isalpha('[') == isalpha('[') ? "ok" : "nope");
	printf("`:%s\n", ft_isalpha('`') == isalpha('`') ? "ok" : "nope");
	printf("a:%s\n", ft_isalpha('a') == isalpha('a') ? "ok" : "nope");
	printf("z:%s\n", ft_isalpha('z') == isalpha('z') ? "ok" : "nope");
	printf("{:%s\n", ft_isalpha('{') == isalpha('{') ? "ok" : "nope");
	printf("null:%s\n", ft_isalpha(0) == isalpha(0) ? "ok" : "nope");
	printf("-10000:%s\n\n", ft_isalpha(-1000) == isalpha(-10000) ? "ok" : "nope");

	//for (int i = 0x41; i < 0x5b; i++)
		//printf("%d\n", isalpha(i));
}

void	test_isdigit(void)
{
	/* isdigit */
	printf("%s\n", "ft_isdigit:");
	printf("/:%s\n", ft_isdigit('/') == isdigit('/') ? "ok" : "nope");
	printf("0:%s\n", ft_isdigit('0') == isdigit('0') ? "ok" : "nope");
	printf("9:%s\n", ft_isdigit('9') == isdigit('9') ? "ok" : "nope");
	printf("::%s\n\n", ft_isdigit(':') == isdigit(':') ? "ok" : "nope");

}

void	test_isalnum(void)
{
	/* isalnum */
	printf("%s\n", "ft_isalnum:");
	printf("@:%s\n", ft_isalnum('@') == isalnum('@') ? "ok" : "nope");
	printf("A:%s\n", ft_isalnum('A') == isalnum('A') ? "ok" : "nope");
	printf("Z:%s\n", ft_isalnum('Z') == isalnum('Z') ? "ok" : "nope");
	printf("[:%s\n", ft_isalnum('[') == isalnum('[') ? "ok" : "nope");
	printf("`:%s\n", ft_isalnum('`') == isalnum('`') ? "ok" : "nope");
	printf("a:%s\n", ft_isalnum('a') == isalnum('a') ? "ok" : "nope");
	printf("z:%s\n", ft_isalnum('z') == isalnum('z') ? "ok" : "nope");
	printf("{:%s\n", ft_isalnum('{') == isalnum('{') ? "ok" : "nope");
	printf("null:%s\n", ft_isalnum(0) == isalnum(0) ? "ok" : "nope");
	printf("-10000:%s\n", ft_isalnum(-10000) == isalnum(-10000) ? "ok" : "nope");
	printf("/:%s\n", ft_isalnum('/') == isalnum('/') ? "ok" : "nope");
	printf("0:%s\n", ft_isalnum('0') == isalnum('0') ? "ok" : "nope");
	printf("9:%s\n", ft_isalnum('9') == isalnum('9') ? "ok" : "nope");
	printf("::%s\n\n", ft_isalnum(':') == isalnum(':') ? "ok" : "nope");
}

void	test_isascii(void)
{
	/* isascii */
	printf("%s\n", "ft_isascii:");
	printf("-1:%s\n", ft_isascii(-1) == isascii(-1) ? "ok" : "nope");
	printf("0:%s\n", ft_isascii(0) == isascii(0) ? "ok" : "nope");
	printf("0x7f:%s\n", ft_isascii(0x7f) == isascii(0x7f) ? "ok" : "nope");
	printf("0x80:%s\n\n", ft_isascii(0x80) == isascii(0x80) ? "ok" : "nope");
}

void	test_isprint(void)
{
	/* isprint */
	printf("%s\n", "ft_isprint:");
	printf("-1:%s\n", ft_isprint(0x1f) == isprint(0x1f) ? "ok" : "nope");
	printf("0:%s\n", ft_isprint(0x20) == isprint(0x20) ? "ok" : "nope");
	printf("0x7e:%s\n", ft_isprint(0x7e) == isprint(0x7e) ? "ok" : "nope");
	printf("0x7f:%s\n\n", ft_isprint(0x7f) == isprint(0x7f) ? "ok" : "nope");
}

void	test_tolower(void)
{
	/* tolower */
	printf("%s\n", "ft_tolower:");
	printf("@:%s\n", (char)ft_tolower('@') == tolower('@') ? "ok" : "nope");
	printf("A:%s\n", (char)ft_tolower('A') == tolower('A') ? "ok" : "nope");
	printf("Z:%s\n", (char)ft_tolower('Z') == tolower('Z') ? "ok" : "nope");
	printf("[:%s\n\n", (char)ft_tolower('[') == tolower('[') ? "ok" : "nope");

}

void	test_toupper(void)
{
	/* tolower */
	printf("%s\n", "ft_toupper:");
	printf("`:%s\n", (char)ft_toupper('`') == toupper('`') ? "ok" : "nope");
	printf("a:%s\n", (char)ft_toupper('a') == toupper('a') ? "ok" : "nope");
	printf("z:%s\n", (char)ft_toupper('z') == toupper('z') ? "ok" : "nope");
	printf("{:%s\n\n", (char)ft_toupper('{') == toupper('{') ? "ok" : "nope");

}

void	test_strcat(void)
{
	/* strcat */
	printf("%s\n", "ft_strcat:");
	char s1[10] = {'a', 'b', 'c', 0};
	char s3[10] = {'a', 'b', 'c', 0};
	char *s2 = "DEFG";
	char *ret_strcat = strcat(s1, s2);
	strcpy(s1, "abc");
	char *ret_ft_strcat = ft_strcat(s1, s2);
	strcat(s3, s2);
	printf("s1 + s2:%s\n", !strcmp(s1, s3) ? "ok" : "nope");
	printf("addr ret:%s\n\n", ret_strcat == ret_ft_strcat ? "ok" : "nope");
}

void	test_memcpy(void)
{
	/* memcpy */
	printf("%s\n", "ft_memcpy:");
	int		dst[20] = {0};
	int		dst2[20] = {0};
	int		src[5] = {1, 2, 3, 4, 5};
	size_t	size = 5;
	void *ret_memcpy = memcpy(dst, src, size * sizeof(int));
	void *ret_ft_memcpy = 	ft_memcpy(dst, src, size * sizeof(int));
	memcpy(dst2, src, size * sizeof(int));
	for (int i = 0; i < size; i++)
		printf("%d", dst[i]);
	printf("\nret addrr:%s\n", ret_memcpy == ret_ft_memcpy ? "ok" : "nope");
	printf("memcmp(dst, dst2):%s\n\n", !memcmp(dst, dst2, size * sizeof(int)) ? "ok" : "nope");
}

void	test_bzero(void)
{
	/* bzero */
	printf("%s\n", "ft_bzero:");
	int ft_bzezo_str[10] = {1, 1, 1, 101, 1, 0, 9, 3};
	int bzezo_str[10] = {-111111, -1, 2, 2, 1, 0, 4, 42};
	ft_bzero((char*)ft_bzezo_str, 10 * sizeof(int));
	bzero((char*)bzezo_str, 10 * sizeof(int));
	printf("%s\n\n", !memcmp(ft_bzezo_str, bzezo_str, 10 * sizeof(int)) ? "ok" : "nope");
}

void	test_memset(void)
{
	/* memset */
	printf("%s\n", "ft_memset:");
	int		memset_int[10] = {1, 2, 3, 4, 5, 6, 7, 8, 0};
	int		memset_int2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 0};
	void *ret_memset = memset(memset_int, 1, 10 * sizeof(int));
	void *ret_ft_memset = ft_memset(memset_int, 1, 10 * sizeof(int));
	memset(memset_int2, 1, 10 * 4);
	printf("%s\n\n", !memcmp(ret_ft_memset, ret_memset, 10 * sizeof(int)) ? "ok" : "nope");
}

void	test_strdup(void)
{
	/* strdup */
	printf("%s\n", "ft_strdup:");
	char s[5] = {'p', 't', 'r', 0};
	char *m = ft_strdup(s);
	printf("%1$s: %1$p\n", m);
	free(m);
	ft_puts("free ok\n");
}

void	test_strchr(void)
{
	/* strchr */
	printf("%s\n", "ft_strchr:");
	char *strchr_str = "abcdefgh";
	printf("1:%s\n", ft_strchr(strchr_str, 'a') == strchr(strchr_str, 'a') ? "ok" : "nope");
	printf("2:%s\n", ft_strchr(strchr_str, 'g') == strchr(strchr_str, 'g') ? "ok" : "nope");
	printf("3:%s\n", ft_strchr(strchr_str, 'h') == strchr(strchr_str, 'h') ? "ok" : "nope");
	printf("4:%s\n", ft_strchr(strchr_str, 0) == strchr(strchr_str, 0) ? "ok" : "nope");
	printf("5:%s\n", ft_strchr(strchr_str, -1) == strchr(strchr_str, -1) ? "ok" : "nope");
	printf("6:%s\n\n", ft_strchr(strchr_str, 'w') == strchr(strchr_str, 'w') ? "ok" : "nope");
}

void	test_atoi(void)
{
	printf("%s\n", "ft_atoi:");
	printf("\\t \\n2147483647:%s\n", ft_atoi("\t \n2147483647") == atoi("\t \n2147483647") ? "ok" : "nope");
	printf("-2147483648:%s\n", ft_atoi("-2147483648") == atoi("-2147483648") ? "ok" : "nope");
	printf("4d2:%s\n", ft_atoi("4d2") == atoi("4d2") ? "ok" : "nope");
	printf("-\\n---4d2:%s\n", ft_atoi("-\n---4d2") == atoi("-\n---4d2") ? "ok" : "nope");
	printf("+42:%s\n\n", ft_atoi("+42") == atoi("+42") ? "ok" : "nope");
}

void	test_atol(void)
{
	printf("%s\n", "ft_atol:");
	printf("\\t \\n9223372036854775807:%s\n", ft_atol("\t \n9223372036854775807") == atol("\t \n9223372036854775807") ? "ok" : "nope");
	printf("-9223372036854775807:%s\n", ft_atol("-9223372036854775807") == atol("-9223372036854775807") ? "ok" : "nope");
	printf("4d2:%s\n", ft_atol("4d2") == atol("4d2") ? "ok" : "nope");
	printf("-\\n---4d2:%s\n", ft_atol("-\n---4d2") == atol("-\n---4d2") ? "ok" : "nope");
	printf("+42:%s\n\n", ft_atol("+42") == atol("+42") ? "ok" : "nope");
}

void	test_strlen(void)
{
	printf("%s\n", "ft_strlen:");
	printf("len de \"mnnnn4243444556\":%s\n", strlen("mnnnn4243444556") == ft_strlen("mnnnn4243444556") ? "ok" : "nope");
	printf("len de rien:%s\n\n", strlen("") == ft_strlen("") ? "ok" : "nope");
}

void	test_puts(void)
{
	printf("%s\n", "ft_puts:");
	ft_puts("4242424242424244242424");
	ft_puts("la prochaine ligne est un pointeur null");
	ft_puts(NULL);
	ft_puts("");
}

void	test_putstr(void)
{
	printf("%s\n", "ft_putstr:");
	ft_putstr("\tcoucoucoucoucoucou\n\n");
}

void	test_putstr_fd(void)
{
	printf("%s\n", "ft_putstr_fd:");
	ft_putstr_fd("string sur stdout\n", 1);
	ft_putstr_fd("string sur stderr\n\n", 2);
}

void	test_putchar(void)
{
	printf("%s\n", "ft_putchar:");
	ft_putchar('t');
	ft_putchar('o');
	ft_putchar('t');
	ft_putchar('o');
	ft_putchar('\n');
	ft_putchar('\n');
}

void	test_putchar_fd(void)
{
	printf("%s\n", "ft_putchar_fd:");
	ft_putchar_fd('t', 2);
	ft_putchar_fd('o', 2);
	ft_putchar_fd('t', 2);
	ft_putchar_fd('o', 2);
	ft_putchar_fd('e', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('o', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('\n', 2);
	ft_putchar_fd('\n', 2);
}

void	test_strcmp(void)
{
	printf("%s\n", "ft_strcmp:");
	printf("1:%s\n", strcmp("abc", "abc") == ft_strcmp("abc", "abc") ? "ok" : "nope");
	printf("2:%s\n", strcmp("aabc", "abc") == ft_strcmp("aabc", "abc") ? "ok" : "nope");
	printf("3:%s\n", strcmp("abc", "abcc") == ft_strcmp("abc", "abcc") ? "ok" : "nope");
	printf("4:%s\n", strcmp("@bc", "@bc ") == ft_strcmp("@bc", "@bc ") ? "ok" : "nope");
	printf("5:%s\n", strcmp("abc", "") == ft_strcmp("abc", "") ? "ok" : "nope");
	printf("6:%s\n", strcmp("", "abcc") == ft_strcmp("", "abcc") ? "ok" : "nope");
	printf("7:%s\n", strcmp("", "") == ft_strcmp("", "") ? "ok" : "nope");
}

int		main(int ac, char **av)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_tolower();
	test_toupper();
	test_strcat();
	test_memcpy();
	test_bzero();
	test_memset();
	test_strdup();
	test_strchr();
	test_atoi();
	test_atol();
	test_puts();
	test_strlen();
	test_putstr();
	test_putstr_fd();
	test_putchar();
	test_putchar_fd();
	test_strcmp();
	return 0;
}
