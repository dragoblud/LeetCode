/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int lenll(ListNode * &head){
        ListNode * temp = head;
        int length = 0;
        while(temp)
        {
            length++;
            temp = temp -> next;
        }
        return length;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
    int len = lenll(head);
    if(head == NULL || k>len) return head;
    ListNode* pre = NULL,*cur = head,*nxt = NULL;
    int cnt = 0;
    while(cur!=NULL && cnt < k) {
        cnt++;
        nxt = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nxt;
    }
    if(nxt != NULL) {
        head->next = reverseKGroup(nxt,k);
    }
    return pre;
    }
};