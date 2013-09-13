import java.math.BigDecimal; 

public class fatorial {
   public static void main(String[] args) { 

      // Para cada argumento do main
      for (String n: args){ 

         // converte string para inteiro
         int f = Integer.parseInt(n); 

         // Inicializa fat com 1. Não se pode apenas atribuir, deve-se
         // usar um método para isto, no caso o construtor já tem esta opção
         BigDecimal fat = new BigDecimal("1"); 

         for (int j = 2; j <= f; j++) {
            // usando o método multiply da classe BigDecimal
            fat = fat.multiply(new BigDecimal(j));
         } 

         System.out.println(f + " = " + fat);
     }
  }
}