using System;

namespace Rekursia
{
    class subsum
    {
        static void Main(string[] args)
        {
            int[] array = {1,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};  // For example
            int target_amount = 198;    // The target amount
            arraycheck(array, target_amount);           
        }


        static bool arraycheck(int[] array, int value)
        {
            Console.WriteLine("The target amount is: " + value);
            Array.Sort(array);
            bool result = arraycheck_1(array, value);
            if (!result)
                Console.WriteLine("No combination found");
            else
                Console.WriteLine();
            return result;
        }
        static bool arraycheck_1 (int[] array,  int value)
        {
            int temp;
            if (value == 0)
            {
                Console.WriteLine("Combination found!");
                Console.Write("The numbers that give the amount:\t");
                return true;
            }
            
            if (value < 0)
                return false;
        
            for (int i = array.Length - 1; i >= 0 ; i--)
            {
                if(array[i] != 0)
                {
                    temp = array[i];
                    array[i] = 0;
                    if (arraycheck_1(array, value - temp))
                    {
                        Console.Write(temp + " ");
                        return true;
                    }
                }
            }
            return false;
        }
    }
}
