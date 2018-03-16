# argv is the "argument variable", a very standard name used in many languages
# import is used to get Modules (ie. features ie. libraries) you want to use in your Python script
from sys import argv

# This line unpacks argv so rather than holding all the arguments, it gets assigned to four variables
script, first, second, third = argv

print "The script is called:", script
print "Your first variable is:", first
print "Your second variable is:", second
print "Your third variable is:", third
