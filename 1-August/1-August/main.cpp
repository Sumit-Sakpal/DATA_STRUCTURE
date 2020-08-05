#include<iostream>
using namespace std;

int strLen(char *Str )
{
	int iCnt = 0;

	if (Str == NULL)
	{
		return -1;
	}

	while (*Str != '\0')
	{
		iCnt++;
		Str++;
	}
	
	return iCnt;
}

void Display(char *str)
{
	cout << "\n\t Entered string :";
	
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
		src++;
		dest++;
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
		cout<<"STRING IS NOT PALINDROME";
	}
	else
	{
		cout << "STRING IS PALINDROME";
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
		cout << "STRING ARE SAME";
	}
	else
	{
		cout << "STRING ARE NOT SAME";
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
	char str1[11],str2[15];
	char str3[20];
	int iCnt = 0;
	
	cout << "Enter the string :";
	for (int i = 0; i < 11; i++)
	{
		cin >> str1[i];
	}

	iCnt = strLen(str1 );
	cout << iCnt;
	//Display(str1);
	//strCopy(str1, str2);

	//chkPalindrome(str1);

	//strCompare(str1, str2);

	//strReverse(str1);

	cout << "\n\n";
	return 0;
}