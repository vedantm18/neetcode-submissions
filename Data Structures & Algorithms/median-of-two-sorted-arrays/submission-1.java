class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
    
        int i=0,j=0;
        ArrayList<Integer> arr=new ArrayList<>();
        while(i<nums1.length && j<nums2.length){
            if(nums1[i]<nums2[j]){
                arr.add(nums1[i]);
                i++;
            }else{
                arr.add(nums2[j]);
                j++;
            }
        }

        if(i<nums1.length){
            for( ;i<nums1.length;i++){
                arr.add(nums1[i]);
            }
        }

        if(j<nums2.length){
            for( ;j<nums2.length;j++){
                arr.add(nums2[j]);
            }
        }

        int size=arr.size();
        double x=0;
        if (size % 2 == 0) {
            x= (arr.get(size / 2 - 1) + arr.get(size / 2)) / 2.0;
        } else {
            x=arr.get(size / 2);
        }

        return x;
        
    }
}
