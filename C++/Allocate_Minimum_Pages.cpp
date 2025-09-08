class Solution {
  public:
   bool isValid(vector<int> &arr, int k, int maxAllowedPages) {
        int student = 1, pages = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > maxAllowedPages) return false; // single book > limit
            
            if (pages + arr[i] <= maxAllowedPages) {
                pages += arr[i];
            } else {
                student++;
                pages = arr[i];
            }
        }
        return student <= k;
    }
    
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if (k > n) return -1;  // more students than books → not possible
        
        int sum = 0;
        for (int x : arr) sum += x;  // total pages
        
        int start = 0, end = sum, answer = -1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (isValid(arr, k, mid)) {
                answer = mid;
                end = mid - 1; // minimize maximum pages
            } else {
                start = mid + 1;
            }
        }
        
        return answer;
        
    }
};
