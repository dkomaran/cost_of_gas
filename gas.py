milage=float(input("Enter milage L/100: "))
cost=float(input("Enter cost of gas in $/L: "))
distance=float(input("Enter distance travelled in km: "))
answer=milage / 100 * distance * cost

print("Total cost of trip =")
print("$","{:0.2f}".format(float(answer)))
print("to drive",distance,"kilometers")
