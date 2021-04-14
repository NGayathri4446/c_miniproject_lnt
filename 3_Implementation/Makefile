<<<<<<< HEAD
PROJECT_NAME = student
SRC = src\addStudentInDatabase.c\
=======
PROJ_NAME = student


SRC = main.c\
src\addStudentInData
>>>>>>> 31b8566b93e67b4761e4ba566fa6268f6178f3a7
src\deleteStudent.c\
src\headMessage.c\
src\init.c\
src\isFileExists.c\
src\IsLeapYear.c\
src\isNameValid.c\
src\isValidDate.c\
src\login.c\
src\menu.c\
src\printMessageCent
src\searchStudent.c\
src\updateCredential
src\viewStudent.c\
src\welcomeMessage.c


<<<<<<< HEAD
INC_H = inc


=======


INC_H = inc


>>>>>>> 31b8566b93e67b4761e4ba566fa6268f6178f3a7
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
<<<<<<< HEAD
	$(call FixPath,$(PROJ_NAME).$(EXEC))
=======
	$(call FixPath,$(PROJ_NAME).$(EXEC))
>>>>>>> 31b8566b93e67b4761e4ba566fa6268f6178f3a7
