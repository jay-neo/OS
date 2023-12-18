echo -n "Enter a string : " 
read str  
u=0  
l=0  
v=0  
d=0  
s=0  
L=`expr length "$str"`  
for ((i=1; i<=L; i++))  
do
    ch=`expr substr "$str" $i 1`  
    case $ch in  
        a|e|i|o|u)  
            let v=$v+1  
            let l=$l+1;;  
        A|E|I|O|U)  
            let v=$v+1  
            let u=$u+1;;  
        [a-z])  
            let l=$l+1;;  
        [A-Z])  
            let u=$u+1;;  
        [0-9])  
            let d=$d+1;;  
        *)  
            let s=$s+1 ;;  
    esac  
done  
echo String length = $L 
echo Number of vowels = $v 
echo Uppercases = $u 
echo Lowercases = $l 
echo Number of digits = $d 
echo Special characters = $s 