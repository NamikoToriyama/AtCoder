import java.util.*;

public class Practice {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // 整数の入力
        int n = sc.nextInt();
        String[] s = new String[n];
        for(int i=0;i<n;i++){
            s[i] = sc.next();
        }
        for(int i=0;i<n;i++){
            System.out.println("Hello!, " + s[i]);
        }
        sc.close();
    }
}
