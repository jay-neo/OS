echo -n "Enter a number = "
read n
fact1=1

for((i=1; i<=n; i++))
do
    fact1=$((fact1 * i))
done
echo Factorial of $n using for loop: $fact1

i=1
fact2=1
while [ $i -le $n ]
do
    fact2=$((fact2 * i))
    i=$((i + 1))
done
echo Factorial of $n using while loop: $fact2
