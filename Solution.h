//
// Created by zoolsher on 16/3/25.
//

#ifndef QUICKSORT_SOLUTION_H
#define QUICKSORT_SOLUTION_H

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;


class Solution {
public:
    void printVector(vector<int>& A) {
        for (int i=0; i<A.size(); ++i) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        vector<int> numsCopy(nums);

        this->printVector(numsCopy);

        qs(numsCopy,0,(int)numsCopy.size()-1);

        unsigned long f = 0;
        unsigned long l = numsCopy.size()-1;
        int temp1,temp2;

        while(true){
            if((numsCopy[f] + numsCopy[l])<target){
                f++;
            }
            if((numsCopy[f] + numsCopy[l])>target){
                l--;
            }
            if((numsCopy[f] + numsCopy[l])==target) {
                temp1 = (int) numsCopy[f];
                temp2 = (int) numsCopy[l];
                break;
            }
        }

        cout<<temp1<<temp2<<endl;

        for(int i=0;i<nums.size();i++){

            if( res[0]==0 &&temp1 == nums[i]){
                cout<<"match 1"<<endl;
                res[0] = i;
                continue;
            }
            if(temp2 == nums[i]){
                res[1] = i;
            }
        }

        return res;
    }
    void qs(vector<int> &nums,int f,int l){
        int tempf = f;
        int templ = l;
        int privot = nums[(int)(tempf+templ)/2];
        while(true){
            while(nums[tempf]<privot){
                tempf++;
            }
            while(nums[templ]>privot){
                templ--;
            }
            int temp = nums[tempf];
            nums[tempf]= nums[templ];
            nums[templ] = temp;
            tempf++;
            templ--;
            if(templ>f){qs(nums,f,templ);}
            if(l>tempf){qs(nums,tempf,l);}
            return;
        }
    }
};

#endif //QUICKSORT_SOLUTION_H
