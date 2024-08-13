# Write a script that generates a secure random password

#!/bin/zsh

generate_password() {
	tr -dc 'A-Za-z0-9!@#$%^&*()_+{}[]' < /dev/urandom | fold -w 12 | head -n 1
}

password=$(generate_password)
echo “Generated password: $password”
