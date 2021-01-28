import java.io.IOException;

/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
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
        
        z = x*x*3.14159;
        System.out.format("A=%.4f%n" , z);
    }
    
}
