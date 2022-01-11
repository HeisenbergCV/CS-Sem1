import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		System.out.print("I love to learn coding remotely."); 
	
			
			 int x;
			 int y;
			 int z;
			 
			 Random rand;
			 rand = new Random();
			 x = rand.nextInt(9);
			 System.out.println(x);
			 
			 
			 rand = new Random();
			 y = rand.nextInt(100)+1;
			 System.out.println(y);
			 
			 double a;
			 a = 0;
			 a = rand.nextDouble();
			 System.out.println(a);
			 a = a + 2.5;
			 System.out.println(a);
			 
			 double b;
			 b = rand.nextInt(575);
			 System.out.println(b);
			 b = b + 14;
			 System.out.println(b);
			 b = b + rand.nextDouble();
			 System.out.println(b);
			 
			 
	}
	
	
	
  
	
	
	
	
	
}
