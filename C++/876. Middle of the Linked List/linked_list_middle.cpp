#include <iostream>
using namespace std;

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
    ListNode *middleNode(ListNode *head)
    {
        int num_of_nodes = 0;
        int middle_node = 0;
        ListNode *node = head;
        while (node->next != nullptr)
        {
            node = node->next;
            num_of_nodes++;
        }
        num_of_nodes++;
        cout << "num_of_nodes : " << num_of_nodes << endl;
        middle_node = num_of_nodes / 2;
        cout << "middle_node : " << middle_node << endl;
        num_of_nodes = 0;
        node = head;
        while (num_of_nodes != middle_node)
        {
            node = node->next;
            num_of_nodes++;
        }
        return node;
    }
};

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;

        }
        return slow;
    }
};

int main()
{

    cout << 4 % 2;
    return 0;
}