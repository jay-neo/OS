echo -n "Enter the number of row = "
read r

for((i=1; i<=$r; i++))
    do
        for((j=1; j<=$i; j++))
            do
                echo -n "* "
            done
        echo
    done
