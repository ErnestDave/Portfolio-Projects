##import sys
  
# initializing string 
#test_string = "Dave is here" 
  
# printing original string 
#print("The original string : " + str(test_string))
  
# using sys.getsizeof()
# getting size of string in bytes
#res = sys.getsizeof(test_string)
      
# print result
#print("The length of string in bytes : " + str(res))
Apple = "Green, Red, Granny"
word_sample = [ Apple,"Berries","Cherry","Dates","Elderberrt","Fig","Grape","HoneyDew"] 
print(word_sample)
word_sample1 = []
print(word_sample1)
word_sample1[:] = word_sample
print(word_sample1)
print(len(word_sample))
