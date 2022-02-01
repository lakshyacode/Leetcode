class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         
         int len1=m-l+1;
         int len2=r-m;
         int *first=new int[len1];
         int *second=new int[len2];
         
         int mainarrayindex=l;
         for(int i=0;i<len1;i++)
         {
             first[i]=arr[mainarrayindex++];
         }
          mainarrayindex=m+1;
         for(int i=0;i<len2;i++)
         {
             second[i]=arr[mainarrayindex++];
         }
         //merge two sorted array
         int index1=0;
         int index2=0;
         mainarrayindex=l;
         while(index1<len1 && index2<len2)
         {
             if(first[index1]<second[index2])
             {
                 arr[mainarrayindex++] = first[index1++];
             }
             else{
                 arr[mainarrayindex++] = second[index2++];
             }
         }
             
               while(index1 < len1) {
        arr[mainarrayindex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainarrayindex++] = second[index2++];
    }

    delete []first;
    delete []second;
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
       if(l>=r)
       {
           return;
       }
       int m=(l+r)/2;
       mergeSort(arr,l,m);
       mergeSort(arr,m+1,r);
       
       //merge
       merge(arr,l,m,r);
    }
};