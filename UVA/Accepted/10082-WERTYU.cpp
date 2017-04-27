#include<stdio.h>

int main()
{
	char str1[1500],str2[260];
	int i;

	str2['1']='`'; str2['2']='1'; str2['3']='2'; str2['4']='3'; str2['5']='4'; str2['6']='5'; str2['7']='6'; str2['8']='7'; str2['9']='8'; str2['0']='9'; str2['-']='0'; str2['=']='-';
	str2['W']='Q'; str2['E']='W'; str2['R']='E'; str2['T']='R'; str2['Y']='T'; str2['U']='Y'; str2['I']='U'; str2['O']='I'; str2['P']='O'; str2['[']='P'; str2[']']='['; str2['\\']=']';
	str2['S']='A'; str2['D']='S'; str2['F']='D'; str2['G']='F'; str2['H']='G'; str2['J']='H'; str2['K']='J'; str2['L']='K'; str2[';']='L'; str2['\'']=';';
	str2['X']='Z'; str2['C']='X'; str2['V']='C'; str2['B']='V'; str2['N']='B'; str2['M']='N'; str2[',']='M'; str2['.']=','; str2['/']='.';
	

	while(gets(str1))
	{
		i=0;
		while(str1[i]!='\0')
		{
			if(str1[i]==' ')
			{
				printf("%c",str1[i]);
			}
			else
			{
				printf("%c",str2[str1[i]]);
			}

			i++;
			
		}

		printf("\n");

	}

	return 0;
}