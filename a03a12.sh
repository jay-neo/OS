reverse_number() {
  num=$1
  reversed=0

  while [ $num -gt 0 ]; do
    digit=$((num % 10))
    reversed=$((reversed * 10 + digit))
    num=$((num / 10))
  done

  echo "The reverse of $1 is $reversed"
}

if [ $# -eq 0 ]; then
  echo "No command line parameters pass"
  exit 1
fi

reverse_number "$1"
