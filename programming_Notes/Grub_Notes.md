BOOTLOADERS
After a computer or laptop device administers POST, the firmware of the device (may it be BIOS or UEFI) find the bootloader on the disk of the computer/laptop (If there are multiple disks with their respective operating systems, the BIOS or UEFI depends on the priority disk the user sets to determine what disk to find the bootloader). Once the firmware finds the bootloader, the bootloader then finds the kernel of the operating system found on a certain partition in the disk. If it is found, then the bootloader transfers control of all of the resources of the device to the operating system. As the operating system boots, it does all of its checks and initializes elements that need to be initialized. 

CUSTOMIZING BOOTLOADER (Reference: How To Customize Linux Bootloaders ... by Michael Horn)

- The bootloader to be discussed would be GNU Grub2 as it is the only bootloader that could be customized and due to the fact that the author utilizes a linux operating system which comes with the aforementioned bootloader in mind. 

- One method is to utilize Grub Customize but it only has limited options in optimization. 

- Another method is going to the website Gnome Themes. 
1. Download the theme you want based on the resolution of the screen of your device. (It's a tar.xz file)
2. sudo cp -r ./(name of theme folder)/ /boot/grub/themes
3. Go to /etc/default and open grub using vim (or any text editor) (grub is the config file for the bootloader)
4. Add this line (doesn't matter where you put it: "GRUB_THEME=/boot/grub/themes/(name of theme folder)/theme.txt
5. Execute "sudo update-grub"
6. Reboot

ISSUES AND POSSIBLE FIXES
1. Wrong Resolution or Broken Resolution.
- Press C or find the terminal option in Grub.
- Execute "vbeinfo" or "videoinfo"
- Check and take note of screen resolution (The second one)
- Press esc.
- Got to Grub Config file using vim or your prefered text editor.
- Uncomment and edit GRUB_GFXMODE resolution to the resolution that was shown in vbeinfo in the GRUB terminal.
- Save. sudo update-grub. Then reboot.
