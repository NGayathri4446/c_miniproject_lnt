PROJECT_NAME = all.exe
SRC = main.c\
src\addStudentInDatabase.c\
src\deleteStudent.c\
src\headMessage.c\
src\init.c\
src\isFileExists.c\
src\IsLeapYear.c\
src\isNameValid.c\
src\isValidDate.c\
src\login.c\
src\menu.c\
src\printMessageCenter.c\
src\searchStudent.c\
src\updateCredential.c\
src\viewStudent.c\
src\welcomeMessage.c

INC = inc

all:
	gcc -I $(INC) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC)

clean:
	del /q *.exe
