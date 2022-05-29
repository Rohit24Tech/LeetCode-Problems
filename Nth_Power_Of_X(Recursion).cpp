class Solution {
public:
    double myPow(double x, int n) {
        double result=helper(x,n);
        if(n<0)
            return 1/result;
        return result;
    }
public:
    double helper(double x, int n){
        if(n==0)
            return 1;
        double temp=helper(x,n/2);
        if(n%2==0)
            return temp*temp;
        else return x*temp*temp;
    }
};
