class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> rev;
        int l=0;
        int r=numbers.size()-1;
        while(numbers[l]+numbers[r]!=target && l<r){
            if(numbers[l]+numbers[r]>target) r--;
            else l++;
        }
	if(l<r){
		rev.push_back(l+1);
		rev.push_back(r+1);
	}
	return rev;
    }
};
