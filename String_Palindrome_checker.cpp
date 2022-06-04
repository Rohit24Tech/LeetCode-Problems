//Recursive Solution: Takes a lot of time

bool helper(int l, int r, string &s){
    if(l>=r)
        return true;
    if(s[l]!=s[r])
        return false;
    return helper(l+1,r-1,s);
}
bool isPalindrome(string &s)
{
	return helper(0,s.size()-1,s);
}

//Linear Solution: Takes relatively less time

class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    for(int i=0;i<(S.length())/2;i++){
	        if(S[i]!=S[S.length()-1-i]){
	            return false;
	            break;
	        }
	    }
	    return true;
	}

};
