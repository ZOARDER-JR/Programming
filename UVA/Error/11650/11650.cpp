#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<cstdlib>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<iomanip>

using namespace std;

int main()
{
	map<int,string> h;
	map<int,string> m;
	map<int,string>::iterator it,ir;

	h[12]="12";h[1]="11";h[2]="10";h[3]="09";h[4]="08";h[5]="07";h[6]="06";h[7]="05";
	h[8]="04";h[9]="03";h[10]="02";h[11]="01";

	m[0]="00";m[1]="59";m[2]="58";m[3]="57";m[4]="56";m[5]="55";m[6]="54";m[7]="53";
	m[8]="52";m[9]="51";m[10]="50";m[11]="49";m[12]="48";m[13]="47";m[14]="46";m[15]="45";
	m[16]="44";m[17]="43";m[18]="42";m[19]="41";m[20]="40";m[21]="39";m[22]="38";m[23]="37";
	m[24]="36";m[25]="35";m[26]="34";m[27]="33";m[28]="32";m[29]="31";m[30]="30";m[31]="29";
	m[32]="28";m[33]="27";m[34]="26";m[35]="25";m[36]="24";m[37]="23";m[38]="22";m[39]="21";
	m[40]="20";m[41]="19";m[42]="18";m[43]="17";m[44]="16";m[45]="15";m[46]="14";m[47]="13";
	m[48]="12";m[49]="11";m[50]="10";m[51]="09";m[52]="08";m[53]="07";m[54]="06";m[55]="05";
	m[56]="04";m[57]="03";m[58]="02";m[59]="01";

	int hh,mm,t;

	scanf("%d",&t);

	while(t--)
	{
		scanf("%d:%d",&hh,&mm);

		ir=m.find(mm);

		if(mm!=0 && hh==12)
		{
			hh=1;
			it=h.find(hh);
			cout << it->second << ":" << ir->second <<endl;		
		}
		else if(mm!=0)
		{
			it=h.find(hh+1);
			cout << it->second << ":" << ir->second <<endl;
		}
		else
		{
			it=h.find(hh);
			cout << it->second << ":" << ir->second <<endl;
		}
	}

	return 0;
}