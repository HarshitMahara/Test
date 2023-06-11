import java.util.Scanner;

public class TemperatureConverter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter temperature in degree Celsius: ");
        double celsius = scanner.nextDouble();
        // Conversion to Fahrenheit
        double fahrenheit = (celsius * 9/5) + 32; 
        // Conversion to Kelvin
        double kelvin = celsius + 273.15; 
        
        System.out.println(celsius + " degree Celsius is equal to " + fahrenheit + " degree Fahrenheit.");
        System.out.println(celsius + " degree Celsius is equal to " + kelvin + " Kelvin.");
        
        scanner.close();
    }
}
