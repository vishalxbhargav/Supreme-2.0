public class AdvancedPattern{
    public static void main(String[] args){
        int n=18;
        //solid diamond
        //filped solid diamond 
        //mixed flag 
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<i+1;j++){
        //         if(j%2==0) System.out.print(i+1);
        //         else System.out.print("*");
        //     }
        //     System.out.println();
        // }
        //butterfly pattern
        //first half
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++) System.out.print("*");
            for(int j=0;j<2*n-2*i-1;j++) System.out.print(" ");
            for(int j=0;j<i+1;j++) System.out.print("*");
            System.out.println();
        }
        //second half
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++) System.out.print("*");
            for(int j=0;j<2*i+1;j++) System.out.print(" ");
            for(int j=0;j<n-i;j++) System.out.print("*");
            System.out.println();
        }
    }
}