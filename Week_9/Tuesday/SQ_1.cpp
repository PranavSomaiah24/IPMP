// 2 stacks in one array

void twoStacks :: push1(int x)
{   
    if(top1<top2-1){
        arr[++top1]=x;
    }else
        return;

}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    if(top1<top2-1){
        arr[--top2]=x;
    }else
        return;
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{   
    if(top1!=-1){
        return arr[top1--];
    }
    return -1;

}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
    if(top2!=size)
        return arr[top2++];
        
    return -1;
}