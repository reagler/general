import java.math.*;
import java.util.Scanner;

public class Exponentiation {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while (in.hasNext()) {
			BigDecimal bd = in.nextBigDecimal();
			int n = in.nextInt();
			
			String output = bd.pow(n).stripTrailingZeros().toPlainString();
			if (output.charAt(0) == '0') {
				output = output.substring(1);
			}
			System.out.println(output);
		}
	}
}