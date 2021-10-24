print("The equation has to have the following format: a*x^2+b*x+c")
a = int (input("please insert a: "))
b = int (input("please insert b: "))
c = int (input("please insert c: "))
giota = b*b-4*a*c
if giota >= 0:
    D= float((giota)**0.5) 
    roota = str((-b+D)/(2*a)) 
    rootb = str((-b-D)/(2*a))
    print ("The first root is " + roota)
    print ("The second root is " + rootb)
else:
    print("The equation you have entered does not have real roots")