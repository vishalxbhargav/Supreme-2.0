public class Permutation{
	public static void permutation(int nums[],int n){
		if(n>=nums.length){
			for(int i=0;i<nums.length;i++) System.out.print(nums[i]+" ");
			System.out.println();
			return;
		}
		for(int i=0;i<=n;i++){
			int t=nums[i];
			nums[i]=nums[n];
			nums[n]=t;
			permutation(nums,n+1);
			t=nums[i];
			nums[i]=nums[n];
			nums[n]=t;
		}
		return;
	}
	public static void main(String[] args){
		int nums[]={1,2,3};
		int n=0;
		permutation(nums,0);
	}
}