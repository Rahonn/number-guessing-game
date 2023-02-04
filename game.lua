math.randomseed(os.time())

local function game()
    
    local randnum = (math.floor(math.random() * 100) + 1)
    local trys = 0

    while true do
        
        print("----------Number Guessing Game----------")
        print("Type 0 at any time to quit!")
        print("----------------------------------------")

        print("Enter a number (1-100): ")

        local innum = tonumber(io.read())

        if randnum == innum then
            
            print("You win!")
            print("It took your " .. trys .. " trys!")
            return true

        else

            if innum > randnum then
                
                print("Lower!")

            elseif innum == 0 then

                print("The number was " .. randnum .. "!")
                print("You had " .. trys .. " trys!")
                return false

            elseif innum < randnum then

                print("Higher!")

            end

        end

        trys = trys + 1

    end

end

while game() do
    
    print("Do you want to play again? (y or n): ")
    local dostop = io.read()

    if dostop == "n" then
    
        break

    end

end
