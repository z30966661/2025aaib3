/// week14-3.cpp 學習習題 Linked List 第2題 換另一種做法(慢，浪費空間)
/// LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverselist(ListNode* head) {

        vector<int> a; /// 把值存入 a 的陣列
        while (head != nullptr) { /// 不是走到 nullptr
            a.push_back(head->val); /// 把值(節點的值)放到 a 的列表
            head = head->next; /// 到下一層
        } /// 以上，把 Linked List 逛到底，把一層一層放入 a

        ListNode* ans = new ListNode(999); /// 答案的起始點
        ListNode* now = ans; /// 現在要處理的 node，真正的 ans 先存

        for (int i = a.size() - 1; i >= 0; i--) { /// 把列表倒著放，逆向放
            now->next = new ListNode(a[i]); /// 進行 new node，接到 next
            now = now->next;
        }

        return ans->next;
    }
};
