def game()

    randnum = rand(1..100)
    trys = 0


    while true


        puts "----------Number Guessing Game----------"
        puts "Type 0 at any time to quit!"
        puts "----------------------------------------"

        print "Enter a number (1-100): "

        innum = gets().chomp()


        if randnum == innum.to_i

            puts "You win!"
            puts "It took your #{trys} trys!"
            return true

        else

            if innum.to_i > randnum

                puts "Lower!"


            elsif innum.to_i == 0

                puts "The number was #{randnum}!"
                puts "You had #{trys} trys!"
                return false


            elsif innum.to_i < randnum

                puts "Higher!"

            end


        end

        trys += 1



    end




end

while game()
   
    print "Do you want to play again? (y or n): "

    dostop = gets().chomp()

    if dostop == "n"

        break

    end


end

puts "Goodbye!"
