/// week13-3.cpp 學習計畫 Linked List 第3題
/// LeetCode 2. Add Two Numbers 把鏈結串列 Linked List 裡面的數、逐 ans->next
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) { /// l1 的名字是小寫字母 L 不是數字 1
        ListNode* ans = new ListNode(999); /// 只是個前導 999 代表假的節點
        ListNode* ans2 = ans; /// 會滑動的指標, 把 ans 後面的 Linked List 逐一處理好
        int carry = 0; /// 一開始, 還沒有進位的值, 放 0

        while (l1 != nullptr || l2 != nullptr) { /// 只要有 1 個不是空指標
            int now = carry; /// 現在的值, 先把 carry 加進去
            if (l1 != nullptr) { /// 處理左邊的 list1
                now += l1->val; /// 把值加進去
                l1 = l1->next; /// 換下一筆
            }
            if (l2 != nullptr) { /// 處理右邊的 list2
                now += l2->val; /// 把值加進去
                l2 = l2->next; /// 換下一筆
            }

            ans2->next = new ListNode(now % 10); /// 慢慢「接好」後面的答案
            ans2 = ans2->next; /// 繼續在後 (待命接好)
            carry = now / 10;
        }

        if (carry > 0) { /// 還沒有進位? 要再多準備 1 位, 給最高的進位
            ans2->next = new ListNode(carry);
        }

        return ans->next;
    }
};
