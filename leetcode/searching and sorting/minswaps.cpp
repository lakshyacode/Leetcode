class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    int n=nums.size();
	    int count=0;
	   vector<pair<int,int>>v(n);
	   for(int i=0;i<n;i++)
	   {
	       v[i]={nums[i],i};
	       sort(v.begin(),v.end());
	   }
	   for(int i=0;i<n;i++)
	   {
	       if(v[i].second==i)continue;
	       else{
	           count++;
	           swap(v[i],v[v[i].second]);
	           i--;
	       }
	   }
	   return count;
	}
};