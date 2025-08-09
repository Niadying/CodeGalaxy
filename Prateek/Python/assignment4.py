# a) Patient Vital Sign Alert System.
# given a patient heart rate and blood pressure, Generate alert heartrate: Normal(60-100),High(>100),low(<60)
# BP: check hypertension condition ()

# b) passwod Validation with retry
# Problem: Enforce password rules and retry if invalid
# at least 8 characters, contains a number, contain an Uppercase letter.



# A

heartRate = int(input("Enter patient's heartrate : "))
BP = int(input("Enter patient's blood-pressure : "))
if(heartRate < 60): print("Low heartRate")
elif(heartRate>100): print("High heartRate")
else: print("Normal heartRate")

if(BP<80): print("Low BP")
elif(BP<120): print("Normal BP")
elif(BP<130):print("Elevated BP")
elif(BP<140):print("Stage 1 Hypertension")
elif(BP<180): print("Stage2 Hypertension")
else: print("Hypertension crisis")




# B

while(True):
    password = input("Please enter your password: ")
    characters = 0
    upperCase = 0
    number = 0
    for i in password:
        if(i<='9' and i>='0'): number = 1
        if(i>='A' and i<='Z'): upperCase = 1
        characters+=1


    if(number == 1 and upperCase == 1 and characters>=8): 
        print("You have entered a valid password.")
        break
