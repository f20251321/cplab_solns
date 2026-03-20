
# 3
mkdir ~/dir1

# 3a.
cd ~/dir1

# 3b.
touch file1 file2
cat > file3 <<EOF
EOF

# 3c.
mkdir dir1-1

# 4.
ls -R ~/dir1

# 5.
rmdir dir1-1

# 6.
rmdir ~/dir1 2>&1 || echo "Cannot remove dir1: directory is not empty"

# 7.
ls -l > dirfile

# 8.
cat dirfile

# 9.
who > userlist
cat userlist

# 10.
cat dirfile userlist > file1

# 11.
wc file1

# 12.
cp file1 file2

# 13.
echo "This is file2." >> file2
echo "And I am using Linux!" >> file2
cat file2