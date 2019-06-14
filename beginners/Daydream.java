package beginners;

import java.util.*;

public class Daydream {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 文字列の入力
        String s = sc.next();
        sc.close();
        boolean flag = true;
        int charlen = s.length();
        String dream[] = { "m", "a", "e", "r", "d" };
        String dreamer[] = { "r", "e", "m", "a", "e", "r", "d" };
        String erase[] = { "e", "s", "a", "r", "e" };
        String eraser[] = { "r", "e", "s", "a", "r", "e" };
        //System.out.println(charlen);
        List<String> list = new ArrayList<String>();

        for (int i = 0; i < charlen; i++) {
            list.add(String.valueOf(s.charAt(i)));
        }
        //System.out.println(list);

        for (int i = charlen - 1; i >= 0; i--) {
            if (list.get(i).equals("m")) {
                for (int j = 0; j < 5; j++) {
                    if (!list.get(i).equals(dream[j])) {
                        flag = false;
                        break;
                    }
                    i--;
                }
                i++;
            } else if (list.get(i).equals("e")) {
                for (int j = 0; j < 5; j++) {
                    if (!list.get(i).equals(erase[j])) {
                        flag = false;
                        break;
                    }
                    i--;
                }
                i++;
            } else if (list.get(i).equals("r")) {
                if (list.get(i - 2).equals("s")) {
                    for (int j = 0; j < 6; j++) {
                        if (!list.get(i).equals(eraser[j])) {
                            flag = false;
                            break;
                        }
                        i--;
                    }
                } else if (list.get(i - 2).equals("m")) {
                    for (int j = 0; j < 7; j++) {
                        if (!list.get(i).equals(dreamer[j])) {
                            flag = false;
                            break;
                        }
                        i--;
                    }
                    i++;
                } else {
                    flag = false;
                    break;
                }
                i++;
            }
            // flagがfalseに変わったらbreakする。
            if (flag == false) {
                break;
            }
        }

        if (flag == true) {
            // 出力
            System.out.println("YES");
        } else {
            // 出力
            System.out.println("NO");
        }

    }
}
