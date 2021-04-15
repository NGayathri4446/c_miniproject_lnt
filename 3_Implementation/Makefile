PROJ_NAME = student
SRC = src\addStudentInDataBase.c\
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

cppcheck:

		cppcheck --enable=all $(SRC) main.c

debug:

		gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
		gdb $(PROJ_NAME).$(EXEC
