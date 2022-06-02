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
