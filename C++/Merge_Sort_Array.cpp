class Solution
{
    public:
    void merge(int a[], int si, int mid, int ei)
    {
         // Your code here
          int p=si;
          int q=mid+1;
          int b[ei-si+1]={0},k=0;

          while(p<=mid&&q<=ei)
          {
              if(a[p]<=a[q])
              {
                  b[k++]=a[p++];

              }
              else
              {
                  b[k++]=a[q++];
              }
          }
          while (p<= mid)
          b[k++] = a[p++];

          while (q<=ei)
          b[k++] = a[q++];


          for(int s=0;s<k;s++)
          {
              a[si]=b[s];
              si++;
          }

        
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        
        if (l>=r) //only one elements
        return ;
        
        int mid = l + (r-l)/2;
        
        mergeSort(arr, l , mid);
        
        mergeSort(arr , mid+1 , r);
        
        merge(arr, l , mid , r);
    }
};
