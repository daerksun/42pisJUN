cat /etc/passwd | grep -v "#" | awk '{if(NR%2==1)print}' |cut -d : -f1,8 | rev | sort -M -r | awk '{if (NR>='$FT_LINE1' && NR<='$FT_LINE2')print}' | tr "\n" , | rev | sed -e "s/,/./" | rev
