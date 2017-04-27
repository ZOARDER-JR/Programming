#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#include"Fibonacci.h"

HugeInteger *hugeAdd(HugeInteger *p, HugeInteger *q)
{
	if (p == NULL || q == NULL)
	{
		return NULL;
	}

	HugeInteger *rslt;

	rslt = (HugeInteger*)malloc(sizeof(HugeInteger));

	if (rslt == NULL)
	{
		return NULL;
	}

	int bigger;

	bigger = (p->length > q->length ? p->length : q->length);

	rslt->digits = (int*)calloc(bigger + 1, sizeof(int));

	if (rslt->digits == NULL)
	{
		return NULL;
	}

	int carry = 0;

	int i,temp;

	for (i = 0; i < bigger; i++)
	{
		if (i < p->length && i < q->length)
		{
			temp = p->digits[i] + q->digits[i] + carry;

			rslt->digits[i] = temp % 10;
			carry = temp / 10 ;
		}
		else if (i < p->length)
		{
			temp = p->digits[i] + carry;

			rslt->digits[i] = temp % 10;
			carry = temp / 10;
		}
		else if (i < q->length)
		{
			temp = q->digits[i] + carry;

			rslt->digits[i] = temp % 10;
			carry = temp / 10;
		}
	}

	if (carry == 0)
	{
		rslt->length = i;
	}
	else
	{
		rslt->digits[i] = carry;
		rslt->length = i + 1;
	}

	return rslt;
}

HugeInteger *hugeDestroyer(HugeInteger *p)
{
	if (p != NULL)
	{
		free(p->digits);
		free(p);
	}

	return NULL;
}

HugeInteger *parseString(char *str)
{
	if (str == NULL)
	{
		return NULL;
	}

	HugeInteger *num;

	num = (HugeInteger*)malloc(sizeof(HugeInteger));

	if (num == NULL)
	{
		return NULL;
	}

	int sz = strlen(str);

	if (sz == 0)
	{
		num->digits = (int*)calloc(1, sizeof(int));

		if (num->digits == NULL)
		{
			return NULL;
		}

		num->digits[0] = 0;
		num->length = 1;
	}
	else
	{
		num->digits = (int*)calloc(sz, sizeof(int));

		if (num->digits == NULL)
		{
			return NULL;
		}

		int i;

		for (i = 0; i < sz; i++)
		{
			num->digits[i] = str[sz - i - 1] - '0';
		}

		num->length = sz;
	}

	return num;

}

HugeInteger *parseInt(unsigned int n)
{
	HugeInteger *num;

	num = (HugeInteger*)malloc(sizeof(HugeInteger));

	if (num == NULL)
	{
		return NULL;
	}

	int size = (n==0?0:log10(n*1.0));

	size++;

	num->digits = (int*)calloc(size, sizeof(int));

	if (num->digits == NULL)
	{
		return NULL;
	}

	num->length = size;

	int i = 0;

	while (n != 0)
	{
		num->digits[i] = n % 10;
		n /= 10;
		i++;
	}

	return num;
}

unsigned int *toUnsignedInt(HugeInteger *p)
{
	if (p == NULL)
	{
		return NULL;
	}

	long long chk;
	unsigned int *num;

	if (p->length > 10)
	{
		return NULL;
	}

	chk = 0;
	int i;

	for (i = 0; i < p->length; i++)
	{
		chk += (p->digits[i] * pow(10*1.0, i*1.0));
	}

	if (chk > UINT_MAX)
	{
		return NULL;
	}
	else
	{
		num = (unsigned int*)malloc(sizeof(unsigned int));

		num = &chk;
	}

	return num;
}

HugeInteger *fib(int n)
{
	HugeInteger *rs, *num1, *num2;

	num1 = parseString("");
	num2 = parseString("1");

	if (n == 0)
		return num1;
	else if (n == 1)
		return num2;

	rs = (HugeInteger*)malloc(sizeof(HugeInteger));

	int i;

	for (i = 2; i <= n; i++)
	{
		rs = hugeAdd(num1, num2);

		num1=hugeDestroyer(num1);
		num1 = num2;
		num2 = rs;
	}

	return rs;

}

double difficultyRating(void)
{
	return 4.5;
}

double hoursSpent(void)
{
	return 72.0;
}
