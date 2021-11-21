
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *start = head;
        ListNode *end = head;
        ListNode *tail;
        ListNode *before_removed;
        if(head->next == nullptr)return nullptr;
        int i = 0;
        while (i != n)
        {
            end = end->next;
            i++;
        }
        if (end == nullptr)
        {

            return head->next;
        }
        while (end != nullptr)
        {
            before_removed = start;
            start = start->next;
            end = end->next;
        }
        before_removed->next = start->next;
        return head;
    }
};

int main()
{
    return 0;
}