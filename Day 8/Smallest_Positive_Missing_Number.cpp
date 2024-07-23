class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        int ans = 0;
        sort(arr , arr+n);
        int cnt = 1;
        
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == cnt){
                cnt++;
            }
        }
        return cnt;
    } 
};
