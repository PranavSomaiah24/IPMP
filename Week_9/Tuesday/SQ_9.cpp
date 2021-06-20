void Stack ::push(int data)
{
    Node *curr = new Node(data);
    curr->prev = top;
    count += 1;

    if (top)
        top->next = curr;
    top = curr;

    if (count == 1)
        mid = curr;
    else if (count % 2 == 0)
        mid = mid->next;
}


int Stack::pop(){
    if (count == 0)
        {
        cout << "Stack is empty\n";
        return -1;
        }   
    Node *temp = top;

    int data = top->data;
    top = top->prev;

    count--;

    if (count % 2 != 0)
        mid = mid->prev;

    delete temp;

    return data;
}


int Stack::findMiddle()
{
    if (count == 0)
        {
        cout << "Stack is empty now\n";
        return -1;
        }

    return mid->data;
}


int Stack::deleteMiddle()
{
    int data = mid->data;
    Node *temp = mid;

    mid->prev->next = mid->next;
    mid->next->prev = mid->prev;

    count--;

    if (count % 2 != 0)
        mid = mid->prev;
    else
        mid = mid->next;

    delete temp;

    return data;
}