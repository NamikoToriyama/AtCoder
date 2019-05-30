import java.util.*;

public class ShiftOnly {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // スペース区切りの整数の入力
        int N = sc.nextInt();
        int bar[] = new int[N];
        int counter = -1;
        boolean flag = true;

        for (int i = 0; i < N; i++) {
            int a = sc.nextInt();
            bar[i] = a;
        }
        while (flag == true) {
            flag = checkdivid(bar, N);
            counter++;
        }

        // 出力
        System.out.println(counter);

    }

    private static boolean checkdivid(int bar[], int N) {
        for (int i = 0; i < N; i++) {
            if (bar[i] % 2 == 0) {
                bar[i] = bar[i] / 2;
            } else {
                return false;
            }
        }
        return true;
    }
}
