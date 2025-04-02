CPET8 Lesson 3

Data Flow Modelling (DFM) 
- DFM is an analyzation technique that serves as a guideline or reference for software analysts when analyzing a given application or system software. These contain concepts and rules that are utilized by an analyzer in order to understand the flow of data within a given software.
- Take note that DFM analyzes the FLOW OF DATA within a software, not how data moves within a system. 
- There are two parts of DFM:

i. Narrative
- This is the narrative part of the DFM which gives an explanation of how data flows in a software on different levels.

ii. Data Flow Diagram (DFD)
- This is the "visual" part of DFM which provides a visual representation of how data flows in a given software. 
- The data flow diagram is simply a diagram that shows how data flows in a software in a visual manner. DFDs have four main aspects: (GANE AND SARSON SYMBOLS ARE USED)

	A. External Entity
	-External Entities refer to the actual end-users who are utilize the application software. They are essentially the inputs and outputs of the application or system software. They are represented by plain rectangles only.

	B. Data Flow
	- Data flow represents the data that is being transferred as well as what process, entity, or data store that data is going to.
	- Data flows are usually represented by arrows. Although that is the case, there are different types of data flow representations which have their own meaning in a system or application software:

		a. Data Flow (->)
		- Straight arrow which has the data details it houses as well as where its going in a unidirectional way only.

		b. Bi-Directional Flow (<->)
		- Same description as data flow but direction is bi-directional.

		c. Flow Between External Entities (------>)
		- Represented by broken lines, refers to actual physical goods that the software gives to an entity or vice-versa.

		d. Resource Flow (basta ung 3d na line)
		- Data refers to  non-data resources such as money, supplies, etc..

	C. Process
	- Refers to Steps and decisions or instructions that occur within the analyzed application or system software. It is represented by a circle.

	D. Data Store
	________________
	|  |
	----------------
	- Refers to where data is kept temporarily or permanently, physically, or digitally. 
	- The data store has multiple types depending on whether they are physical stores or digital stores, and whether they are permanent stores or temporary ones.

		a. Digitised Data Store
		------------------------
		| D1 |
		------------------------
		- Represented by the above symbol (straight lines only), a digitised data store is where data is stored within the storage system (array) of a given application software.
		- "D" represents for Digitised and the number is just the identifier. If you ahve two data stores, then there would be D1 and D2 data store elements present.
		
		b. Manual Data Store
		------------------------
		| M1 |
		------------------------
		- Represented by the above symbol (straight lines only), a manual data store is where data is stored on a physical storage bay (papers or physical logbooks store on a cabinet (cabinet being the manual data store in this context).
		- "M" represents for Manual and the number is just the identifier. If you have two manual data stores, then there would be M1 and M2 manual data store elements present.

		c. Transient Data Store
		-----------------------
		| T1 |
		-----------------------

		- Refers to temporary data storage such as cache for digital data.
		- "T" represents for transient and the number is just the identifier. If you have two transient data stores, then there would be T1 and T2 transient data store elements present.

		d. Duplicate Data Store
		-----------------------
		|| D1 |
		-----------------------
		
		- Represented by the symbol above, the duplicate data store is when there is a duplicate storage that is connected to entities and stuff di ko magets toh i have no time bahala na.
		- GETS KO NA HAHAHAHAHAHAH ginagamit ng Duplicate D.S. para if halimbawa ung isang block ng DDS ay malayo sa entity na gusting kumonek dun, you can simply make this para di ka na maglagay ng mahabang line from the original data store para lang iconnect sa isang entity or process.
		- D means duplicate, 1 is an identifier.

- DFDs have different levels that show generalized or detailed processes and sub-processes depending on their level. The process at which DFDs are broken down into levels in order to show more of its processes in a detailed matter is called "levelling." The following are different DFD leveling:

	A. Context Diagram (Level 0)
	- DFD where in data flow is represented into one singular process.
	- a very watered down and simplified diagram of a given application software.

	B. High-Level DFD (Level 1)
	- Mayroon nang mga few processes that show where data flows to. Dito na din magsisimulang magpakita ung mga data stores.

	C. Low-Level DFD (Level 2)
	- Dito makikita ung sub-processes within processes in an application software.
	- More detailed.


SOME STUFF TO REMEMBER WHEN CREATING DFDs:
- Direct flow of data in between two data stores (whether it may be unidirectional or bi directional) is not possible. Parang isipin niyo sa ROM ng isang pc. Since rom is read only, it cannot write data.
- A process must always have an input and an output.

