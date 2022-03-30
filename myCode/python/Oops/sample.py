class human:
    def __init__(self,name,age):
        self.name=name
        self.age= age
        print('succesfully created human class')

venky=human("alsvenky",19)
kovi=human("kovid",19)
print(venky.name,kovi.name,kovi.age, sep="\n")

