 int a, b;
       
       for(int i=0; i<n; i++){
           if(arr[abs(arr[i])-1]<0)
               a = abs(arr[i]);
           else
               arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
       } 
       
       for(int i=0; i<n; i++){
           if(arr[i] > 0){
               b = i + 1;
               break;
           }
       }
       
       int *ans = new int[2];
       ans[0] = a;
       ans[1] = b;
       
       return ans;
   }