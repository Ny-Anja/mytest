import java.util.Scanner;

public class Primenumber {
	public static void main(String args[]) {
int i, number;
Boolean prime=true;
Scanner sc=new Scanner(System.in);
System.out.println("Enter a number: ");
number=sc.nextInt();
if(number==0||number==1) {
	System.out.println(number+" is prime number");
}else {
	for(i=2;i<number;i++){
		if(number%i==0) {
			prime=false;
			break;
		}
	}
	if(prime) {
		System.out.println(number+" is prime number");
	}else {
		System.out.println(number+" is not prime number");
	}
	
}
}
}