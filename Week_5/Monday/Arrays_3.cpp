// Intersection of n sets
vector <int> getIntersection(vector < vector <int> > &sets)
{
    vector <int> result;  
    int smallIndex = 0;  
    int minSize = sets[0].size(); 
    for (int i = 1 ; i < sets.size() ; i++)
    { 
        sort(sets[i].begin(), sets[i].end());
        if (sets[i].size()<minSize)
        {
            minSize = sets[i].size();
            smallIndex = i;
        }
    }

    map<int,int> map;
    for (int i = 0; i < sets[smallIndex].size(); i++)
    {
        if (map.find( sets[smallIndex][i] ) == map.end())
            map[ sets[smallIndex][i] ] = 1;
        else
            map[ sets[smallIndex][i] ]++;
    }

    map<int,int>::iterator it;
    for (it = map.begin(); it != map.end(); ++it)
    {
        int elem = it->first;
        int freq = it->second;
         bool isElementFound = true;
        for (int j = 0 ; j < sets.size() ; j++)
        { 
            if (j != smallIndex)
            {
                if (binary_search( sets[j].begin(), sets[j].end(), elem ))
                {
                   int lInd = lower_bound(sets[j].begin(), sets[j].end(), elem) - sets[j].begin();
                   int rInd = upper_bound(sets[j].begin(), sets[j].end(), elem) - sets[j].begin();
                   if ((rInd - lInd) < freq)
                       freq = rInd - lInd;
                }
                else
                {
                    isElementFound = false;
                    break;
                }
            }
        }
  
        if (isElementFound)
        {
            for (int k = 0; k < freq; k++)
                result.push_back(elem);
        }
    }
    return result;
}