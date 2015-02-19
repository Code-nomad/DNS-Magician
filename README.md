# DNS-Magician
DNS changer for windows systems.


##Intro

This program was made for a quick DNS edit without having to go to the system configuration window. The code was written in **Qt creator** using **Qt version 5.2.1** . For the compilation step I used the **Mingw toolchain**. This program is an easy step to discover some of the Qt Creator features and workflow for code.


It currently only works for Windows operating systems with no future ambition to create cross platform capability. 


##Library includes used

- QWidget
- QStringList
- QString
- Qprocess
- QNetworkInterface

##Steps to take after compilation

After compilation go to the path where the built exe now resides and copy the manifest found in the repository to this folder.

Once the file has been copied execute the following line to add admin privileges to the UAC of this executable. This is needed to be able to execute the Netsh commands as admin.

`mt.exe -nologo -manifest "DNSmagician.exe.manifest" -outputresource:"DNSmagician.exe;#1"`

After this the executable should be ready for use on your system. You might need to add some Dll's from your MingW directory for this program to function properly.

##Screenshots

![screen 1](http://i.imgur.com/1JpNgxZ.png)
![screen 2](http://i.imgur.com/74gpDpN.png)

