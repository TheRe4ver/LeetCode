class Solution
{
public:
	uint_fast64_t getDecimalValue(ListNode* head)
	{
		uint_fast64_t result = 0;
		while (head != NULL)
		{
			result = result * 2 + head->val;
			head = head->next;
		}
		return result;
	}
};