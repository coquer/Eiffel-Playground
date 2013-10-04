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

OBJECTS = big_file_C3_c.obj 

OLDOBJECTS =  eq934.obj eq934d.obj eq934f.obj ne952.obj ne952d.obj ne952f.obj eq954.obj \
	eq954d.obj eq954f.obj ne951.obj ne951d.obj ne951f.obj st950.obj st950d.obj st950f.obj \
	eq953.obj eq953d.obj eq953f.obj eq955.obj eq955d.obj eq955f.obj da926.obj da926d.obj \
	da926f.obj ad941.obj ad941d.obj ad941f.obj so949.obj so949d.obj so949f.obj da925.obj \
	da925d.obj da925f.obj ti924.obj ti924d.obj ti924f.obj ab927.obj ab927d.obj ab927f.obj \
	ad942.obj ad942d.obj ad942f.obj ex940.obj ex940d.obj ex940f.obj da956.obj da956d.obj \
	da956f.obj da937.obj da937d.obj da937f.obj mu939.obj mu939d.obj mu939f.obj co938.obj \
	co938d.obj co938f.obj pr936.obj pr936d.obj pr936f.obj pr935.obj pr935d.obj pr935f.obj \
	pr933.obj pr933d.obj pr933f.obj pr932.obj pr932d.obj pr932f.obj pr931.obj pr931d.obj \
	pr931f.obj we948.obj we948d.obj we948f.obj pr930.obj pr930d.obj pr930f.obj we947.obj \
	we947d.obj we947f.obj we929.obj we929d.obj we929f.obj we946.obj we946d.obj we946f.obj \
	we945.obj we945d.obj we945f.obj we944.obj we944d.obj we944f.obj we928.obj we928d.obj \
	we928f.obj we943.obj we943d.obj we943f.obj 

all::  Cobj3.lib

Cobj3.lib: $(OBJECTS) Makefile
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

