#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char str[64] = "this is test string for char pointer";
	char* p = str;

	while (1)
	{
		if (islower(p[0]));
		p[0] = toupper(p[0]);

		p = strchr(p, ' ');
		if (p == NULL)
			break;
		p++;
	}
	puts(str);
	printf("%s", str);
}
