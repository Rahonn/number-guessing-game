import java.util.Scanner;
import java.util.Random;

public class Game {

    private static Scanner scanner = new Scanner(System.in);
    private static Random random = new Random();

    public static void main(String[] args) {

        while (Game.game()) {

            System.out.println("Do you want to play again? (y or n): ");

            String dostop = Game.scanner.nextLine();

            if (dostop.equalsIgnoreCase("n")) {

                break;

            }

        }

        Game.scanner.close();

        System.out.println("Goodbye!");

    }


    private static boolean game() {

        System.out.println("----------Number Guessing Game----------");
        System.out.println("Type 0 at any time to quit!");
        System.out.println("----------------------------------------");

        int mynum = Game.random.nextInt(100) + 1;
        int trys = 0;

        while (true) {
            
            
            System.out.println("Enter a number (1-100): ");
            String innumstr = Game.scanner.nextLine();

            int innum = Integer.parseInt(innumstr);


            if (innum == mynum) {

                System.out.println("You Win!");
                System.out.println(String.format("It took you %d trys!", trys));
                return true;

            } else if (innum == 0) {

                System.out.println(String.format("The number was %d", mynum));
                System.out.println(String.format("You had %d trys!", trys));
                return false;

            } else {

                if (innum > mynum) {

                    System.out.println("Lower!");

                } else if (innum < mynum) {

                    System.out.println("Higher!");

                }

            }

            trys += 1;


        }

    }


}