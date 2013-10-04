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
echo "Compiling C code in C1"
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

OBJECTS = big_file_C1_c.obj 

OLDOBJECTS =  ap859.o ap859d.o ap859f.o eq874.o eq874d.o eq874f.o eq873.o \
	eq873d.o eq873f.o eq872.o eq872d.o eq872f.o eq871.o eq871d.o eq871f.o \
	ad890.o ad890d.o ad890f.o eq870.o eq870d.o eq870f.o c_869.o c_869d.o \
	c_869f.o it868.o it868d.o it868f.o eq887.o eq887d.o eq887f.o so889.o \
	so889d.o so889f.o pa867.o pa867d.o pa867f.o gr888.o gr888d.o gr888f.o \
	eq886.o eq886d.o eq886f.o eq866.o eq866d.o eq866f.o eq865.o eq865d.o \
	eq865f.o da883.o da883d.o da883f.o pr864.o pr864d.o pr864f.o pr884.o \
	pr884d.o pr884f.o da882.o da882d.o da882f.o pr885.o pr885d.o pr885f.o \
	pr881.o pr881d.o pr881f.o pr863.o pr863d.o pr863f.o fi862.o fi862d.o \
	fi862f.o we861.o we861d.o we861f.o pr880.o pr880d.o pr880f.o we860.o \
	we860d.o we860f.o we879.o we879d.o we879f.o we878.o we878d.o we878f.o \
	we877.o we877d.o we877f.o we876.o we876d.o we876f.o we875.o we875d.o \
	we875f.o 

all: Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj1.o $(OBJECTS)
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

