CPET8 Lesson 4

Unified Modeling Language (UML)
- This refers to different modeling diagrams, techniques, rules, and methodologies on application and system software analyzation.
- Through UML, application and system softwares are documented in a proper manner through diagrams and documents.   
Use Case
- Use Case diagrams are diagrams that show the interaction of various end-users to a given application software.
- Tingin na lang kayo kung ano mukha ng use case diagram.
- A Use Case diagram has 3 primary components:

i. Actors
- Refer to the users that are going to utilize the application software. The users in a use case refer to a general/specialized set of people, not a singular entity.
- For example, you have a program that will cater to students, then in the use case diagram, students ang magiging actors mo. Bawal teachers, janitors, or race car drivers since that application software would have no use to the aforementioned actors.

ii. Use Cases
- This refer to the actual, interactable process in an application or system software.
- Ito ung mga features ng application software that can be interacted upon the end-user based on their accessibility to it. 

iii. Relationships between Use Cases
- This refers to the relationship of an end-user to a use case. If they would be accessible or not to a given end-user. There are three types of relationships between actors and use cases:

	A. Includes Dependency (<<includes>>)
	- Denoted by the symbol above, the includes dependency data flow in a use case diagram where in given a process, another mandatory process is generated and both of these are accessed and available for interaction of the user.
	- An example might be that given after you enter your account credentials on an application software, there would be another mandatory prompt that the application software will show to the end-user (e.g. payment in voice shit). In this case, the enter account credentials is the base process and an arrow pointing to the invoice payment process would be the include due to the fact that a following prompt follows after the user interacts with the base process. 

	B. Extends Dependency (<<extends>>)
	- Denoted by the symbol above, the extends dependency refers to processes that are created from a base process, the process that is created is interactable and available for the end-user although the base process is not. 
	- For example, if a given user does apply checkout, the user can access an extended dependency of applying a discount, if the end-user does not have a voucher, the aforementioned process is not executed not would be accessible to the user.

	C. Generalization
	- Similar to includes dependency with the difference being that kapag generalization dependency, may mga "subprocesses" or more specific processes of a main processes that are all shown in the use case diagram which just like the includes dependency, are all accessible by a given end-user.

Benefits of Use Case
- The functions of actors are identified with its relationships to those functions within the application software.
- A more comprehensive view of who can access what can be seen in the diagram. NIIIIIIIIIIIGGGGGGGGGGGGERRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
 

		