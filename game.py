import random

def game():

    mynum = random.randint(1, 100)
    
    trys = 0
    
    print("----------Number Guessing Game----------")
    print("Type 0 at any time to quit!")
    print("----------------------------------------")
    
    
    while True:
        
        inmum = int(input("Enter a number (1-100): "))
        
        if inmum == mynum:
            
            print("You win!")
            print(f"It took you {trys} trys!")
            return True
        
        elif inmum == 0:
            
            print(f"The number was {mynum}!")
            print(f"You had {trys} trys!")
            return False
            
        else:
            
            if inmum > mynum:
                
                print("Lower!")
                
            elif inmum < mynum:
                
                print("Higher!")
        
        trys += 1
        
        

while game():
    
    dostop = input("Do you want to play again? (y or n): ")
    
    if dostop == "n":
        
        break
        
    
print("Goodbye!")