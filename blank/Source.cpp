#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void change(char*);
int main()
{		//char text[100], * p;
	struct text
	{

		char text[100], * p;

	}str_input[99];

		int n=0;

		printf("=====if i'm lower changing me to upper and if i'm upper change me to lower!=====\n");
		printf("How many text that you want huh? : ");

		scanf("%d",&n);

		if (n == 0) { printf("NO text"); }
		else {
			for(int i=0;i<n;i++)
			{
			printf("Enter Text[%d] : ",i);
			scanf("%s", str_input[i].text);
			str_input[i].p = str_input[i].text;

			}
			printf("the consequence : \n");
			for (int i = 0;i < n;i++)
			{
				printf("text[%d] : ",i);
				change(str_input[i].p);
				printf("\n");
			}		
		}
		
	return 0;
}
void change(char *x )
{
	for (x;*x != '\0';x++)
	{
		if ((*x >= 'a' && *x <= 'z') || (*x >= 'A' && *x <= 'Z'))
		{
			if ((*x >= 'a' && *x <= 'z'))
			{
				*x -= 32;
			}
			else if ((*x >= 'A' && *x <= 'Z'))
			{
				*x += 32;
			}
			printf("%c", *x);
		}
		else printf("%c", *x);
	}

}