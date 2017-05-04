Module Module1
    Sub Main()
        'Program by group 6 C.T 200l
        'program to fin the avearge of five numbers
        'variable declaration as integers
        Dim fNum, secNum, ThirNum, foNum, FifNUM, Average As Double
        Dim sum As Double
        'string variable declaration 
        Dim fname, sname As String
        'may to continue a loop
may:
        'Accepting inputs for string 
        Console.WriteLine("enter ur first name")
        sname = Console.ReadLine()
        Console.WriteLine("enter ur second name")
        fname = Console.ReadLine()
        'output to the screen names 
        Console.WriteLine("welcome to  average calculator program {0}", sname & " " & fname)
        'enter variable to calculate average
        Console.WriteLine("enter first score ")
        fNum = Console.ReadLine()
        Console.WriteLine("enter second   score ")
        secNum = Console.ReadLine()
        Console.WriteLine("enter Third score ")
        Console.WriteLine("enter fourth score ")
        foNum = Console.ReadLine()
        Console.WriteLine("enter fifth score ")
        FifNUM = Console.ReadLine()
        'suming the integer inputs 
        sum = fNum + ThirNum + foNum + FifNUM
        Average = Sum / 5
        Console.WriteLine("ur average is {0} ", Average)
        Console.WriteLine("Thanks for using this program {0}", sname & " " & fname)
        Console.ReadLine()
        GoTo may
    End Sub
End Module
