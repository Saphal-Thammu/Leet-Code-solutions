class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] a = new int[nums.length];
        int j = 0;
        for(int i = 0; i < n; i++){
            a[j] = nums[i];
            a[j+1] = nums[i+n];
            j = j+2;
        }
        
        return a;
    }
}