; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CPenDialog
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "TextEditor.h"
LastPage=0

ClassCount=6
Class1=CTextEditorApp
Class2=CTextEditorDoc
Class3=CTextEditorView
Class4=CMainFrame

ResourceCount=3
Resource1=IDR_MAINFRAME
Resource2=IDD_ABOUTBOX
Class5=CAboutDlg
Class6=CPenDialog
Resource3=IDD_PENWIDTH_DLG

[CLS:CTextEditorApp]
Type=0
HeaderFile=TextEditor.h
ImplementationFile=TextEditor.cpp
Filter=N

[CLS:CTextEditorDoc]
Type=0
HeaderFile=TextEditorDoc.h
ImplementationFile=TextEditorDoc.cpp
Filter=N
BaseClass=CDocument
VirtualFilter=DC
LastObject=CTextEditorDoc

[CLS:CTextEditorView]
Type=0
HeaderFile=TextEditorView.h
ImplementationFile=TextEditorView.cpp
Filter=C


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=TextEditor.cpp
ImplementationFile=TextEditor.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=IDD_PENWIDTH_DLG
Command17=ID_APP_ABOUT
CommandCount=17

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_PENWIDTH_DLG]
Type=1
Class=CPenDialog
ControlCount=9
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,button,1342177287
Control4=IDC_PENWIDTH0,button,1342177289
Control5=IDC_PENWIDTH1,button,1342177289
Control6=IDC_PENWIDTH2,button,1342177289
Control7=IDC_PENWIDTH3,button,1342177289
Control8=IDC_PENWIDTH4,button,1342177289
Control9=IDC_PENWIDTH5,button,1342177289

[CLS:CPenDialog]
Type=0
HeaderFile=PenDialog.h
ImplementationFile=PenDialog.cpp
BaseClass=CDialog
Filter=D
LastObject=CPenDialog
VirtualFilter=dWC

