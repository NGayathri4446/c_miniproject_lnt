PROJ_NAME=student
SRC=\addStudentInDatabase.c\
	deleteStudent.c\
	headMessage.c\
	init.c\
	isFileExists.c\
	IsLeapYear.c\
	isNameValid.c\
	isValidDate.c\
	login.c\
	menu.c\
	printMessageCenter.c\
	searchStudent.c\
	updateCredential.c\
	viewStudent.c\
	welcomeMessage.c
INC_H = inc
ifdef OS
	RM = del
	FixPath = $(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell uname), Windows)
		RM = rm -rf
		FixPath = $1
			EXEC = out
	endif
endif
.PHONY: run clean test doc all

all:
		
		gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run:

		$(call FixPath,$(PROJ_NAME).$(EXEC))
