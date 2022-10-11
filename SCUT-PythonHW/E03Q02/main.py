# encoding utf-8
# E03Q02

def strip(content, args):
    

print("\"" + strip("   abc   ") + "\"")
print("\"" + strip("   abc   ", "both") + "\"")
print("\"" + strip("   abc   ", "left") + "\"")
print("\"" + strip("   abc   ", side="right") + "\"")
print("\"" + strip("aaadefccc  ", blanks=["a", "c", " "]) + "\"")
