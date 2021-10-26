# tqdm module enables creating progress bars
# Documentation: https://github.com/tqdm/tqdm
# Installation:pip install tqdm

from tqdm import tqdm
from time import sleep
text = ""
for char in tqdm(["a", "b", "c", "d"]):
    sleep(0.25)
    text = text + char

from tqdm import trange
for i in trange(100):
    sleep(0.01)

pbar = tqdm(["a", "b", "c", "d"])
for char in pbar:
    sleep(0.25)
    pbar.set_description("Processing %s" % char)

with tqdm(total=100) as pbar:
    for i in range(10):
        sleep(0.1)
        pbar.update(10)

pbar = tqdm(total=100)
for i in range(10):
    sleep(0.1)
    pbar.update(10)
pbar.close()