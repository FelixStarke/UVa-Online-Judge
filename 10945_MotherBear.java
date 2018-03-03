import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while(true) {
            String line = scanner.nextLine();
            if (line.equals("DONE")) break;

            line = line.replaceAll("[.,!? ]", "").toLowerCase();
            StringBuilder notFastAtAll = new StringBuilder(line);
            if (line.equals(notFastAtAll.reverse().toString()))
                System.out.println("You won't be eaten!");
            else
                System.out.println("Uh oh..");
        }

        scanner.close();
    }
}
