weight = float(input("Enter your weight: "))

in_what = input(" (l)bs or (k)g ? ")

if in_what.lower() == "k":
    kgs = weight * 2.20462
    print("Your weight in pounds is " + str(kgs))
if in_what.lower() == "l":
    pounds = weight / 2.20462
    print("Your weight in kilograms is " + str(pounds))



