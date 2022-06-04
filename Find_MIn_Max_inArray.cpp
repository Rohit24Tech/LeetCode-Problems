pair<long long, long long> getMinMax(long long a[], int n) {
    long long int min=INT_MIN;
    long long int max=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]>=min){    //here min is used to find max element
            min=a[i];
        }
        if(a[i]<=max){   //here max is used to find min element
            max=a[i];
        }
    }
    pair<long long,long long> p;
   p.first=max;     //hence, vice-versa
   p.second=min;
   return p;
    
}
