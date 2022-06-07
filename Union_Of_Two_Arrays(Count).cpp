public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int itr=0;
    
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(a[i]);
        }
        for(int i=0;i<m;i++){
            v.push_back(b[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]==v[i+1]){
                itr++;
            }
        }
        return v.size()-itr;
    }
};
