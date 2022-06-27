using System;

namespace PesquisaBinaria
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("--- Bem-vindo ao Programa ---");

            Random r = new Random(); // Define uma variável randomica

            int numeroCerto = r.Next(0, 100); // Define a variavel que ficará com algum valor entre 0 e 100

            bool acabarJogo = false; // Define que o jogo não acabou, caso torne-se True, o jogo acaba

            do
            {
                Console.Write("Digite um número entre 0 e 100: ");
                int i = int.Parse(Console.ReadLine());

                if (i > numeroCerto)
                {
                    
                    Console.WriteLine("\nNúmero alto! Digite um número menor...");
         
                }
                else if (i < numeroCerto)
                {                   
                    Console.WriteLine("\nNúmero baixo! Digite um número maior...");

                }
                else
                {
                    acabarJogo = true;
                    Console.WriteLine("\nParabéns, você ganhou! O número correto é: " + i);
                    Console.Write("\nPressione Enter para finalizar o jogo ");
                    Console.ReadKey();
                }
            } while (acabarJogo == false);
        }
    }
}
