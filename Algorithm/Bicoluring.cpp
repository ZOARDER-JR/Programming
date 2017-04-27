bool Bicolouring(int s)
{
	queue<int> q;
	colr[s] = 1;
	red.psb(s);

	q.push(s);

	while (!q.emp)
	{
		int j = q.front;
		q.pop;

		for (it = adj[j].bgn; it != adj[j].end; it++)
		{
			if (colr[*it] == colr[j])
			{
				return false;
			}
			else if (colr[*it] == 0)
			{
				if (colr[j] == 1)
				{
					colr[*it] = 2;
					green.psb(*it);
				}
				else if (colr[j] == 2)
				{
					colr[*it] = 1;
					red.psb(*it);
				}

				q.push(*it);
			}
		}
	}

	return true;
}
