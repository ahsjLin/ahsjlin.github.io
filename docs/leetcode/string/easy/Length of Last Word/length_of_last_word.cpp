class Solution {
public:
	int lengthOfLastWord(string s) {
		bool doStartCounting=0;
		int counter=0;
		for(int i=s.size()-1; i>=0; i--)
		{
			// ascii(' ') : 32
			if(int(s[i])!=32){
				doStartCounting = 1;
				counter++;
			}
			else if(int(s[i])==32 && doStartCounting) 
				break;
		}
		return counter;
	}
};
