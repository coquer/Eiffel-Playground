INCLUDE_PATH =  -I"C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL\library\process\classic\windows\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL\library\wel\spec\windows\include"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE   -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE   -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:CONSOLE
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL\studio\spec\win64\lib\msc\wkbench.lib"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL\studio\config\win64\templates
LIBS = 
MAKE = nmake -s -nologo
AR = 
LD = 
MKDEP =   --
MV = copy
CP = copy
RANLIB = echo
RM = del
FILE_EXIST = if exist
RMDIR = rd
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 7.3 GPL\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = consoleapp.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C2_c.obj 

OLDOBJECTS =  eq892.obj eq892d.obj eq892f.obj in921.obj in921d.obj in921f.obj eq918.obj \
	eq918d.obj eq918f.obj it919.obj it919d.obj it919f.obj in915.obj in915d.obj in915f.obj \
	it891.obj it891d.obj it891f.obj er913.obj er913d.obj er913f.obj in910.obj in910d.obj \
	in910f.obj in912.obj in912d.obj in912f.obj in911.obj in911d.obj in911f.obj in917.obj \
	in917d.obj in917f.obj in916.obj in916d.obj in916f.obj in909.obj in909d.obj in909f.obj \
	so920.obj so920d.obj so920f.obj it914.obj it914d.obj it914f.obj it908.obj it908d.obj \
	it908f.obj eq893.obj eq893d.obj eq893f.obj ne922.obj ne922d.obj ne922f.obj da907.obj \
	da907d.obj da907f.obj du923.obj du923d.obj du923f.obj da906.obj da906d.obj da906f.obj \
	ti903.obj ti903d.obj ti903f.obj da904.obj da904d.obj da904f.obj da905.obj da905d.obj \
	da905f.obj ti902.obj ti902d.obj ti902f.obj ti901.obj ti901d.obj ti901f.obj ti900.obj \
	ti900d.obj ti900f.obj co899.obj co899d.obj co899f.obj th895.obj th895d.obj th895f.obj \
	th897.obj th897d.obj th897f.obj pr898.obj pr898d.obj pr898f.obj th896.obj th896d.obj \
	th896f.obj we894.obj we894d.obj we894f.obj 

all::  Cobj2.lib

Cobj2.lib: $(OBJECTS) Makefile
	if exist $@ $(RM) $@
	lib -nologo -OUT:$@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

