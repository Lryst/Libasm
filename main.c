#include "libasm.h"

/*
** ft_strlen
*/

void	ft_check_strlen(void)
{
	printf("\n\n%s*********************** FT_STRLEN ***********************\n\n%s", UBLUE, NC);
	char *str0 = "";
	printf("%s\"%s\"\n\n%s", BWHITE, str0, NC);
	printf("the strlen: ");
	printf("%s%ld\n%s", BGREEN, strlen(str0), NC);
	printf("my ft_strlen: ");
	printf("%s%ld\n\n%s", BGREEN, ft_strlen(str0), NC);
	char *str1 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	printf("%s\"%s\"\n\n%s", BWHITE, str1, NC);
	printf("the strlen: ");
	printf("%s%ld\n%s", BGREEN, strlen(str1), NC);
	printf("my ft_strlen: ");
	printf("%s%ld\n\n%s", BGREEN, ft_strlen(str1), NC);
	return ;
}

/*
** ft_strcpy
*/

void	ft_check_strcpy(void)
{
	printf("%s*********************** FT_STRCPY ***********************\n\n%s", UBLUE, NC);
	char str2[500] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	char *str3 = "Hello World!";
	printf("dest: ");
	printf("%s\"%s\"\n%s", BWHITE, str2, NC);
	printf("source: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str3, NC);

	printf("the strcpy: ");
	printf("%s%s\n%s", BGREEN, strcpy(str2, str3), NC);
	printf("my ft_strcpy: ");
	printf("%s%s\n\n%s", BGREEN, ft_strcpy(str2, str3), NC);

	char str4[500] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	char *str5 = "";
	printf("dest: ");
	printf("%s\"%s\"\n%s", BWHITE, str4, NC);
	printf("source: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str5, NC);

	printf("the strcpy: ");
	printf("%s%s\n%s", BGREEN, strcpy(str4, str5), NC);
	printf("my ft_strcpy: ");
	printf("%s%s\n\n%s", BGREEN, ft_strcpy(str4, str5), NC);

	char str6[500] = "Hello World!";
	char *str7 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	printf("dest: ");
	printf("%s\"%s\"\n%s", BWHITE, str6, NC);
	printf("source: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str7, NC);

	printf("the strcpy: ");
	printf("%s%s\n%s", BGREEN, strcpy(str6, str7), NC);
	printf("my ft_strcpy: ");
	printf("%s%s\n\n%s", BGREEN, ft_strcpy(str6, str7), NC);

	char str8[500] = "";
	char *str9 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	printf("dest: ");
	printf("%s\"%s\"\n%s", BWHITE, str8, NC);
	printf("source: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str9, NC);

	printf("the strcpy: ");
	printf("%s%s\n%s", BGREEN, strcpy(str8, str9), NC);
	printf("my ft_strcpy: ");
	printf("%s%s\n\n%s", BGREEN, ft_strcpy(str8, str9), NC);
	return ;
}

/*
** ft_strcmp
*/
void	ft_check_strcmp(void)
{
	printf("%s*********************** FT_STRCMP ***********************\n\n%s", UBLUE, NC);
	char str10[100] = "";
	char str11[100] = "";
	printf("s1: ");
	printf("%s\" %s \"\n%s", BWHITE, str10, NC);
	printf("s2: ");
	printf("%s\" %s \"\n\n%s", BWHITE, str11, NC);

	printf("the strcmp: ");
	printf("%s%d\n%s", BGREEN, strcmp(str10, str11), NC);
	printf("my ft_strcmp: ");
	printf("%s%d\n\n%s", BGREEN, ft_strcmp(str10, str11), NC);

	char str12[100] = "";
	char str13[100] = "Hello World!";
	printf("s1: ");
	printf("%s\"%s\"\n%s", BWHITE, str12, NC);
	printf("s2: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str13, NC);

	printf("the strcmp: ");
	printf("%s%d\n%s", BGREEN, strcmp(str12, str13), NC);
	printf("my ft_strcmp: ");
	printf("%s%d\n\n%s", BGREEN, ft_strcmp(str12, str13), NC);

	char str14[100] = "Hello World!";
	char str15[100] = "";
	printf("s1: ");
	printf("%s\"%s\"\n%s", BWHITE, str14, NC);
	printf("s2: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str15, NC);

	printf("the strcmp: ");
	printf("%s%d\n%s", BGREEN, strcmp(str14, str15), NC);
	printf("my ft_strcmp: ");
	printf("%s%d\n\n%s", BGREEN, ft_strcmp(str14, str15), NC);

	char str16[100] = "Yello World!";
	char str17[100] = "Yello World!";
	printf("s1: ");
	printf("%s\"%s\"\n%s", BWHITE, str16, NC);
	printf("s2: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str17, NC);

	printf("the strcmp: ");
	printf("%s%d\n%s", BGREEN, strcmp(str16, str17), NC);
	printf("my ft_strcmp: ");
	printf("%s%d\n\n%s", BGREEN, ft_strcmp(str16, str17), NC);

	char str8[100] = "Hey";
	char str9[100] = "Hello World!";
	printf("s1: ");
	printf("%s\"%s\"\n%s", BWHITE, str8, NC);
	printf("s2: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str9, NC);

	printf("the strcmp: ");
	printf("%s%d\n%s", BGREEN, strcmp(str8, str9), NC);
	printf("my ft_strcmp: ");
	printf("%s%d\n\n%s", BGREEN, ft_strcmp(str8, str9), NC);
	return ;
}

/*
** ft_strdup
*/

void	ft_check_strdup(void)
{
	printf("%s*********************** FT_STRDUP ***********************\n\n%s", UBLUE, NC);
	char str18[500] = "";
	printf("s: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str18, NC);

	printf("the strdup: ");
	printf("%s%s\n%s", BGREEN, strdup(str18), NC);
	printf("my ft_strdup: ");
	printf("%s{%s}\n\n%s", BGREEN, ft_strdup(str18), NC);

	char str19[500] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	printf("s: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str19, NC);

	printf("the strdup: ");
	printf("%s%s\n%s", BGREEN, strdup(str19), NC);
	printf("my ft_strdup: ");
	printf("%s{%s}\n\n%s", BGREEN, ft_strdup(str19), NC);

    printf("the strdup: ");
    printf("{%s}\n", strdup("coucou"));
    printf("my ft_strdup: ");
	printf("{%s}\n", ft_strdup("coucou"));
	return ;
}

/*
** ft_write
*/

/*void	ft_check_write(void)
{
	printf("%s*********************** FT_WRITE ************************\n\n%s", UBLUE, NC);
	int ret1;
	int ret2;
	char *str20 = "Sample text";
	printf("buf: ");
	printf("%s\" %s \"\n\n%s", BWHITE, str20, NC);

	int fd = 1;
	printf("the write:\n");
	ret1 = write(fd, str20, ft_strlen(str20));
	printf("%s\n%d - %s\n\n%s", BGREEN, ret1, strerror(errno), NC);
	printf("my ft_write:\n");
	ret2 = ft_write(fd, str20, ft_strlen(str20));
	printf("%s\n%d - %s\n\n%s", BGREEN, ret2, strerror(errno), NC);

	fd = open("./test_wr", O_WRONLY); 
	printf("the write:\n");
	ret1 = write(fd, str20, ft_strlen(str20));
	printf("%s%d - %s\n\n%s", BGREEN, ret1, strerror(errno), NC);
	printf("my ft_write:\n");
	ret2 = ft_write(fd, str20, ft_strlen(str20));
	printf("%s%d - %s\n\n%s", BGREEN, ret2, strerror(errno), NC);
	close(fd);

	fd = -1;
	printf("the write:\n");
	ret1 = write(fd, str20, ft_strlen(str20));
	printf("%s%d - %s\n\n%s", BGREEN, ret1, strerror(errno), NC);
	printf("my ft_write:\n");
	ret2 = ft_write(fd, str20, ft_strlen(str20));
	printf("%s%d - %s\n\n%s", BGREEN, ret2, strerror(errno), NC);
	return ;
}


** ft_read


void	ft_check_read(void)
{
	printf("%s*********************** FT_READ *************************\n\n%s", UBLUE, NC);
	int ret3;
	int ret4;
	int ret5;
	int count = 500;
	char *str7 = malloc(sizeof(char) * 500);
	char *str8 = malloc(sizeof(char) * 500);
	char *str9 = malloc(sizeof(char) * 500);

	int fd = open("./test_rd", O_RDONLY);
	ret3 = read(fd, str7, count);
	printf("the read: ");
	printf("%s\n%d - %s\n%s", BGREEN, ret3, strerror(errno), NC);
	printf("buf:\n%s\n\n", str7);
	close(fd);
	fd = open("./test_rd", O_RDONLY);
	ret4 = read(fd, str7, count);
	printf("my ft_read: ");
	printf("%s\n%d - %s\n%s", BGREEN, ret4, strerror(errno), NC);
	printf("buf:\n%s\n\n", str7);
	close(fd);

	free(str7);

	fd = 0;
	ret5 = read(fd, str8, count);
	printf("the read: ");
	printf("%s\n%d - %s\n%s", BGREEN, ret5, strerror(errno), NC);
	printf("buf:\n%s\n\n", str8);
	printf("my ft_read: ");
	printf("%s\n%d - %s\n%s", BGREEN, ret5, strerror(errno), NC);
	printf("buf:\n%s\n\n", str8);

	free(str8);

	fd = -1;
	ret5 = read(fd, str9, count);
	printf("the read: ");
	printf("%s\n%d - %s\n%s", BGREEN, ret5, strerror(errno), NC);
	printf("buf:\n%s\n\n", str9);
	printf("my ft_read: ");
	printf("%s\n%d - %s\n%s", BGREEN, ret5, strerror(errno), NC);
	printf("buf:\n%s\n\n", str9);

	free(str9);
	
	return ;
}*/

int main(void)
{
	ft_check_strlen();
	ft_check_strcpy();
	ft_check_strcmp();
	ft_check_strdup();
	//ft_check_write();
	//ft_check_read();
	return (0);
}