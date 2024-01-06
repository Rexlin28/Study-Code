import java.io.Console;
public class GuessingGameTest {

    public static void main(String[] args) {
        boolean flag= false;
        Console console = System.console();
        String input;
        int number, randomNumber;
        do{
            
            input = console.readLine();

            if(input == "help"){
                System.out.println("Debes de escribir un numero del 1 al 5");
                System.out.println("Seleccione 0 para salir");
            }else{
                number = Integer.parseInt(input);
                if(number==0){
                    flag= true;
                }
                if(number>0 && number<6){
                    System.out.println("ERROR! Numero invalido");
                }else{
                    randomNumber = ((int)(Math.random()*5)+1);

                    if(randomNumber==number){
                        System.out.println("Correcto!");
                    }else{
                        System.out.println("Incorrecto! El numero es: "+randomNumber);
                    }
                }
            }
        }while(flag);
    }
}
