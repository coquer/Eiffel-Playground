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
echo "Compiling C code in C3"
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

OBJECTS = big_file_C3_c.obj 

OLDOBJECTS =  eq934.o eq934d.o eq934f.o ne952.o ne952d.o ne952f.o eq954.o \
	eq954d.o eq954f.o ne951.o ne951d.o ne951f.o st950.o st950d.o st950f.o \
	eq953.o eq953d.o eq953f.o eq955.o eq955d.o eq955f.o da926.o da926d.o \
	da926f.o ad941.o ad941d.o ad941f.o so949.o so949d.o so949f.o da925.o \
	da925d.o da925f.o ti924.o ti924d.o ti924f.o ab927.o ab927d.o ab927f.o \
	ad942.o ad942d.o ad942f.o ex940.o ex940d.o ex940f.o da956.o da956d.o \
	da956f.o da937.o da937d.o da937f.o mu939.o mu939d.o mu939f.o co938.o \
	co938d.o co938f.o pr936.o pr936d.o pr936f.o pr935.o pr935d.o pr935f.o \
	pr933.o pr933d.o pr933f.o pr932.o pr932d.o pr932f.o pr931.o pr931d.o \
	pr931f.o we948.o we948d.o we948f.o pr930.o pr930d.o pr930f.o we947.o \
	we947d.o we947f.o we929.o we929d.o we929f.o we946.o we946d.o we946f.o \
	we945.o we945d.o we945f.o we944.o we944d.o we944f.o we928.o we928d.o \
	we928f.o we943.o we943d.o we943f.o 

all: Cobj3.o

Cobj3.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj3.o $(OBJECTS)
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

