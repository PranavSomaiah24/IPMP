struct Box{
    int h,d,w;
};

bool compare (Box a, Box b)
    {
    return ((a.w*a.d)>=(b.w*b.d));
    }

class Solution{
    public:
    /*The function takes an array of heights, width and 
    length as its 3 arguments where each index i value 
    determines the height, width, length of the ith box. 
    Here n is the total no of boxes.*/
    
    
    int maxHeight(int height[],int width[],int length[],int n)
    {
        //Your code here
        Box boxes[3*n];
        int index=0;
        for(int i=0;i<n;i++){
            boxes[index].h=height[i];
            boxes[index].d=max(width[i],length[i]);
            boxes[index].w=min(width[i],length[i]);
            index++;
            boxes[index].h=width[i];
            boxes[index].d=max(height[i],length[i]);
            boxes[index].w=min(height[i],length[i]);
            index++;
            boxes[index].h=length[i];
            boxes[index].d=max(height[i],width[i]);
            boxes[index].w=min(height[i],width[i]);
            index++;
        }
        
        sort(boxes,boxes+3*n,compare);
 
        vector<int> mh(3*n);
        mh[0]=boxes[0].h;
        int res=mh[0];
        
        for(int i=1;i<3*n;i++){
            mh[i]=boxes[i].h;
            for(int j=0;j<i;j++){
                if(boxes[i].d<boxes[j].d && boxes[i].w<boxes[j].w && mh[i]<mh[j]+boxes[i].h){
                    mh[i]=mh[j]+boxes[i].h;
                }
            }
            res=max(res,mh[i]);
        }
        return res;
    }
};