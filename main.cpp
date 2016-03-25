#include <iostream>
#include "Solution.h"
void printVector(vector<int>& A) {
    for (int i=0; i<A.size(); ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> s = {2,1,9,4,4,56,90,3};

    Solution *b = new Solution();
    vector<int> ret = b->twoSum(s,8);
    printVector(ret);
    return 1;
}
