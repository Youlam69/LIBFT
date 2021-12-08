#include "libft.h"
#include <fcntl.h>

int main()
{
	// int fd;
	// int fd2;

	char a[] = "123456s";
	// char b[] = "abcdef";
	ft_memmove(a+2,a,45);
	printf("%s\n", a);




	// printf("ret : %d\n",creat("/Users/ylamraou/Desktop/yoyo", O_CREAT));
	// printf("ret : %d\n",creat("/Users/ylamraou/Desktop/yo", O_CREAT));
	// fd = open("./yo",O_CREAT | O_RDWR);
	// write(fd, "ello", 5);
	// printf("fd yo %d\n", fd);
	// close(fd);




	// char s[] = {-128, 0, 127, 0};
	// char sCpy[] = {-128, 0, 127, 0};
	// char s2[] = {0, 0, 127, 0};
	// char s3[] = {0, 0, 42, 0};
	// char *str = ft_strjoin("","44");
	// write(1,str,7);
	// printf("\n");
	
	// printf("%s\n", str);

}