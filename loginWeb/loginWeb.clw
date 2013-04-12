; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CLoginWebDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "loginWeb.h"

ClassCount=4
Class1=CLoginWebApp
Class2=CLoginWebDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_LOGINWEB_DIALOG

[CLS:CLoginWebApp]
Type=0
HeaderFile=loginWeb.h
ImplementationFile=loginWeb.cpp
Filter=N

[CLS:CLoginWebDlg]
Type=0
HeaderFile=loginWebDlg.h
ImplementationFile=loginWebDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=loginWebDlg.h
ImplementationFile=loginWebDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_LOGINWEB_DIALOG]
Type=1
Class=CLoginWebDlg
ControlCount=1
Control1=IDC_BUTTON1,button,1342242816

