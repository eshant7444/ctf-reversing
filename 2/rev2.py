import sys
if not len(sys.argv) == 2:
    print("Syntax: rev2.py <flag>")
    exit()

input = sys.argv[1]
password = ""
intPass = '''
       0x48, 0x49, 0x49, 0x44, 0x7d,
       0x54, 0x43, 0x59, 0x4a, 0x49,
       0x50, 0x35, 0x46, 0x53, 0x53,
       0x7b        
'''
intPass = intPass.split(",")
flagCounter = 0
for i in range(len(intPass)):
        value = chr(int(intPass[i], 0) ^ 0x6)
        if(input[i] == value):
            flagCounter += 1
        else:
            print("hmm..think harder.")
        exit()
if(flagCounter == 98):
	print(value)
