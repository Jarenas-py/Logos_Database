ls : Gives a list of all elements and files in the current directory in horizontal orientation.

ls -l : Gives a list of all elements and files in the current directory in vertical orientation.

ls -a : Gives a list of all elements and files in the current directory in vertical orientation including all hidden files. 

pwd : "Print Working Directory." Prints the current directory you are in.

cd : "Change Directory." Changes directory to the file path that you type after the aforementioned command.

touch : Creates a file of your choice in the current directory. Doesn't matter what file format you put. That's on you if you could find a program that could support it if you ever make a made up file format.

echo : Prints the string that you have typed immediately or inputs it in a file of your choice as long as that file is in the current working directory.

nano: Text editor. Pair it with a file of your choice in the current working directory and it will open the text editor along with the contents of your file of your choice.

Vim : Another text editor. Same description as nano.

cat : Displays the contents of your file (in text format) on the terminal itself.

mkdir : "Make New Directory." Creates a new folder.

cp : Copy a file. Add the file path after the aforementioned command to copy a file there. 

mv : Move a file. Utilization is same as cp. Can be also utilized to rename a file.

rm : "remove" Deletes a file.

rmdir : "Remove Directory." Deletes a folder.

clear : Similar to cls

whoami: Prints your username. 

sudo : "Super user do." Gives you special access on different commands that initially needs special permissions.

apt : "Advanced Package Tool." Exclusive to only debian operating systems. It is a repository of different programs ported or created for linux debian kernels so that you can directly download software and extensions from there.

sudo apt update : Checks your current softwares and identifies if there are updates needed.

sudo apt search : Checks if a software or extension that you need is in the apt. Just input a the name of the program/extension after sudo apt search to make it work.

sudo apt upgrade : Actual updating of software.

sudo apt install : Put the name of the program/extension after the command line. Downloads and installs the program/extension on your device. 

man : "Manual." Shows a full list of all commands that can be ran in bash terminal. Add a certain bash command after man and it will show how it can be utilized and its different forms.

whatis : Paired with the command of your choice shows a simple definition of what a bash command does. 

wget : Downloads from the internet itself as long as you type in the link/url after the command.

Unzip : Unzips a compressed file. Specify the file name of which you want to unzip.

find : Finds the file you are specifying. Add the file path (and sudo in the beginning if in the root folder) then the file you are trying to find. Example: sudo find /(file path) -name "(file name)"

chmod : Makes an executable out of a file. (chmod +x (file you want to make an executable)

chown : Change ownership of the file. Example: chown whonjick vimrc

cal : Shows current month calendar.

neofetch : Prints system and hardware statistics.

pkill : Exits a running program. Just insert the name after the command.

systemctl : Used for stopping and starting services.


sudo reboot : Restart device.

& : Runs a file given the name of a program. Example: brave &

rm -r (folder name) : Removes folder name with contents.

NOTE 1: In order to change the name of a software to open a command on must do the following:
1. type in the terminal "vim .bashrc"
2. Identify the name of a program. For example, the name of the settings in linux mint is cinammon-settings.
3. To change the name of a command line software, just insert this format at the end of the .bashrc file: 
"alias (new name)='(old name)'

In this instance, it would be alias settings='cinammon-settings'

4. Save and exit terminal to apply the new changes.

sudo shutdown : Shutsdown the device in a minute.

sudo shutdown -h now : Shutsdown the devince instantly.

sudo systemctl suspend : Sleeps the device instantly.

sudo rm -r (name of directory) : Enables deletion of directory that has contents inside.

brave & : Brave Browser
vscode & : Visual Studio Code
discord & : Discord
disk & : Disks
drawio & : Draw.io
files & : Files
heroic & : Heroic Game Launcher
keepass & : Keepass XC 
kicad & : KiCAD
obs & : OBS
torrent & : QBitTorrent
sc & : Screenshot
software & : Software Manager
steam & : Steam
settings & : Settings
taskmanager & : System Monitor
teams & : MS Teams
terminal & : Bash Terminal 
Tlauncher : Just open from start menu.
vls & : VLC Video Player
mintupdate & : Update Manager
