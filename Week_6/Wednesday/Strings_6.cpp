// Cycle Leader
void swap (char* a, char* b)
{
	char t = *a;
	*a = *b;
	*b = t;
}

void reverse ( char* str, int low, int high )
{
	while ( low < high )
	{
		swap( &str[low], &str[high] );
		++low;
		--high;
	}
}

void cycleLeaderAlgo ( char* str, int shift, int len )
{
	int j;
	char item;

	for (int i = 1; i < len; i *= 3 )
	{
		j = i;
		item = str[j + shift];
		do
		{
			if ( j & 1 )
				j = len / 2 + j / 2;
			else
				j /= 2;
			swap (&str[j + shift], &item);
		}
		while ( j != i );
	}
}

void moveNumbers( char* str )
{
	int k, lenFirst;
    int remLen = strlen( str );
	int shift = 0;

	while ( remLen )
	{
		k = 0;
		while ( pow( 3, k ) + 1 <= remLen )
			k++;
		lenFirst = pow( 3, k - 1 ) + 1;
		remLen -= lenFirst;
		cycleLeaderAlgo ( str, shift, lenFirst );
		reverse ( str, shift / 2, shift - 1 );
		reverse ( str, shift, shift + lenFirst / 2 - 1 );
		reverse ( str, shift / 2, shift + lenFirst / 2 - 1 );
		shift += lenFirst;
	}
}

