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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // Step 1: find length and tail
        int n = 1;
        ListNode* tail = head;

        while (tail->next) {
            tail = tail->next;
            n++;
        }

        // Step 2: normalize k
        k = k % n;
        if (k == 0) return head;

        // Step 3: make circular
        tail->next = head;

        // Step 4: find new tail (n-k steps)
        int steps = n - k;
        ListNode* newTail = head;

        for (int i = 1; i < steps; i++) {
            newTail = newTail->next;
        }

        // Step 5: break the circle
        ListNode* newHead = newTail->next;
        newTail->next = NULL;

        return newHead;
    }
};