Git LFS
- an extension of Git that enables large file storage for both Git and GitHub.
- GitHub has a limit of 100mb per file and if a file exceeds that, pushing a file to a GitHub repository is rejected.
- Despite the file limit that Git and GitHub imposes, Git LFS as an extension of Git achieves this by referencing these large files into a pointer file known as ".gitattributes." This pointer file is the one that is uploaded to a GitHub repository and the actual large files itself is uploaded to Git LFS servers instead of the GitHub repository itself. Simply put, utilizing GitLFS is utilizing a pointer while the actual files is being uploaded to another server to which that pointer references to.

Process
1. git install lfs install : self-explanatory.
2. git lfs track "(file or directory name)" : It stores that large file in question to .gitattributes. .gitattributes is the file pointer that git references to. This enables uploading these large files to a repository because this file is small to begin as it is basically a pointer to the large file. Not the large file itself. 
3. git add and git commit .gitattributes : self-explanatory.
4. git add and git commit Large files : self-explanatory
5. git push origin (name of branch) : Once the contents are uploaded to the repository, the .gitattributes are the ones that are uploaded to the repository. The large files are then sent not to the repo, but to a separate git lfs server to which the .gitattributes file refer to as it acts as the pointer for these large files to not lose track of them. It acts as the replacement for those large files so that the repo will still have access to those files. 

