# This is a quick simple game

def first_room():
    print "You are inside first room."

    choice = raw_input("What do you want to eat? > ")

    print "You choose %s , but your choice dosen't matter" % choice
    print "You get nothing. Off to room 2 now"
    second_room()

def second_room():
    print "You are inside second room."

    choice = raw_input("What do you want to play? > ")

    print "You choose %s , but your choice dosen't matter" % choice
    print "You play nothing. Off to room 2 now"
    third_room()
    
def third_room():
    print "You are inside third room."

    choice = raw_input("Where do you want to stay? > ")

    print "You choose %s , but your choice dosen't matter" % choice
    print "Get Lost"
    exit(0)

first_room()
