void helper(vector<int> &arr, int l, int r){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    helper(arr, l+1,r-1);
}
void reverseArray(vector<int> &arr , int m)
{
    return helper(arr,m+1,arr.size()-1);
}
