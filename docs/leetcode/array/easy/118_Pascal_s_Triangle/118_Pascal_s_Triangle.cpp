class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		// return vector
		vector<vector<int>> rev;
		// temp row vector
		vector<int> temp_v;

		// right index
		int r;
		for(int i=0; i<numRows; i++){
			r=i;
			// default row size and put them all 1.
			temp_v.resize(i+1, 1);
			for(
				int j=1;
				j<r;
				temp_v[j]=rev[i-1][j-1]+rev[i-1][j], j++
			   );
			rev.push_back(temp_v);
		}
		return rev;
	}
};
