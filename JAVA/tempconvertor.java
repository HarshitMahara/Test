import java.util.Scanner;

public class tempconvertor {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter temperature in degrees Celsius (°C): ");
        double celsius = scanner.nextDouble();
        
        double fahrenheit = celsiusToFahrenheit(celsius);
        System.out.println("Temperature in degrees Fahrenheit (°F): " + fahrenheit);
        
        double kelvin = celsiusToKelvin(celsius);
        System.out.println("Temperature in Kelvin (K): " + kelvin);
    }
    
    public static double celsiusToFahrenheit(double celsius) {
        return (celsius * 9 / 5) + 32;
    }
    
    public static double celsiusToKelvin(double celsius) {
        return celsius + 273.15;
    }
}
