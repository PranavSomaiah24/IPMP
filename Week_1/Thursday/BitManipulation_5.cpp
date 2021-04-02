//Rotate bits in number

class Solution
{
  public:
        vector <unsigned int> rotate (int n, int d)
        {
            vector<unsigned int> res;
            int size=sizeof(n)*8;
            //left rotate
            res.push_back((n<<d)|(n>>(size-d)));
            res.push_back((n>>d)|(n<<(size-d)));
            
            return res;
        }
};