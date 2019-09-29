; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMenusDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Menus.h"

ClassCount=3
Class1=CMenusApp
Class2=CMenusDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_MENUS_DIALOG
Resource4=IDR_MENU1

[CLS:CMenusApp]
Type=0
HeaderFile=Menus.h
ImplementationFile=Menus.cpp
Filter=N

[CLS:CMenusDlg]
Type=0
HeaderFile=MenusDlg.h
ImplementationFile=MenusDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CMenusDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=MenusDlg.h
ImplementationFile=MenusDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_MENUS_DIALOG]
Type=1
Class=CMenusDlg
ControlCount=1
Control1=IDC_EXIT,button,1342242816

[MNU:IDR_MENU1]
Type=1
Class=CMenusDlg
Command1=IDM_FILE_HELLO
Command2=IDM_FILE_EXIT
Command3=IDM_HELP_ABOUT
CommandCount=3

