@echo off
CHOICE /C yn /M "Will you be my girlfriend ?"
IF ERRORLEVEL 1 Goto YES
IF ERRORLEVEL 2 Goto NO
Goto end
:YES
Echo Congratulations to you ! You win my love ! You are very lucky !
Goto end
:NO
Echo You hart my heat ! But thanks for your sincerely ! Best wishes to you !
:end
@pause
