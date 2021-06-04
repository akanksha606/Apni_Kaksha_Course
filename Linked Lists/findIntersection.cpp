/*Given the heads of two singly linked-lists headA and headB, 
return the node at which the two lists intersect.
 If the two linked lists have no intersection at all, return null.*/

 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=lengthList(headA);
        int l2=lengthList(headB);
        ListNode *ptr1=headA;
        ListNode *ptr2=headB;
        int d=0;
        if(l1>l2){
            d=l1-l2; ptr1=headA; ptr2=headB;
        }
        else{
            d=l2-l1; ptr1=headB; ptr2=headA;
        }
        while(d){
            if(ptr1==NULL)
                return NULL;
            
            ptr1=ptr1->next;
            d--;
        }
        while(ptr1!=NULL&&ptr2!=NULL){
            if(ptr1==ptr2)
                return ptr1;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return NULL;
        
    }
    int lengthList(ListNode * head){
        int s=0;
        ListNode *ptr=head;
        while(ptr!=NULL){
            ptr=ptr->next;
            s++;
        }
        return s;
    }
};