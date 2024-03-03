public class LongestCommonPrefix{
	public static String common(String a,String b){
		StringBuilder sb=new StringBuilder();
		int n=Math.min(a.length(),b.length());
		for(int i=0;i<n;i++){
			if(a.charAt(i)==b.charAt(i)){
				sb.append(a.charAt(i));
			}else{
				break;
			}
		}
		return sb.toString();
	}
	public static String commonPrefix(String word[]){
		String ans=word[0];
		for(int i=1;i<word.length;i++){
			ans=common(ans,word[i]);
		}
		return ans;
	}
	public static void main(String[] args){
		String word[]={"floar","flawor","flight"};

		System.out.println(commonPrefix(word));
	}
}