using System;
using System.Linq;

namespace Rekursia
{
    class dec2bin
    {
        static void Main(string[] args)
        {
            long num = 58;    // Number to conversion
            dec2bin(num);           
        }

        static bool dec2bin(long value)
        {
            long[] array = new long[24];
            for (long i =0 ; i < array.Length ; i++)
            {
                array[i] = (long)Math.Pow(2,i);
            }

            Console.WriteLine("The decimal number is: " + value);
            if (value > array.Sum())
            {
                Console.WriteLine("Out of range");
                return false;
            }
            dec2bin_1(array, value);
            Console.WriteLine();
            return true;
        }
        static bool dec2bin_1(long[] array,  long value)
        {
            long temp;
            if (value == 0)
            {
                Console.Write("The number in binary display is:\t");
                for (long i = array.Length - 1; i >= 0; i--)
                {
                    if (i % 4 == 3)
                        Console.Write(" ");
                    if (array[i] == 0)
                        Console.Write("1");
                    else
                        Console.Write("0");
                }
                Console.Write("\n");
                Console.Write("The numbers that give the amount:\t ");
                return true;
            }
            
            if (value < 0)
                return false;
        
            for (long i = array.Length - 1; i >= 0 ; i--)
            {
                if(array[i] != 0)
                {
                    temp = array[i];
                    array[i] = 0;
                    if (dec2bin_1(array, value - temp))
                    {
                        Console.Write(temp + " ");
                        return true;
                    }
                    array[i] = temp;
                }
            }
            return false;
        }
    }
}
