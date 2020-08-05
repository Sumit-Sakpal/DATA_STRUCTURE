#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int strLen(char *Str)
{
	int iCnt = 0;

	while (*Str != '\0')
	{
		iCnt++;
		Str++;
	}

	return iCnt;
}

void Display(char *str)
{
	cout << "\n\t Entered string is :";

	while (*str != '\0')
	{
		cout << *str;
		str++;
	}
}

void strCopy(char *src, char *dest)
{
	while (*src != '\0')
	{
		*src = *dest;

		//src++;
		//dest++;
	}
}

void strConcat(char *str1, char *str2)
{
	while (*str1 != '\0')
	{
		str1++;
	}

	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
}

void chkPalindrome(char *str)
{
	char *START = str;
	char *END = str;

	while (*END != '\0')
	{
		END++;
	}
	END--;

	while (START < END)
	{
		if (*START != *END)
		{
			break;
		}

		START++;
		END--;
	}

	if (START < END)
	{
		cout << "\n\tSTRING IS NOT PALINDROME";
	}
	else
	{
		cout << "\n\tSTRING IS PALINDROME";
	}
}

void strCompare(char *src, char *dest)
{
	while ((*src != '\0') && (*dest != '\0'))
	{
		if (*src != *dest)
		{
			break;
		}
		src++;
		dest++;
	}

	if ((*src == '\0') && (*dest == '\0'))
	{
		cout << "\n\tSTRING ARE SAME";
	}
	else
	{
		cout << "\n\tSTRING ARE NOT SAME";
	}
}

void strReverse(char *str)
{
	char Temp;
	char *START = str;
	char *END = str;

	while (*END != '\0')
	{
		END++;
	}

	while (START < END)
	{
		Temp = *START;
		*START = *END;
		*END = Temp;

		START++;
		END++;
	}
}

int main()
{
	int iCnt = 0;

	char str1[6], str2[6];
	char str3[15];
	
	cout << "Enter the string :";
	cin >> str1;
	iCnt = strLen(str1);

	cout <<"String Length is :"<< strlen(str1);
	//Display(str1);

	strCopy(str1, str2);
	Display(str2);

	//chkPalindrome(str1);

	//strCompare(str1, str2);

	//strReverse(str1);

	cout << "\n\n";
	return 0;
}