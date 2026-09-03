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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp=head;
        int v;
        int c=1;
        vector<int> local;
        while((temp->next!=nullptr)&&(temp->next->next!=nullptr))
        {
            v=temp->val;
            int v1=temp->next->val;
            int v2=temp->next->next->val;
            if((v>v1&&v2>v1)||(v<v1&&v2<v1))
                local.push_back(c);
            temp=temp->next;
            c++;
        }
        if(local.size()<2)
            return {-1,-1};
        int minDist = INT_MAX;
        for (int i = 1; i < local.size(); i++)
        {
            minDist = min(minDist, local[i] - local[i - 1]);
        }
        int maxDist = local.back() - local.front();
        return {minDist, maxDist};
    }
};