int binarySearch(vector<int> a, vector<int> t, int strt, int lst, int val)
{
	int mdl;
	int l;

	l = lst;

	while (strt <= lst)
	{
		mdl = (strt + lst) / 2;

		if (mdl < l && a[t[mdl]] < val && a[t[mdl + 1]] >= val)
		{
			return mdl + 1;
		}
		else if (a[t[mdl]] < val)
		{
			strt = mdl + 1;
		}
		else
		{
			lst = mdl - 1;
		}
	}

	return mdl;
}
