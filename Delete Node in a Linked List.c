237. Delete Node in a Linked List

Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.
Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function.
 

// 把node指的下一個資料抓過來
// 取代他，然後下一個node就掰掰了(singly-linked list)
// 最後一個沒得刪，所以要判定有沒有下一個node

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode* temp;
    if(node->next != NULL || node!= NULL){
        temp =  node->next;
        node->val = temp->val;
        node->next = temp->next;
    }
}