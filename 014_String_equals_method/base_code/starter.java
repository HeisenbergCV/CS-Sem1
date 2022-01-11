import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner (System.in);
		System.out.println("Would you like to be a Wizard, Warriror, or Rogue?");
		
		String word = sc.nextLine();
		
		if (word.equals("Wizard"))
		{
			System.out.println("You have chosen the Wizard");
		}
		
		else if (word.equals("Warrior"))
		{
			System.out.println ("You have chosen the warriror");
		}
		
		else if (word.equals("Rogue"))
		{
			System.out.println("You have chosen the Rogue");
		}
		
		else {
			System.out.println("Invalid input TRY AGAINNNNN");
		}
		
		
		
		
		
	}
}
