groceryStore = (("Coca Cola",45),("Pepsi",50),("Chips",20),("Apple",200),("Banana",60),("Mango",200))
print("Enter the items ")
demands = input()
bill = 0

for i in range(len(groceryStore)):
    if(groceryStore[i][0]==demands):
        print("Enter the quantity")
        quantity = int(input())
        bill = groceryStore[i][1] * quantity

if(bill==0):print("Item isn't available.")
else:print(bill)

