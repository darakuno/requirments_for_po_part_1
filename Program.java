package system_requirments_lab_1;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Program {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int M;
        try {
            M = in.nextInt();
            List<Integer> numbers = new ArrayList<>();
            if (100 <= M && M <= 999) {
                for (int x = 2; x <= M; x++) {
                    boolean flag_is_simple = true;
                    for (int i = 2; i <= (int)Math.sqrt(x); i++) {
                        if (x % i == 0) {
                            flag_is_simple = false;
                            break;
                        }
                    }
                    if (flag_is_simple)
                        numbers.add(x);
                }
            }
            System.out.println(numbers);
            System.out.println(numbers.size());
            System.out.println(numbers.stream().mapToInt(Integer::intValue).sum());
        }
        catch (Exception e){
            System.out.println(e);
        }
    }
}