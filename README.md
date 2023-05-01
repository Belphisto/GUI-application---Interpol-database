# GUI-application---Interpol-database
A program for working with the Interpol database, which contains information about each criminal and criminal gangs. The program provides a search in the database according to specified criteria, selects according to any subset of the set of criteria, allows you to edit and supplement the database. 

# data description
The implementation of the solution is based on the data structure vector. The Interpol card index consists of three vectors: "archive", "active" and "groupings". The "archive" vector stores information about each committed criminal (it is understood that he does not belong to any groupings).
no longer belongs). The "active" vector stores information about criminals.
Each criminal can have several special signs, know several languages. The "grouping" vector stores information about the name, type and members of the grouping. Access to the accomplices of the criminal is carried out through groups.

Information on all active, archived criminals and groups is stored in the files DateinterpolCriminals.json, DateinterpolArchive.json and DateinterpolGangs.json, respectively. The division into files is carried out in order to improve the performance of data reading.

# The application consists of five window forms:
1. Starting window of the program (welcome screensaver, information about the developer, buttons for moving through window forms for working with information). 
![image](https://user-images.githubusercontent.com/100871374/235442595-1d724d0c-5389-4af4-a0a0-863e60877ba8.png)

2. Window for adding a new criminal/group to the database.
![image](https://user-images.githubusercontent.com/100871374/235442687-33f93169-f44e-4660-b1da-6d22d8faf5e6.png)

3. A window for viewing the database of all criminals / groups (including sampling by specific parameters).
![image](https://user-images.githubusercontent.com/100871374/235442665-5021b86a-5e21-4314-a70c-4528a664cfd8.png)

4. Window for viewing records in the archive.
![image](https://user-images.githubusercontent.com/100871374/235442638-c867d8a7-ce94-4964-8796-e3fa63d52db9.png)

5. Window for editing the offender (changing parameters, moving to the archive / deleting the record).
![image](https://user-images.githubusercontent.com/100871374/235442717-05522f6c-04a2-4074-aa94-2a3eb069bd5d.png)


