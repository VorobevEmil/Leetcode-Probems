#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *middleNode(ListNode *head)
{
    ListNode *node = head;
    vector<ListNode*> nodes;
    while (node != nullptr)
    {
        nodes.push_back(node);
        node = node->next;
    }

    return nodes[nodes.size() / 2];
}