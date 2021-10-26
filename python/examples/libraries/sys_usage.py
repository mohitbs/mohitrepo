# sys module provides access to some variables used or maintained by the interpreter
# and to functions that interact strongly with the interpreter

import sys

print (sys.version)

print (sys.argv)
for i in range(len(sys.argv)):
    if i == 0:
        print("Function name: ", sys.argv[0])
    else:
        print(f"{i:1d}. argument: {sys.argv[i]}")

print (sys.maxsize)

print (sys.path)

print(sys.modules)

sys.stdout.write('Geeks \n')

def print_to_stderr(*a):
    # Here a is the array holding the objects
    # passed as the argument of the function
    print(*a, file=sys.stderr)

print_to_stderr("Hello World")

sys.exit("We are done here!")
