public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> v;
        int low=0; //creating a counter to put positive values to the left of given array 
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                v.push_back(arr[i]);
            }
            else{
                arr[low++]=arr[i];
            }
            
        }
        int high=n-1;
        for(int i=v.size()-1;i>=0;i--){ // traversing from the right of new vector to fill values starting from thr right of thr given array
            arr[high--]=v[i];
        }
    }
};
