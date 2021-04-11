// Find k most frequent words from a stream 
// Using min heap assuming all heap functions are defined

void insertInMinHeap( MinHeap* minHeap, TrieNode** root, const char* word )
{
    if( (*root)->indexMinHeap != -1 )
    {
        ++( minHeap->array[ (*root)->indexMinHeap ]. frequency );
        minHeapify( minHeap, (*root)->indexMinHeap );
    }
  
    else if( minHeap->count < minHeap->capacity )
    {
        int count = minHeap->count;
        minHeap->array[ count ]. frequency = (*root)->frequency;
        minHeap->array[ count ]. word = new char [strlen( word ) + 1];
        strcpy( minHeap->array[ count ]. word, word );
  
        minHeap->array[ count ]. root = *root;
        (*root)->indexMinHeap = minHeap->count;
  
        ++( minHeap->count );
        buildMinHeap( minHeap );
    }
    else if ( (*root)->frequency > minHeap->array[0]. frequency )
    {
  
        minHeap->array[ 0 ]. root->indexMinHeap = -1;
        minHeap->array[ 0 ]. root = *root;
        minHeap->array[ 0 ]. root->indexMinHeap = 0;
        minHeap->array[ 0 ]. frequency = (*root)->frequency;

        delete [] minHeap->array[ 0 ]. word;
        minHeap->array[ 0 ]. word = new char [strlen( word ) + 1];
        strcpy( minHeap->array[ 0 ]. word, word );
  
        minHeapify ( minHeap, 0 );
    }
}
  
void insert ( TrieNode** root, MinHeap* minHeap, const char* word, const char* dupWord )
{
    if ( *root == NULL )
        *root = newTrieNode();
    if ( *word != '\0' )
        insert ( &((*root)->child[ tolower( *word ) - 97 ]), minHeap, word + 1, dupWord );
    else 
    {
        if ( (*root)->isEnd )
            ++( (*root)->frequency );
        else
        {
            (*root)->isEnd = 1;
            (*root)->frequency = 1;
        }
  
        insertInMinHeap( minHeap, root, dupWord );
    }
}
  
  
void insertTrieHeap(const char *word, TrieNode** root, MinHeap* minHeap)
{
    insert( root, minHeap, word, word );
}


void printKMostFreq( FILE* fp, int k )
{
    
    MinHeap* minHeap = createMinHeap( k );
    TrieNode* root = NULL;
    char buffer[MAX_WORD_SIZE];
    
    while( fscanf( fp, "%s", buffer ) != EOF )
        insertTrieHeap(buffer, &root, minHeap);

    displayMinHeap( minHeap );
}