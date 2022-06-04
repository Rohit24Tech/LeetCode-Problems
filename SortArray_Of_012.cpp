{  //not a clean code
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int count[3]={0,0,0};
        for(int i=0;i<n;i++){
            count[a[i]]++;
        }
        for(int i=0;i<count[0];i++){
            a[i]={0};
        }
        for(int j=count[0];j<count[0]+count[1];j++){
            a[j]={1};
        }
        for(int k=count[0]+count[1];k<count[0]+count[1]+count[2];k++){
            a[k]={2};
        }
    }
    
};
