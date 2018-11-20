<img src="https://upload.wikimedia.org/wikipedia/fr/thumb/f/f8/Logo_ECE_Paris.svg/1280px-Logo_ECE_Paris.svg.png" width="300px" />

# MEMS project
___
## Introduction
This project hosts the MEMS project.
It has all the basic initialization for the project to run on the STM32F401RE Nucleo board and the X-NUCLEO-IKS01A1 Motion MEMS and environmental sensors board.

You will find information concerning this new board on:
IKS01A1 [http://www.st.com/en/ecosystems/x-nucleo-iks01a1.html](http://www.st.com/en/ecosystems/x-nucleo-iks01a1.html)
IKS01A2 [http://www.st.com/en/ecosystems/x-nucleo-iks01a2.html](http://www.st.com/en/ecosystems/x-nucleo-iks01a2.html)

As for the Nucleo board, you will find samples of code ([http://www.st.com/en/embedded-software/x-cube-mems1.html](http://www.st.com/en/embedded-software/x-cube-mems1.html)).

___
## Tips
Two application modules have been added, MEMS, Motion :

- MEMS: Abstracts the access to the sensors' data
- Motion: Abstracts the treatment of the sensors' data

MEMS has functions called when new data are available, they are defined as __weak, they can be overloaded.

Motion has functions that have to be called when a specific motion has been detected.

To build the project you need to :
1 - Select the board you are using : USE_IKS01A1_NUCLEO or USE_IKS01A2_NUCLEO
2 - Re-include BSP component corresponding to the board you are using.
    a - Right click on IKS01A1 or IKS01A2 folder "Resource Configurations > Excluse from build..."
    b - On the new windows click on "Deselect All" button
    c - Close the windows by clicking on "Ok" button
___
## Session 3
The objective is to manipulate and get familiar with the X-NUCLEO-IKS01A1 board, to analyse sensed data and determine defined motions. 

**The work will have to be pushed on gitlab via git.**
### Pre-requisites
A Gitlab account must have been created for each student.
Each team must be constituted of 2 members.

### Instructions
This session's work will be based on a specific git repository. Every team will have its own git project. You will clone it. 
Those projects have been attributed before the start of this session. 

All work will be synchronized on this repository and on a specific GIT branch. 
You will have to commit regularly for us to be able to evaluate your work. 

#### Evaluation:
This work will be evaluated through the code of this repository and this repository only. So beware to push all your code for every exercise and at the end of the session (even unfinished work).

Evaluation will be based on :

- Exercices completion
- Exactitude of GIT branch and GIT tag naming
- Commits' logic
- Clean code (well written, logic and explicit variables and functions naming, useful comments if and only if needed)
- Time taken to finish an exercice

#### This session's objective:
Detect movements using the data returned by the Accelerometer sensor.

-> implement the code to obtain the following behavior on the board : 

- Detect angles of inclination on left/right and back/front axis
- Detect when the board goes up and down


#### Global instructions:
**Make sure you commit your code at every step of the exercise (or more, but not less...).**

First be sure that your project and environment is good, import the project, compile it and run it on the board.
	
a. Clone the project : `git clone <this project's URL>` (if you're reading this, then you know this URL)

b. Import it into your properly set Eclipse environment
	
c. Build & Debug and make sure everything is fine before starting to code.

This time, we'll use a single branch and use tags to mark our Exercises's progression. (In last session (Poke A Mole), we used one branch per exercise).
**All your work will have to be commited in a single branch "mems", to create a branch and position yourself on it:** `git checkout -b mems`

**For each exercise you will have to create a tag on the final commit of the exercise :** `git tag exerciseX`

#### Exercise 1
**Objective : Detect inclinations modifications.**

1. Print data of the axis X, Y and Z axis of the accelerometer in the motion module using mems api.
2. Detect inclinations' angle modifications on left/right and back/front axis (Only inclination modifications):
	- Call the function, **Motion\_InclinationLeftRightAxisNone_CB**, when the left/right axis changes to have no inclination compared to the horizontal plan.
	- Call the function, **Motion\_InclinationLeftRightAxisLeftMedium_CB**, when the left/right axis changes to have an angle of 30° to the left compared to the horizontal plan.
	- Call the function, **Motion\_InclinationLeftRightAxisLeftHigh_CB**, when the left/right axis changes to have an angle of 60° to the left compared to the horizontal plan.
	- Call the function, **Motion\_InclinationLeftRightAxisRightMedium_CB**, when the left/right axis changes to have an angle of 30° to the right compared to the horizontal plan.
	- Call the function, **Motion\_InclinationLeftRightAxisRightHigh_CB**, when the left/right axis changes to have an angle of 60° to the right compared to the horizontal plan.
	- Call the function, **Motion\_InclinationBackFrontAxisNone_CB**, when the back/front axis changes to have no inclination compared to the horizontal plan.
	- Call the function, **Motion\_InclinationBackFrontAxisBackMedium_CB**, when the back/front axis changes to have an angle of 30° to the back compared to the horizontal plan.
	- Call the function, **Motion\_InclinationBackFrontAxisBackHigh_CB**, when the back/front axis changes to have an angle of 60° to the back compared to the horizontal plan.
	- Call the function, **Motion\_InclinationBackFrontAxisFrontMedium_CB**, when the back/front axis changes to have an angle of 30° to the front compared to the horizontal plan.
	- Call the function, **Motion\_InclinationBackFrontAxisFrontHigh_CB**, when the back/front axis changes to have an angle of 60° to the front compared to the horizontal plan.

#### Exercise 2
**Objective : Detect up and down movement.**
 
Move the board up and down and study the values printed by your previous code. Define a pattern for the movement "up" and movement "down":

- Call the function, **Motion\_MoveUp_CB**, when you move the board up rapidly.
- Call the function, **Motion\_MoveDown_CB**, when you move the board down rapidly.

#### Exercise 3
**Objective : Avoid bounce effect.**

If it has not already been done, implement an anti-bounce effect with an hysteresis to avoid successive inopportune function calls around threshold values.

#### Exercise 4
**Objective : More inclinations.**

Detect inclinations :

- back/front axis changes to have an angle of 30° to the **front** compared to horizontal plan **and in the same time** left/right axis changes to have an angle of 30° to the **left** compared to the horizontal plan.
- back/front axis changes to have an angle of 30° to the **front** compared to horizontal plan **and in the same time** left/right axis changes to have an angle of 30° to the **right** compared to the horizontal plan.
- back/front axis changes to have an angle of 30° to the **back** compared to horizontal plan **and in the same time** left/right axis changes to have an angle of 30° to the **left** compared to the horizontal plan.
- back/front axis changes to have an angle of 30° to the **back** compared to horizontal plan **and in the same time** left/right axis changes to have an angle of 30° to the **right** compared to the horizontal plan.

For each, create the appropriate callback function (cf. `__weak`) and call it when you detect the inclination.

Be careful with the naming and try to stick as closely as possible to the logic already implemented in the files you're modifying

#### Exercise 5 (optional)
**Objective : Calibration.**

The sensors might not have been calibrated properly. 
Implement a calibration API for the accelerometer which aim is to output signed offsets for each axis. 
**Tip :** 
-> When the board is in a known position (e.g. perfectly horizontal), acccel's Z axis is supposed to be parallel to the gravity vector. X and Y should be normal to it. 


Ask questions on Campus if you have some. They'll be answered !

"# MEMS" 
