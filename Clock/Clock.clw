; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CClockDlg
LastTemplate=CStatic
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Clock.h"

ClassCount=4
Class1=CClockApp
Class2=CClockDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Class4=CDigitalClock
Resource3=IDD_CLOCK_DIALOG

[CLS:CClockApp]
Type=0
HeaderFile=Clock.h
ImplementationFile=Clock.cpp
Filter=N

[CLS:CClockDlg]
Type=0
HeaderFile=ClockDlg.h
ImplementationFile=ClockDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CClockDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=ClockDlg.h
ImplementationFile=ClockDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_CLOCK_DIALOG]
Type=1
Class=CClockDlg
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[CLS:CDigitalClock]
Type=0
HeaderFile=DigitalClock.h
ImplementationFile=DigitalClock.cpp
BaseClass=CStatic
Filter=W
VirtualFilter=WC
LastObject=CDigitalClock

