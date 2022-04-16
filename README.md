# Fantasy Fighting Game

---
## Overview
This was the project I did for my CST-210 class, and this was the first time I had to make a project on this scale,
and after getting it done I can still see some things that could be improved about it.

---
## Objective
Create a Fantasy Fighting Text-Based Game and:
* Utilize functions to decomposed complex tasks. 
* Utilize polymorphic variables. 
* Consist of two main elements: a store to buy equipment (better weapons, better armor) and an arena in which to fight for money. 
* Provide the ability to save player progress. 
* Provide the ability to load player progress.
* Provide the ability for the player to view their character sheet at will.

---
## Purpose
* Selecting and designing objects found in a real world. 
* Using inheritance and composition to build classes. 
* Coordinating logical interactions between objects to model. 

---
## My Approach
---
### UML Diagram
![DmytroBondar_FantasyFightingGame_UML(3)](https://user-images.githubusercontent.com/59861277/163662888-178e8fbf-39d8-4ac5-9e98-7845bed94f8b.png)
All the classes eventually connect in the class `Game`, which connects `Character`, `Arena`, and the `Shop` classes.

---
### Screenshots / Game Demonstration

---
#### Game Launch
* In this game I wanted to expirement see when objects are created and destroyed.
* So the first lines are going to be telling the user which objects are being created.
* When game is launched, this is what the user will see
<img width="356" alt="Screen Shot 2022-04-15 at 10 35 41 PM" src="https://user-images.githubusercontent.com/59861277/163663051-e068adab-831f-41f9-89d4-7bcc3d6f6173.png">

---
#### Create New Character
* To create a new character user has to type in option "1" and press Enter
* The following menu will offer the user to name their character, 
<img width="346" alt="Screen Shot 2022-04-15 at 10 41 32 PM" src="https://user-images.githubusercontent.com/59861277/163663237-acb529e0-b9dc-45d7-a649-c28e07c000b8.png">
* And once the user types in the name of the character, the user will notified in the following way,
<img width="481" alt="Screen Shot 2022-04-15 at 10 42 48 PM" src="https://user-images.githubusercontent.com/59861277/163663270-3ebd4966-8a01-459c-a7a2-c96d4e571c77.png">

---
#### Load Character
* To load the existing character user has to type in optin "2" and press Enter
* The character will be loaded from a save file in that case, notifying the user about it.
<img width="454" alt="Screen Shot 2022-04-15 at 10 46 25 PM" src="https://user-images.githubusercontent.com/59861277/163663384-a547f176-c9f3-400b-af6d-a93be053f6f7.png">

---
#### Main Menu
* Main Menu has the following options:
<img width="329" alt="Screen Shot 2022-04-15 at 10 47 51 PM" src="https://user-images.githubusercontent.com/59861277/163663409-69e6db74-8d42-4ae2-9de3-7eec2db7393f.png">

---
##### Character Info Sheet

* BEFORE purchasing any weapons/armor
<img width="254" alt="Screen Shot 2022-04-15 at 11 02 47 PM" src="https://user-images.githubusercontent.com/59861277/163663813-83a6f69c-e17c-4ef3-a114-3fddac35e2b3.png">

* AFTER purchasing weapon and armor
<img width="280" alt="Screen Shot 2022-04-15 at 11 18 04 PM" src="https://user-images.githubusercontent.com/59861277/163664232-e945b340-1b66-4bc3-97bb-c54af8cc6201.png">
  
---
##### Shop
* When the user enters shop, they will see the following Shop Menu
<img width="292" alt="Screen Shot 2022-04-15 at 11 06 21 PM" src="https://user-images.githubusercontent.com/59861277/163663904-f3fb8410-5275-43ca-8097-8b1952e534cf.png">

* From here user can choose what to shop for, `Weapons` or `Armor`, or go back to the main menu.

* IF the user chooses weapons, they will see all the weapons avaliable to be purchased
* And the user will be able to choose which weapon they would like to buy
* Also, if user decices to go back to the Shop Menu, without buying anything, they have the option to do so.
<img width="416" alt="Screen Shot 2022-04-15 at 11 10 38 PM" src="https://user-images.githubusercontent.com/59861277/163664020-8b9a0b48-e7be-49a8-9fb1-e43d3e3986dd.png">

* IF the user chooses armor, they will see all the armor avaliable to be purchased
* And the user will be able to choose which armor they would like to buy
* Also, if the user decices to go back to the Shop Menu, without buying anything, they have the option to do so.
<img width="415" alt="Screen Shot 2022-04-15 at 11 12 10 PM" src="https://user-images.githubusercontent.com/59861277/163664061-9295261c-bca6-4f2c-9cb1-16ea7c7a7525.png">

---
##### Arena
* When the user enters arena, they will see the following Arena Menu
<img width="277" alt="Screen Shot 2022-04-15 at 11 19 24 PM" src="https://user-images.githubusercontent.com/59861277/163664263-254e1950-8975-4d41-8578-24c18e264f09.png">


* From the Arena Menu, the user can View Enemies:
<img width="359" alt="Screen Shot 2022-04-15 at 11 20 09 PM" src="https://user-images.githubusercontent.com/59861277/163664281-2c2b88cc-61fa-4d72-82fc-e10e36678b8e.png">

* Fight certain `Enemy`, for example the `Ghost` and get rewarded in case they defeat that enemy.
*After the fight, the Character health gets reset back to 100
<img width="408" alt="Screen Shot 2022-04-15 at 11 21 07 PM" src="https://user-images.githubusercontent.com/59861277/163664301-6f877040-4358-4b60-a018-bc8fa95232c9.png">

* or the user can choose to come back to the Main Menu.

---
##### Save and Quit
