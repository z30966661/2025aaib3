/// week14-2.cpp 單習題 Linked List 第2題
/// LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head==nullptr || head->next==nullptr) return head; /// 終止條件

        ListNode* ans = reverseList(head->next); /// 往右邊的 next 走到最深處

        head->next->next = head; /// 左右互換，1的下一層是2，2的下一層變1
        head->next = nullptr; /// 斷開，1的下一層設成 null

        return ans;
    }
};
