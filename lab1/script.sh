# Create the directory structure
mkdir -p BITS/Pilani/P_Dept/CSIS
mkdir -p BITS/Pilani/P_Dept/ECE
mkdir -p BITS/Hyderabad/H_Dept/Mech
mkdir -p BITS/Hyderabad/H_Dept/IE
mkdir -p BITS/Goa/G_Dept/Phy
mkdir -p BITS/Goa/G_Dept/Chem

# Create f1.txt
touch BITS/Pilani/P_Dept/CSIS/f1.txt
touch BITS/Goa/G_Dept/Phy/f1.txt

# Create f2.txt
cat > BITS/Pilani/P_Dept/ECE/f2.txt <<EOF
a
b
c
d
e
f
g
h
i
j
EOF

# Copy content of f2.txt into f4.txt using cp
cp BITS/Pilani/P_Dept/ECE/f2.txt BITS/Hyderabad/H_Dept/Mech/f4.txt

# Print names starting from the 4th line in f4.txt
echo "Students from line 4 onwards in f4.txt:"
tail -n +4 BITS/Hyderabad/H_Dept/Mech/f4.txt

# Remove the ECE directory
rm -r BITS/Pilani/P_Dept/ECE