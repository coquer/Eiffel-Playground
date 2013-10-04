case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C2"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\process\classic\windows\include" -I"\$(ISE_LIBRARY)\library\wel\spec\windows\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $ccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $cppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $ldsharedflags
EIFLIB = "$rt_lib/$prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $libs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = consoleapp$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C2_c.obj 

OLDOBJECTS =  eq892.o eq892d.o eq892f.o in921.o in921d.o in921f.o eq918.o \
	eq918d.o eq918f.o it919.o it919d.o it919f.o in915.o in915d.o in915f.o \
	it891.o it891d.o it891f.o er913.o er913d.o er913f.o in910.o in910d.o \
	in910f.o in912.o in912d.o in912f.o in911.o in911d.o in911f.o in917.o \
	in917d.o in917f.o in916.o in916d.o in916f.o in909.o in909d.o in909f.o \
	so920.o so920d.o so920f.o it914.o it914d.o it914f.o it908.o it908d.o \
	it908f.o eq893.o eq893d.o eq893f.o ne922.o ne922d.o ne922f.o da907.o \
	da907d.o da907f.o du923.o du923d.o du923f.o da906.o da906d.o da906f.o \
	ti903.o ti903d.o ti903f.o da904.o da904d.o da904f.o da905.o da905d.o \
	da905f.o ti902.o ti902d.o ti902f.o ti901.o ti901d.o ti901f.o ti900.o \
	ti900d.o ti900f.o co899.o co899d.o co899f.o th895.o th895d.o th895f.o \
	th897.o th897d.o th897f.o pr898.o pr898d.o pr898f.o th896.o th896d.o \
	th896f.o we894.o we894d.o we894f.o 

all: Cobj2.o

Cobj2.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj2.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

