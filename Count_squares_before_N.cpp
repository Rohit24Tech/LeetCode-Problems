 class Solution {
	public:
    int countSquares(int N) {
        int itr = 1;
        int count = 0;
        while(itr * itr < N) {
            count++;
            itr++;
        }
        return count;
    }
};
