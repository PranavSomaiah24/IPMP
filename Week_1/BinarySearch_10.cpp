//LIS using BS

#include <iostream>
#include <vector>

int ceiling(std::vector<int>& v, int l, int r, int key)
{
	while (r - l > 1) {
		int m = l + (r - l) / 2;
		if (v[m] >= key)
			r = m;
		else
			l = m;
	}

	return r;
}

int LISBinarySearch(std::vector<int>& v)
{
	if (v.size() == 0)
		return 0;

	std::vector<int> t(v.size(), 0);
	int len = 1; 

	t[0] = v[0];
	for (size_t i = 1; i < v.size(); i++) {
		if (v[i] < t[0])
			t[0] = v[i];
		else if (v[i] > t[len- 1])
			t[len++] = v[i];
		else
			t[ceiling(t, -1, len - 1, v[i])] = v[i];
	}

	return len;
}
