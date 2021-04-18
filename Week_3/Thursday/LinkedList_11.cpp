 Node* multiplyTwoLists( Node* first, Node* second) 
{ 
    
    int m = reverse(&first), n = reverse(&second); 
    
    struct Node* result = create_empty_list(m + n + 1); 
    struct Node *second_ptr = second,*result1 = result, *result2, *first; 
  
    while (second_ptr) { 
        int carry = 0; 
        result2 = result1; 
        first = first; 

        while (first) { 
            int mul = first->data * second_ptr->data + carry;  
            result2->data += mul % 10; 

            carry = mul / 10 + result2->data / 10; 
            result2->data = result2->data % 10; 
  
            first = first->next; 
            result2 = result2->next; 
        } 
        if (carry > 0) { 
            result2->data += carry; 
        } 
        result1 = result1->next; 
        second_ptr = second_ptr->next; 
    } 
  
    reverse(&result); 
    reverse(&first); 
    reverse(&second); 
  
    while (result->data == 0) { 
        struct Node* temp = result; 
        result = result->next; 
        free(temp); 
    } 
    return result;
}