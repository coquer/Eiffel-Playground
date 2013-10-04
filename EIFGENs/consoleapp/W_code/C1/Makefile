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

OBJECTS = big_file_C1_c.obj 

OLDOBJECTS =  ap859.obj ap859d.obj ap859f.obj eq874.obj eq874d.obj eq874f.obj eq873.obj \
	eq873d.obj eq873f.obj eq872.obj eq872d.obj eq872f.obj eq871.obj eq871d.obj eq871f.obj \
	ad890.obj ad890d.obj ad890f.obj eq870.obj eq870d.obj eq870f.obj c_869.obj c_869d.obj \
	c_869f.obj it868.obj it868d.obj it868f.obj eq887.obj eq887d.obj eq887f.obj so889.obj \
	so889d.obj so889f.obj pa867.obj pa867d.obj pa867f.obj gr888.obj gr888d.obj gr888f.obj \
	eq886.obj eq886d.obj eq886f.obj eq866.obj eq866d.obj eq866f.obj eq865.obj eq865d.obj \
	eq865f.obj da883.obj da883d.obj da883f.obj pr864.obj pr864d.obj pr864f.obj pr884.obj \
	pr884d.obj pr884f.obj da882.obj da882d.obj da882f.obj pr885.obj pr885d.obj pr885f.obj \
	pr881.obj pr881d.obj pr881f.obj pr863.obj pr863d.obj pr863f.obj fi862.obj fi862d.obj \
	fi862f.obj we861.obj we861d.obj we861f.obj pr880.obj pr880d.obj pr880f.obj we860.obj \
	we860d.obj we860f.obj we879.obj we879d.obj we879f.obj we878.obj we878d.obj we878f.obj \
	we877.obj we877d.obj we877f.obj we876.obj we876d.obj we876f.obj we875.obj we875d.obj \
	we875f.obj 

all::  Cobj1.lib

Cobj1.lib: $(OBJECTS) Makefile
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

