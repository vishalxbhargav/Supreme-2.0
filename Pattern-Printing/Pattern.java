public class Pattern {
    public static void main(String[] args){
        //Square Pattern
        int n=8;
        System.out.println();
        System.out.println("Squar Pattern");
        System.out.println();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) System.out.print("* ");
            System.out.println();
        }
        //Rectangle Pattern
      
        System.out.println();
        System.out.println("Rectangle Pattern");
        System.out.println();
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n;j++) System.out.print("* ");
            System.out.println();
        }
        //Hollow Rectangle Pattern

        System.out.println();
        System.out.println("Hollow Rectagle Pattern");
        System.out.println();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0||j==0||i==n-1||j==n-1) System.out.print("* ");
                else System.out.print("  ");

            } 
            System.out.println();
        }
        //Half Pyramid Pattern

        System.out.println();
        System.out.println("Half Pyramid Pattern");
        System.out.println();
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                System.out.print("* ");
            } 
            System.out.println();
        }
        //Half Numaric Pyramid Pattern

        System.out.println();
        System.out.println("Half Numaric Pyramid Pattern");
        System.out.println();
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                System.out.print(j+1+" ");
            } 
            System.out.println();
        }
        //Invert Half Pyramid Pattern

        System.out.println();
        System.out.println("Invert Half Pyramid Pattern");
        System.out.println();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                System.out.print("* ");
            } 
            System.out.println();
        }
        //Invert Half Numaric Pyramid Pattern

        System.out.println();
        System.out.println("Invert Half Numaric Pyramid Pattern");
        System.out.println();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                System.out.print(j+1+" ");
            } 
            System.out.println();
        }
        //Half Numaric Hollow Pyramid Pattern

        System.out.println();
        System.out.println("Half Numaric Pyramid Pattern");
        System.out.println();
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                if(i==0||j==0||j==i||i==n-1) System.out.print(j+1+" ");
                else System.out.print("  ");
            } 
            System.out.println();
        }
        //Right Half Pyramid Pattern

        System.out.println();
        System.out.println("Right Half Pyramid Pattern");
        System.out.println();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i+1;j++){
                System.out.print("  ");
            }
            for(int j=0;j<i+1;j++){
                System.out.print(" *");
            } 
            System.out.println();
        }
        //Right Half Numaric Pyramid Pattern

        System.out.println();
        System.out.println("Right Half Pyramid Pattern");
        System.out.println();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i+1;j++){
                System.out.print("  ");
            }
            for(int j=0;j<i+1;j++){
                System.out.print(" "+(j+1));
            } 
            System.out.println();
        }
        //Right Half Numaric Hollow Pyramid Pattern

        System.out.println();
        System.out.println("Right Half Pyramid Pattern");
        System.out.println();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i+1;j++){
                System.out.print("  ");
            }
            for(int j=0;j<i+1;j++){
               if(i==0||j==0||j==i||i==n-1) System.out.print(j+1+" ");
                else System.out.print("  ");
            } 
            System.out.println();
        }


    }
}
