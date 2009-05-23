void QuickSortItems(std::vector<tItemList>* vList, INT d, INT h) {
	INT			i		= 0;
	INT			j		= 0;
	std::string	str		= "";

	/* return on empty list */
	if (d > h || d < 0)
		return;

	i = h;
	j = d;

	str = (*vList)[((INT) ((d+h) / 2))].name;
	do {
		while (stricmp((*vList)[j].name.GetSafe(), str.c_str()) < 0) j++;
		while (stricmp((*vList)[i].name.GetSafe(), str.c_str()) > 0) i--;

		if ( i >= j )
		{
			if ( i != j )
			{
				tItemList buf = (*vList)[i];
				(*vList)[i] = (*vList)[j];
				(*vList)[j] = buf;
			}
			i--;
			j++;
		}
	} while (j <= i);

	if (d < i) QuickSortItems(vList, d, i);
	if (j < h) QuickSortItems(vList, j, h);
}