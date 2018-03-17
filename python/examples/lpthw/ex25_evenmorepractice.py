def break_words(stuff):
    """This function will break up words for us."""
    words = stuff.split(' ')
    return words

def sort_words(words):
    """Sorts the words"""
    return sorted(words)

def print_first_word(words):
    """Prints the first word after popping it off."""
    word = words.pop(0)
    print word

def print_last_word(words):
    """Prints the last word after popping it off."""
    word = words.pop(-1)
    print word

def sort_sentense(sentense):
    """Takes in full sentense and returns the sorted words."""
    words = break_words(sentense)
    return sort_words(words)

def print_first_and_last(sentense):
    words = break_words(sentense)
    print_first_word(words)
    print_last_word(words)

def print_first_and_last_sorted(sentense):
    """Sorts the words then prints first and last one."""
    words = sort_sentense(sentense)
    print_first_word(words)
    print_last_word(words)


