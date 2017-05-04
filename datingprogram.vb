Module Module1

    Sub Main()
        'program for dating sites 
        Dim ope, a, b As Integer
        Dim fname, age, c, D As String
        Console.WriteLine("welcome to kelvins Dating site")
        Console.WriteLine("******************************")
        Console.WriteLine("******************************")
        Console.WriteLine("******************************")
        Console.WriteLine("Kindly enter ur  Username for this site")
        fname = Console.ReadLine()
        Console.WriteLine("Enter ur age " & fname)
        age = Console.ReadLine()
        If (age >= 17) Then
            Console.WriteLine("Press 1 if u are single")
            Console.WriteLine("press 2 if need a relatioship")
            Console.WriteLine("press 3 for friends with benefit")
            Console.WriteLine("press 4 form one nigth stand ")
            ope = Console.ReadLine()
            If (ope = 1) Then
                Console.WriteLine("enter the type features you need in your patner")
                Console.WriteLine("enter the age ")
                a = Console.ReadLine()
                Console.WriteLine("enter the height")
                B = Console.ReadLine()
                Console.Write("enter the religion ")
                c = Console.ReadLine()
                Console.WriteLine("******************************")
                Console.WriteLine("******************************")
                Console.WriteLine("******************************")
                Console.Write("we wud get back to once we get a match")
naz:
            ElseIf (ope = 2) Then
                Console.WriteLine("enter the patner's age ")
                a = Console.ReadLine()
                Console.WriteLine("enter ur patner's height")
                b = Console.ReadLine()
                Console.Write("enter ur patner's religion ")
                c = Console.ReadLine()
                Console.WriteLine("******************************")
                Console.WriteLine("******************************")
                Console.WriteLine("******************************")
                Console.Write("we wud get back to once we get a match")
            ElseIf (ope = 3) Then
                Console.WriteLine("enter ur number ")
                b = Console.ReadLine()
                Console.WriteLine("we wud get back to u")
            ElseIf (ope = 4) Then
                Console.WriteLine("Enter ur The time u wud be free")
                b = Console.ReadLine()
                Console.WriteLine("Enter name of hotel")
                D = Console.ReadLine()
                Console.WriteLine("enter hotel room number ")
                a = Console.ReadLine()
                Console.WriteLine("YOUR ESCORT WILL BE ARRIVING SHORTLY  ;) ")
            Else
                Console.WriteLine("wrong input")
            End If

            GoTo naz
        Else
        Console.WriteLine("You are too young")
        End If
        Console.ReadLine()
    End Sub

End Module
