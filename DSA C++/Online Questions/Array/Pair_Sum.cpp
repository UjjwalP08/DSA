// CodeStudio:- Pair Sum

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
    
//     compare with first element
    for(int i = 0;i<arr.size();i++)
    {
//         compare with next elemnt to first element
        for(int j = i+1;j<arr.size();j++)
        {
            if(arr[i]+arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                //store min element
                
                temp.push_back(max(arr[i],arr[j]));
//                 store max element

                //                 store the temp vector in ans vector
                ans.push_back(temp);
            }
        }
        
    }
//     we have to sort the array or vector
       sort(ans.begin(),ans.end());
    return ans;
}