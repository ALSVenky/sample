class human:
    # class attribute
    gender="male"
    
    def __init__(self,name):
        self.name=name
        # self.gender=gender
    def lang(self,lang):
        #self.lang="english"
        print("I can speak {}".format(lang))

        
person1=human("venky")
print("venky is a {0}".format(person1.__class__.gender))
print("his name is {0}".format(person1.name) )      
person1.lang("english")
       
