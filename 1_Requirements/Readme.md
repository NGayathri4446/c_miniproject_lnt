 <h1>Requirements
   <h2>Introduction
	<h5>The Student Management System is an application which is useful for schools,colleges,universities to know about every student information.
	<h5>It is not easy to maintain hundreds of students information in a paper or book and we can't keep them safe.The easiest way is to store them in database so that whenever we want we can access them. 
<h2>Research
<h3>Student Management System Features 


   <h5>1. Admission Management:   The admission management module streamlines and automates every aspect of the admission process, including filling up online forms, fee submission, batch allotment, and document submission


   <h5>2. Attendance Management:This module allows teachers to mark and view attendance of any respective students. Using the system, they can even share the attendance status of a student with their respective parents.It also keeps track of staff members’ complete attendance records.
   
   
   <h5>3. Document Management:Document management allows you to upload/enter complete students’ details. It includes contact details, parents’ details, report cards, health details, and more. All information is safely kept 


   <h5>4. Fee Management:It helps you manage all the fee-related tasks such as accepting fees, keeping fee records, maintaining receipts, taking care of dues and refunds, and more. It also allows you to create the fees cycle of the school 
	
	
<h4>State of Art
	
S.No |	Ageing-Time & Cost |Time
------|-------------------|-----
1 |	Ageing-Time |	10days
2 |	Ageing-Cost |	There should be a persnol computer with required software tools and internet.	
	

		
<h2>Defining Our System

<h3>Explanation:
	<h4>Student Record Application have few inbuilt features like:
	  <h5>1.Addition of new student
	  <h5>2.Searching of a student
	  <h5>3.View student information
	  <h5>4.Delete existing student
          <h5>5.Update password of existing student
	  

<h4>Since we have assumed that few systems already exists we can say that in future sprints new features could be added.
	
<h2>SWOT ANALYSIS
	
	
![Konsus SWOT Design 03-16 9](https://user-images.githubusercontent.com/59175027/114694465-2df9b100-9d38-11eb-9c17-0692466a5ef2.jpg)


<h2>4W's and 1'H
<h3>Who:
	<h5>Small and medium size record systems providing services to schools,colleges,universities etc..
<h3>What:
	<h5>Many schools and colleges have difficulty in maintaining student records,this record system will help them in maintaining and accessing student information.
<h3>When:
	<h5>This problem began in hundred years ago only .Many record systems also came into existence. 
<h3>Where:
	<h5>This problem is expected to surface in all states of India.
<h3>How:
	<h5>This problem may cause ineffective record management and hence there can be a huge amount of time wastage. 
		


<h1>Detail Requirements

   <h5>High Level Requirements

ID  |	Description  |	Category   |	Status
---- |-------------- |------------- |----------
HR01 |	User shall be able to add new student record |	Techincal  |	IMPLEMENTED
HR02 |	User shall be able to search a student record |	Techincal  |	IMPLEMENTED
HR03 |	User shall be able to view a student record   |	Techincal   |	IMPLEMENTED
HR04 |	User shall be able to delete a student record |	Techincal   |	IMPLEMENTED
HR05 |	User shall be able to save records in a file  |	Techincal   |	IMPLEMENTED
HR06 |	User shall be able to read data from a file |	Techincal   |	IMPLEMENTED
HR07 |	Data should not be lost in case of faliure  |	Scenario    |	FUTURE
HR08 |	Data should always be stored when closing the system |	Scenario |	IMPLEMENTED


<h5>Low level Requirements

ID  |	Description |	HLR ID |	Status (Implemented/Future)
---- |-------------- |-------- |-----------------------------------
LR01 |	(1). New record shall be added by providing all the asked information (2). Id should be unique and validated from persistant file or else student record should not be accepted. |	HR01 |	IMPLEMENTED
LR02 |	Reading student data should be possible in 2 ways (1). first being by searching by id of a student (2). By printing all the records available |	HR02 |	IMPLEMENTED
LR03 |	While reading all the records, only 10 records per page should be visible and should add 10 more if user wants to see more |	HR02 |	FUTURE
LR04 |	If user searches for an invalid ID "No Record" message should be displayed |	HR02 |	IMPLEMENTED
LR05 |	User need to search by id for the student record to view, if no such record is available then "No Record Found" Message should be displayed |	HR03 |	IMPLEMENTED
LR06 |	User need to search by id for the student record to be deleted, if no such record is available then "No Record Found" Message should be displayed |	HR04 |	IMPLEMENTED
LR05 |	User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file |	HR05 |	IMPLEMENTED
LR06 |	If opening the file fails, then the system shloud prompt the message "Unable to access file" and should not end the program execution |	HR05, HR06, HR07, HR08 |	IMPLEMENTED
LR07 |	When user Log off the system perform check and save data to file (1). If new data in inserted add it to file (2). If New data is not inserted do not add anything to file | HR08  |	IMPLEMENTED



