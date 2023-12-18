echo -n "Enter the size of array = "
read n

echo Enter the array elements:
for((i=0; i<n; i++))
do
    read arr[i]
done


for((i=1;i<$n;i++))
do
    m=${arr[i]}
    j=$((i-1))
    while [ $j -ge 0 -a $m -le ${arr[j]} ]
    do
        arr[j+1]=${arr[j]}
        j=$((j-1))
    done
    arr[j+1]=$m  
done


echo Sorted array is:
for((i=0; i<n; i++))
do
    echo -n "${arr[i]} "
done
echo