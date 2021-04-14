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

$(PROJECT_NAME) : $(SRC)
				gcc -I $(INC) $(SRC) -o all.exe

run: $(PROJECT_NAME)
		$(PROJECT_NAME)

clean:
	del /q *.exe