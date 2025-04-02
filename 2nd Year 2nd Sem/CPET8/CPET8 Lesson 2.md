CPET8 Lesson 2

SOFTWARE PROCESS SHITS

Software Process
- Refers to the step-by-step activities implemented in order to properly develop a program or software product in an organized and systemized manner (Refer to Lesson 1 notes for further details).

Software Process Models
- Different models a developer or computer engineer can utilize as a guide para malaman nila ung pano nila itatackle ung paggawa ng software nila in an organized manner.

1. Waterfall Model
- Waterfall model follows a sequential, one-step-at-a-time methodology in software development and engineering. This is how it works
- In the waterfall model, a software's development starts by defining its requirements (Requirements Definition). This means that documentation and identification of problems and features are documented first by the software engineer. After this process is finished, the engineer then proceeds to system and software design where the developer then identifies what the architecture and logical flow of the software product or program should be. Afterwards, the developer moves on to Implementation and Unit Testing where the developer does the actual coding to the program. Afterwards, the developer does the Integration and system testing. The developer embeds the software to the hardware and does tests for debugging and checking program/software product bugs. Lastly, operation and maintenance where the developer releases the program for mass use and checking the program/software product from time to time for maintenance. In this phase, cchinecheck din ni developer ung bawat phase ng program na ginawa niya to see if nag taas na ba ung system specs needed to run the program, if may kailangan magbago sa logic to make the program run more efficiently, etc...
- Because of the model, each phase of the waterfall model can only be done sequentially. This means that a developer/software engineer ay bawal mag-rekta coding kung di pa niya iidentify initially ung mga system requirements or naiidentify ung problem to create features sa program/software product na gagawin niya.
- Because of its sequential methodology and dahil mahirap siya in editing the program, this model is mostly used for software products that are stable over a long period of time. An example of this is softwares sa embedded systems such as arduino. That nigga doesn't have updates sa firmware niya.

2. Evolutionary Model
- This software process model is a regularly updating model where in the program/software product is constantly changed based on user requests and feedback. If may feedback, implement it to the software product kahit released na.
- There are two types of evolutionary model namely:

a. Exploratory Development
- The developer first talks to stakeholder about the main features of the programmming. The developer codes, and adds missing features that are not specifically said by the stakeholder. Testing and debugging then release. Afterwards, the users give feedback to developer. Developer does programming again, tests and debugs, releases, then users provide feedback, then repeat. That is for beta testing.
-If tapos na for beta testing, release na for global use and implement updates from user feedback.

b. Throwaway Prototyping
-  Developer talks with the stakeholder and because of this, maraming mga unspecified features sa program na gagawin niya. The developer does a rough sketch of the program and shows it to the stakeholder para pag pina-check, malaman niya ung mga iba pang mga features na unclear sa kanya nung una na need i-add. After the stakeholder provides their feedback and features that were unclear to the developer ay nagets na, the developer throws away the initial program and starts a new one with the new feedbacks and features in mind.

3. Component-Based Software Engineering Model
- a software engineer create a software product and integrates it to an existing software so that certain parts of the software they are developing are just reusing from the components present on the software they integrated in.
- The process is as follows, a developer identifies the requirements needed for the software product then identifies components that they can reuse from an existing system so that parts of the program they are going to develop. Then modify program so that part of the program that were developed by the software engineer and components that were reused from a library are connected to each other so that the program works. Release and maintain.

4. Reuse-Oriented Development Model
- Same as COBS (ung number 3)

5. Process Iteration Model
- This model is where developers always create new iterations (updates) to their systems since requirements change or add over time (based from hardware capabilities and status, market movement, and user feedback).
- There are two renditions of this model:

a. Incremental Delivery
- Parts of the software product ay naka-hati through increments. A developer first identifies the software requirements from users or external factors, afterwards, hinahati nila ung mga requirements na un into "increments." Each increments ay dumadaan sa software development (coding, debugging, integration) and then after that increment has been integrated to the system, then another increment (parang feature ba based sa requirements) undergoes the same process.

b. Spiral Model
- Every spiral is called an iteration. An iteration is what you would call the version of yoru software product. 
- The process is as follows, developer identifies the requirements and features needed, the developer afterwards assess the risks of the software product (costs, how long it will take to finish and more). Coding and debugging then release. If may mga feedback ung mga stakeholders, then another iteration is done.

6. Rational Unified Process Model (RUP)
- The developer first identifies the business case, what is needed for the business para sa system na gagawin (Inception Phase), then the development of the system architecture (Elaboration Phase), then the developer does the actual coding and debugging (Construction Phase), and then deployment (Transition Phase).

7. Automated Synthesis Model 
- Waterfall model pero purely automated or AI. First phase ay ikaw mag prompt.

Ung mga CASE Toolss, please check lesson 1 notes.

