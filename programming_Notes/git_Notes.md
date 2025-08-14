GIT
- Simply a version control system that runs locally on a computer/laptop device that saves changes in a codebase. It tracks those changes and saves them on a buffer.
- The aforementioned buffer wherein certain times changes occurs in a codespace are called "Snapshots. 
- Utilized through a CLI.

GITHUB
- It is a cloud-based server (open-sourced) with Git as its underlying system. 
- Utilized for simultaneous code editing on a singular program with multiple programmers. 
- Utilized through the Web + GUI.

- Both are "Trunked-based Development." Which takes a main codespace snapshot, branches out for changes (multiple branches if multiple users), and merges back to main branch.

ELEMENTS IN GITHUB AND GIT

Repository- A space that saves all codespaces for a specific program. It is stored on the servers of GitHub.
Clone- Methdology of copying all elements of a repository to your local device. It links your device and the current codespace you have copied to the repository on the GitHub server.
Branch- Refers to an alternate-space that a programmer utilizes in order to make changes in a codespace without affecting the main branch.
Commit- Save
Push- Sends your changes (may it be on the main branch or an alternate branch) to the repository. It's basically a save on the cloud. 
Merge- Merges the changes from an alternate branch to the main branch or vice-versa locally.
Pull- Downloads changes from a remote repository and immediately merges those changes on a programmer's current branch.
Merge Conflict- Occurs when a programmer pulls from a repository and there are changes on the codespace from the repository and the programmer's current codespace.

EXAMPLE PROCESS INVOLVING TWO PROGRAMMERS IN GITHUB
- A repository for a music player exists in GitHub. A programmer named Nathan clones this 	on his device and creates an alternate branch called "Nathan-branch." Nathan makes changes on this branch and merges it with the main branch that includes in his cloned codespace. Nathan commits this to save the changes that has happened and pushes it to the repository to save it in the cloud.

Another programmer by the name of Greg also has a clone of the repository but without the changes that Nathan has pushed. He has his alternate branch called "Greg-branch" which he has his own code of the aforementioned codespace. He has merged it into the main-branch of the codespace from the repository but has not pushed those changes to the repository for he heard that there are new changes that have been pushed by Nathan to the repository.

Greg pulls from the repository in order to apply those new changes to the main branch of his cloned repository but due to the fact that there are stark difference from the main branches of the repository and the main branch of Nathan, a merge conflict occurs. Because of this, Greg  has to adapt and apply Nathan's changes to his main branch before adding his own. He then commits his changes and sends a pull request to Nathan so that before a merge and push occurs in the repository's main branch, Nathan can approve first of the changes.

GIT COMMANDS
git init : Initializes git on a user's current directory.

git add . : Sets up the current chages for a save. Note that this is not a save. Rather, it prepares all of the files for saving.

git add (name of file) : Sets up the current changes for a specific file for a save.

git commit -m '(commit message)' : Saves the current changes that have been added to "add" with a message as well for the commit.

git log : Shows a log of all commits done to a directory. A hashcode that labels each commit is also included.

git checkout (name of branch) : Switches existing branches.

git checkout -b (name of new branch) : Creates a new branch.

git checkout (hashcode) : Creates a new branch that restores a previous commit from the main branch. 

git remote add origin (URL of GitHub Repository) : Links your local repository to the repository specified on GitHub. Git remote add is actually the command that links your local repository to a GitHub one (meaning that you must have an existing GitHub repo to link your local repo to). origin is just a placeholder name for the URL of the GitHub Repository. In the following commands where a programmer would utilize different features for their cloud repository, instead of an URL to refer to the GitHub Repository, the placeholder name (in this case "origin") will be used by Git to refer to the GitHub Repository specified in the URL. Do take note as well that the placeholder name can be anything. Origin is just utilized most by programmers for uniformity and simplicity.

git push -u origin master : Pushes your current codespace to the repo. git push does that. -u is only utilized when pushing for the first time. Name of current branch should be the same to the branch name (after origin) or it will not push.

git branch : shows current branch on local repo.when pushing for the first time. Name of current branch should be the same to the branch name (after origin) or it will not push.

git branch -m (renaming) : Enables renaming your current branch. Insert the new name in the renaming section.

git branch --delete (name of branch) : deletes a branch based from its name.

git merge (name of branch) : Merges a branch from the "name of branch" to your current branch.

git push origin --delete (name of branch) : Delete a branch in a github repo.

git clone (url of repo) : Directly clones a github repository and its contents to your current directory.
