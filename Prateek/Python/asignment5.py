# Q1.   

# weightLimit = []
# for i in range(5):
#     weight = int(input("Enter the weight of the item: "))
#     weightLimit.append(weight)



# Q2.

# value = ((1,"My great grandfather"), (2,"My grandfather"), (3,"My father"), (4,"Me"), (5,"My Son"))

# personIndex = int(input("Enter the index of the person (1-5): "))
# index = 0

# def reccursive(value, personIndex,index):
#     if index < personIndex:
#         print(value[index][1])
#         reccursive(value, personIndex,index + 1)
#     return

# if(personIndex < 2):
#     print("No ancestors found")
# else:
#     reccursive(value, personIndex-1,index)




# Q3.

# days = int(input("Enter the number of days: "))

# fine = []
# cnt = 0

# for i in range(days):
#     if(cnt<5):
#         fine.append(2)
#     elif(cnt<10):
#         fine.append(5)
#     else:
#         fine.append(10)
#     cnt += 1


# def sumOfFine(fine, index):
#     if index < len(fine):
#         return fine[index] + sumOfFine(fine, index + 1)
#     return 0

# totalFine = sumOfFine(fine, 0)
# print("Total fine is: ", totalFine)



#  Q4.

# seats = ((1,"notBooked"), (2,"notBooked"), (3,"booked"), (4,"notBooked"), (5,"booked"),
#          (6,"booked"), (7,"booked"), (8,"notBooked"), (9,"booked"), (10,"booked"), (11,"notBooked"), (12,"booked"))

# searNumber = int(input("Enter the seat number to book: "))

# for i in range(len(seats)):
#     if(i== searNumber - 1):
#         if(seats[i][1] == "notBooked"):
#             print("Seat is not booked")
#         else:
#             print("Seat is already booked")

# def countBookedSeats(seats, index, count):
#     if index < len(seats):
#         if seats[index][1] == "booked":
#             count += 1
#         return countBookedSeats(seats, index + 1, count)
#     return count

# count=0
# print("Total booked seats are: ",countBookedSeats(seats, 0,count))

# Q5.

