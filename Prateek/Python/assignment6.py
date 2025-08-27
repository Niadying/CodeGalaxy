def generate_slips():
    with open("employees.txt", "r") as f:
        for line in f:
            data = line.split()
            name, hours, rate = data[0], int(data[1]), int(data[2])
            salary = hours * rate
            with open(name + "_slip.txt", "w") as slip:
                slip.write("Salary Slip\n")
                slip.write("Name: " + name + "\n")
                slip.write("Hours Worked: " + str(hours) + "\n")
                slip.write("Rate: " + str(rate) + "\n")
                slip.write("Total Salary: " + str(salary) + "\n")

generate_slips()
print("Salary slips generated.")
