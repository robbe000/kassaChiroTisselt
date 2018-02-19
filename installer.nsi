!define /date TIMESTAMP "%Y-%m-%d-%H-%M"

;script vars

!define LIB "C:\Users\robbe\Documents\Afgewerkt\kassaChiroTisselt"
!define EXE_NAME "kassaChiroTisselt.exe"
!define INSTALLER_STRING "Kassa Chiro Tisselt"
!define INSTALLER_EXE "kassaChiroTisselt.exe"

!define APPNAME "Kassa Chiro Tisselt"
!define COMPANYNAME "Robbe Goovaerts"
!define DESCRIPTION "${INSTALLER_STRING}"
;end script vars

; The name of the installer
Name "${INSTALLER_STRING}"

; The file to write
OutFile "${INSTALLER_EXE}"

; The default installation directory
InstallDir "$PROGRAMFILES\${COMPANYNAME}\${APPNAME}"

; Registry key to check for directory (so if you install again, it will
; overwrite the old one automatically)
InstallDirRegKey HKLM "Software\${COMPANYNAME}_${APPNAME}" "Install_Dir"

; Request application privileges for Windows Vista
RequestExecutionLevel admin

;LicenseData "C:\Users\robbe\Documents\GitHub\AquaHybVisualisatie\AquaHybVisualisatie\data\license.txt"

;--------------------------------

; Pages
Page license
Page directory
Page instfiles

UninstPage uninstConfirm
UninstPage instfiles

;--------------------------------

; The stuff to install
Section "" ;No components page, name is not important

  ; Set output path to the installation directory.
  SetOutPath $INSTDIR
  ; Put file there
  File ${LIB}\${EXE_NAME}
  File ${LIB}\libEGL.dll
  File ${LIB}\libEGLd.dll
  File ${LIB}\libgcc_s_dw2-1.dll
  File ${LIB}\libstdc++-6.dll
  File ${LIB}\libwinpthread-1.dll
  File ${LIB}\Qt5Core.dll
  File ${LIB}\Qt5Gui.dll
  File ${LIB}\Qt5Network.dll
  File ${LIB}\Qt5PrintSupport.dll
  File ${LIB}\Qt5SerialBus.dll
  File ${LIB}\Qt5SerialPort.dll
  File ${LIB}\Qt5Widgets.dll
  File ${LIB}\qtaudio_windows.dll
  File ${LIB}\qtaudio_windowsd.dll
  File ${LIB}\qwindows.dll

  ; Create plugin directory imageformats
  ;SetOutPath "$INSTDIR\imageformats\"
  ;File ${QT_LIB_DIR}\plugins\imageformats\qjpeg.dll
  ;File ${QT_LIB_DIR}\plugins\imageformats\qtiff.dll
  ;File ${QT_LIB_DIR}\plugins\imageformats\qsvg.dll
  ;File ${QT_LIB_DIR}\plugins\imageformats\qgif.dll
  ;File ${QT_LIB_DIR}\plugins\imageformats\qico.dll
  ;File ${QT_LIB_DIR}\plugins\imageformats\qmng.dll

  ; Create plugin directory platforms (only needed on Win8?)
  SetOutPath "$INSTDIR\platforms\"
  File ${LIB}\platforms\qminimal.dll
  File ${LIB}\platforms\qminimald.dll
  File ${LIB}\platforms\qoffscreen.dll
  File ${LIB}\platforms\qoffscreend.dll
  File ${LIB}\platforms\qwindows.dll
  File ${LIB}\platforms\qwindowsd.dll
  
  ; Om bepaalde afbeeldingformaten te onderstuen
  ; Dit zijn te veel afbeeldingformaten, maar voor de herbruikbaarheid van dit script voeg ik ze allemaal toe
  SetOutPath "$INSTDIR\imageformats\"
  File ${LIB}\imageformats\qgif.dll
  File ${LIB}\imageformats\qgifd.dll
  File ${LIB}\imageformats\qicns.dll
  File ${LIB}\imageformats\qicnsd.dll
  File ${LIB}\imageformats\qico.dll
  File ${LIB}\imageformats\qicod.dll
  File ${LIB}\imageformats\qjpeg.dll
  File ${LIB}\imageformats\qjpegd.dll
  File ${LIB}\imageformats\qsvg.dll
  File ${LIB}\imageformats\qsvgd.dll
  File ${LIB}\imageformats\qtga.dll
  File ${LIB}\imageformats\qtgad.dll
  File ${LIB}\imageformats\qtiff.dll
  File ${LIB}\imageformats\qtiffd.dll
  File ${LIB}\imageformats\qwbmp.dll
  File ${LIB}\imageformats\qwbmpd.dll
  File ${LIB}\imageformats\qwebp.dll
  File ${LIB}\imageformats\qwebpd.dll

  SetOutPath $INSTDIR

  CreateDirectory "$SMPROGRAMS\${COMPANYNAME}\${APPNAME}"
  ;CreateShortCut "$SMPROGRAMS\DNI\Uninstall.lnk" "$INSTDIR\uninstall.exe" "" "$INSTDIR\uninstall.exe" 0
  CreateShortCut "$SMPROGRAMS\${COMPANYNAME}\${APPNAME}\${DESCRIPTION}.lnk" "$INSTDIR\${EXE_NAME}" "" "$INSTDIR\${EXE_NAME}" 0

    ; Write the installation path into the registry
  WriteRegStr HKLM "Software\${COMPANYNAME}_${APPNAME}" "Install_Dir" "$INSTDIR"

  ; Write the uninstall keys for Windows
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${COMPANYNAME}_${APPNAME}" "DisplayName" "${DESCRIPTION}"
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${COMPANYNAME}_${APPNAME}" "UninstallString" '"$INSTDIR\uninstall.exe"'
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${COMPANYNAME}_${APPNAME}" "NoModify" 1
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${COMPANYNAME}_${APPNAME}" "NoRepair" 1
  WriteUninstaller "uninstall.exe"

SectionEnd ; end the section

;--------------------------------

; Uninstaller

Section "Uninstall"

  ; Remove registry keys
  DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${COMPANYNAME}_${APPNAME}"
  DeleteRegKey HKLM "Software\${COMPANYNAME}_${APPNAME}"

  ; Remove files and uninstaller
  Delete $INSTDIR\${EXE_NAME}
  Delete $INSTDIR\libEGL.dll
  Delete $INSTDIR\libEGLd.dll
  Delete $INSTDIR\libgcc_s_dw2-1.dll
  Delete $INSTDIR\libstdc++-6.dll
  Delete $INSTDIR\libwinpthread-1.dll
  Delete $INSTDIR\Qt5Core.dll
  Delete $INSTDIR\Qt5Gui.dll
  Delete $INSTDIR\Qt5Network.dll
  Delete $INSTDIR\Qt5PrintSupport.dll
  Delete $INSTDIR\Qt5SerialBus.dll
  Delete $INSTDIR\Qt5SerialPort.dll
  Delete $INSTDIR\Qt5Widgets.dll
  Delete $INSTDIR\qtaudio_windows.dll
  Delete $INSTDIR\qtaudio_windowsd.dll
  Delete $INSTDIR\qwindows.dll
  Delete $INSTDIR\platforms\qminimal.dll
  Delete $INSTDIR\platforms\qminimald.dll
  Delete $INSTDIR\platforms\qoffscreen.dll
  Delete $INSTDIR\platforms\qoffscreend.dll
  Delete $INSTDIR\platforms\qwindows.dll
  Delete $INSTDIR\platforms\qwindowsd.dll
  Delete $INSTDIR\imageformats\qgif.dll
  Delete $INSTDIR\imageformats\qgifd.dll
  Delete $INSTDIR\imageformats\qicns.dll
  Delete $INSTDIR\imageformats\qicnsd.dll
  Delete $INSTDIR\imageformats\qico.dll
  Delete $INSTDIR\imageformats\qicod.dll
  Delete $INSTDIR\imageformats\qjpeg.dll
  Delete $INSTDIR\imageformats\qjpegd.dll
  Delete $INSTDIR\imageformats\qsvg.dll
  Delete $INSTDIR\imageformats\qsvgd.dll
  Delete $INSTDIR\imageformats\qtga.dll
  Delete $INSTDIR\imageformats\qtgad.dll
  Delete $INSTDIR\imageformats\qtiff.dll
  Delete $INSTDIR\imageformats\qtiffd.dll
  Delete $INSTDIR\imageformats\qwbmp.dll
  Delete $INSTDIR\imageformats\qwbmpd.dll
  Delete $INSTDIR\imageformats\qwebp.dll
  Delete $INSTDIR\imageformats\qwebpd.dll
  RMDir $INSTDIR\imageformats
  RMDir $INSTDIR\platforms
  Delete $INSTDIR\uninstall.exe

  ; Remove shortcuts, if any
  Delete "$SMPROGRAMS\${COMPANYNAME}\${APPNAME}\*.*"

  ; Remove directories used
  RMDir "$SMPROGRAMS\${COMPANYNAME}\${APPNAME}"
  RMDir "$SMPROGRAMS\${COMPANYNAME}"
  RMDir "$INSTDIR"

SectionEnd