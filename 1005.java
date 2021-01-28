import java.io.IOException;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
import java.util.Scanner;
/**
 *
 * @author gomes
 */
public class Main {
    
    public static void main(String[] args){
        Scanner input  = new Scanner(System.in);
        double z,x,y;
        
        x = input.nextDouble();
        y = input.nextDouble();
        z = (3.5*x+7.5*y)/11;
        System.out.format("MEDIA = %.5f%n", z);
    }
    
}
