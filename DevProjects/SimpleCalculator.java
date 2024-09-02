//code for a simple calculator for area of shapes and simple interest
import java.util.Scanner;
public class SimpleCalculator{
      public static void main(String[] args){
		  Scanner scanner= new Scanner(System.in);
		  int operation=1;
		  while (operation==1) {
		  int choice = displayMenu(scanner);
		  // switch case to Introduce the Method based on the User's Choice.);
		  switch (choice){
			  case 1:
			        arithmeticOperations(scanner);
					break;
			  case 2:
			        areaCalculator(scanner);
			        break;
			  case 3:
			        simpleInterest(scanner);
					break;
			  default:
		            System.out.println("INVALID OPTION"); 
		  }	
		   System.out.println("");
		   System.out.println("Do you wish to Perform another operation");
		   System.out.println("1.yes");
		   System.out.println("2.Quit");
		   operation=scanner.nextInt();
		  if(operation!=1&& operation!= 2){
			  System.out.println("");
		  }else if(operation!=1){
			  System.out.println("Exting program....");
			  scanner.close();	
		  }
		  }
		  
           	  
	  }
	  	   public static int displayMenu(Scanner scanner){
			int choice;
		   while(true){
		  //To allow the user to pick between Calculating Area or Simple Interest.
		  System.out.println("CHOOSE YOUR OPERATION: ");
		  System.out.println("1.Arithmetic Operations ");
		  System.out.println("2.Calculate Area of Basic shapes ");
		  System.out.println("3.Calculate Simple Interest");
		  if(scanner.hasNextInt()) {
		     choice= scanner.nextInt();
	         if(choice>=1 && choice<=3) {
			  break;
			 }
		   }else {
			   scanner.next();
		   }
		      System.out.println("Invalid choice! Please enter a valid option.");
		   }
		    return choice;
	   }
	    public static void arithmeticOperations(Scanner scanner){
			int num1,num2;
			System.out.println("Enter the First Number");
			num1= scanner.nextInt();
			System.out.println("Choose an operator(+,/,*,-)");
			char operator= scanner.next().charAt(0);
			
			System.out.println("Enter the Second Number");
			num2= scanner.nextInt();
			
			switch (operator) {
				case '+':
				     System.out.println("Answer:"+ (num1 + num2));
					 break;
	            case '-':
				     System.out.println("Answer:"+ (num1 - num2));
					 break;
		        case '*':
				     System.out.println("Answer:"+ (num1 * num2));
					 break;
				case '/':
					 if(num2 !=0) {
						 System.out.println("Answer:"+ (num1 / num2));
					 }else {
						 System.out.println("Math error");
					 }
					 break;
				default:
					System.out.println("Invalid Option"); 
	        }
		}
	   
	     //method for calculating Area of different shapes.
	   public static void areaCalculator(Scanner scanner){
		   int shape;
		   while (true) {
			  System.out.println("Choose Shape");
			  System.out.println("1.Rectangle");
			  System.out.println("2.Square");
			  System.out.println("3.Circle");
			  System.out.println("4.Triangle");
			    if(scanner.hasNextInt()) {
		           shape= scanner.nextInt();
	                if(shape>=1 && shape<=4){
			        break;
			        }
		        }else {
			       scanner.next();
		   }    System.out.println("Invalid shape! Please enter a valid option.");
		   }
	
			  switch (shape){
				  case 1:
				       // To calculate the 	Area of a Rectangle
					   // Area of a Rectangle= Length*Breadth.
				       System.out.println("Input Length of the Rectangle");
					   double length= scanner.nextDouble();
					   System.out.println("Input Breadth of the Rectangle");
					   double breadth= scanner.nextDouble();
					   double rectangleArea= length * breadth;
					   System.out.printf("Area of the Rectangle is: %.2f",rectangleArea);
					   break;
				  case 2:
				       //To calculate the Area of a Square.
					   // Area of a Square= length*length.
			           System.out.println("Input the Length of the Square");
					   double side= scanner.nextDouble();
					   double squareArea= side * side;
					   System.out.printf("Area of the Square is: %.2f",squareArea); 
                       break;
                  					   
				  case 3:
				       //To calculate the Area of a circle
					   // Area of a Circle =PI*radius*radius.
			           System.out.println("Input the Radius of the Circle");
					   double radius= scanner.nextDouble();
					   double circleArea=  Math.PI * radius * radius;
					   System.out.printf("Area of the Circle is: %.2f",circleArea); 
                       break; 
                  case 4:
				       //To calculate the Area of the Trangle
					   //Area of a Triangle = 1/2*base*height.
				       System.out.println("Input the Base of the Triangle");
					   double base= scanner.nextDouble();
					   System.out.println("Input the Height of the Triangle");
					   double height = scanner.nextDouble();
					   double triangleArea= 0.5 * base * height;
					   System.out.printf("Area of the Triangle is: %.2f",triangleArea);
					   break;	
                  default:
                       System.out.println("INVALID OPTION");	
			  }	  
					   
	   }
	   //Method to Input Parameters and Calculate Simple Interest 
	   //Simple Interest= (principal*rate*time)/100.
	   public static void simpleInterest(Scanner scanner){
		   System.out.println("Calculate Simple Interest");
		   System.out.println("Input Principal Amount");
		   double principal= scanner.nextDouble();
		   System.out.println("Input Rate (in percentage)");
		   double rate= scanner.nextDouble();
		   System.out.println("Input Time (in years)");
		   double time= scanner.nextDouble();
		   
		   double simpleInterest=(principal * rate * time) / 100;
		   System.out.printf("Simple Interest is: %.2f",simpleInterest);
	   }
}