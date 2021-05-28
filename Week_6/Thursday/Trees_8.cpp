// In a binary tree, if parent is 0, then left child is 0 and right child is 1. if parent is 1, then left c
// kth node value which is present at Nth level

#include <bits/stdc++.h>

using namespace std;

bool nodeValueHelper(int index){
    if(index==0)
        return false;

    int parent=(index-1)/2;

    if(2*parent+1==index)
        return nodeValueHelper(parent);
    
    return !nodeValueHelper(parent);
}


int nodeValue(int n,int k){

    int index=pow(2,n-1)-1 + k;

    return nodeValueHelper(index)?1:0;

}