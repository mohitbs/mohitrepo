# termcolor is a python module for ANSII Color formatting for output in the terminal
# Installation: pip install termcolor
from termcolor import colored, cprint

print(colored("I'm Mohit", 'red'))

print_red = lambda x: cprint(x,'red')
print_green = lambda x: cprint(x, 'green')

print_red("I am red")
print_green("I am green")
print_red("Wooho! I am red again")
