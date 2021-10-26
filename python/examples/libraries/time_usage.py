# time is a module is part of python standard library
# time allows us to handle various operations regarding time, its conversions and representations

import time

# seconds passed since epoch
seconds = time.time()
print("Seconds since epoch =", seconds)

local_time = time.ctime(seconds)
print("Local time:", local_time)

# sleep() function suspends (delays) execution of the current thread for the given number of seconds
print("This is printed immediately.")
time.sleep(2.4)
print("This is printed after 2.4 seconds.")

# Python time.localtime()
result = time.localtime(1545925769)
print("result:", result)
print("\nyear:", result.tm_year)
print("tm_hour:", result.tm_hour)

# Python time.gmtime()
result = time.gmtime(1545925769)
print("result:", result)
print("\nyear:", result.tm_year)
print("tm_hour:", result.tm_hour)

# Python time.mktime()
t = (2018, 12, 28, 8, 44, 4, 4, 362, 0)
local_time = time.mktime(t)
print("Local time:", local_time)