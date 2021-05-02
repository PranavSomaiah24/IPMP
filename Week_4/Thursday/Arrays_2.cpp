int merge_array(int a[],int l,int mid,int r,int temp[])
{
    int inv_count=0;
    int i=l;
    int j=mid;
    int k=l;
    while(i<=mid-1&&j<=r)
    {
        if(a[i]<=a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
            inv_count+=mid-i;
        }
    }
    while(i<mid)
        temp[k++]=a[i++];
    while(j<=r)
        temp[k++]=a[j++];
        for(int i=l;i<=r;i++)
        {
            a[i]=temp[i];
        }
    return inv_count;
}

int merge(int a[],int l,int r,int temp[])
{
    int inv_count=0;
    if(l<r)
    {
        int mid=(l+r)/2;
        inv_count=merge(a,l,mid,temp);
        inv_count+=merge(a,mid+1,r,temp);
        inv_count+=merge_array(a,l,mid+1,r,temp);
    }
    return inv_count;
}