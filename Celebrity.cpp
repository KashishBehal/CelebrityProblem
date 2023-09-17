 int celebrity(vector<vector<int> >& M, int n) 
    {
        int ans=INT_MIN;
       
         for(int i=0;i<n;i++){
              int one=0;
        int zero=0;
             for(int j=0;j<n;j++){
                 if(M[i][j]==0){
                     zero++;
                 }
             }
              for(int k=0;k<n;k++){
                 if(M[k][i]==1){
                     one++;
                 }
         }
         if(zero==n && one==n-1){
             ans=i;
             break;
         }}
         if(ans==INT_MIN){
             return -1;
         }
         return ans;
    }
