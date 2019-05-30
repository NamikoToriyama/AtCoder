import java.util.*;

public class Product {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // スペース区切りの整数の入力
        int a = sc.nextInt();
        int b = sc.nextInt();

        if ((a * b) % 2 == 0) {
            // 出力
            System.out.println("Even");
        } else {
            // 出力
            System.out.println("Odd");
        }

    }
}
