class Camp:
	def sayHello(self):
		return "\nHello Mom \n Hello Dad"

def sayCampHello():
	camp = Camp()
	print ("Hello: " + camp.sayHello())

if __name__ == "__main__": 
	sayCampHello()