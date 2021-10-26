# pyfiglet takes ASCII text and renders it in ASCII art fonts
# Installation: pip install pyfiglet

import pyfiglet

result = pyfiglet.figlet_format("Mohit")
print(result)

result = pyfiglet.figlet_format("Mohit", font = "slant"  )
print(result)

result = pyfiglet.figlet_format("M o h i t", font = "5lineoblique" )
print(result)

result = pyfiglet.figlet_format("Mohit", font = "isometric1" )
print(result)

result = pyfiglet.figlet_format("M o h i t", font = "alligator" )
print(result)