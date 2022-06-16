Shell, init files, variables and expansions
===========================================
## 0. <o>
Create a script that creates an alias.

- Name: `ls`
- Value: `rm *`

<!-- Output -->

	julien@ubuntu:/tmp/0x03$ ls
	0-alias  file1  file2
	julien@ubuntu:/tmp/0x03$ source ./0-alias 
	julien@ubuntu:/tmp/0x03$ ls
	julien@ubuntu:/tmp/0x03$ \ls
	julien@ubuntu:/tmp/0x03$ 

Filename: **0-alias**

## 1. Hello you
Create a script that prints `hello user`, where user is the current Linux user.

	julien@ubuntu:/tmp/0x03$ id
	uid=1000(julien) gid=1000(julien) groups=1000(julien),4(adm),24(cdrom),27(sudo),30(dip),46(plugdev),113(lpadmin),128(sambashare)
	julien@ubuntu:/tmp/0x03$ ./1-hello_you 
	hello julien
	julien@ubuntu:/tmp/0x03$ 

Filename: **1-hello_you**

## 2. The path to success is to take massive, determined action 
Add `/action` to the `PATH`. `/action` should be the last directory the shell looks into when looking for a program.

	julien@ubuntu:/tmp/0x03$ echo $PATH
	/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
	julien@ubuntu:/tmp/0x03$ source ./2-path 
	julien@ubuntu:/tmp/0x03$ echo $PATH
	/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/action
	julien@ubuntu:/tmp/0x03$ 

Filename: **2-path**

## 3. If the path be beautiful, let us not ask where it leads 
Create a script that counts the number of directories in the `PATH`.

	julien@ubuntu:/tmp/0x03$ echo $PATH
	/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
	julien@ubuntu:/tmp/0x03$ . ./3-paths 
	11
	julien@ubuntu:/tmp/0x03$ PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:::::/hello
	julien@ubuntu:/tmp/0x03$ . ./3-paths 
	12
	julien@ubuntu:/tmp/0x03$ 

Filename: **3-paths**

## 4. Global variables 
Create a script that lists environment variables.

	julien@ubuntu:/tmp/0x03$ source ./4-global_variables
	CC=gcc
	CDPATH=.:~:/usr/local:/usr:/
	CFLAGS=-O2 -fomit-frame-pointer
	COLORTERM=gnome-terminal
	CXXFLAGS=-O2 -fomit-frame-pointer
	DISPLAY=:0
	DOMAIN=hq.garrels.be
	e=
	TOR=vi
	FCEDIT=vi
	FIGNORE=.o:~
	G_BROKEN_FILENAMES=1
	GDK_USE_XFT=1
	GDMSESSION=Default
	GNOME_DESKTOP_SESSION_ID=Default
	GTK_RC_FILES=/etc/gtk/gtkrc:/nethome/franky/.gtkrc-1.2-gnome2
	GWMCOLOR=darkgreen
	GWMTERM=xterm
	HISTFILESIZE=5000
	history_control=ignoredups
	HISTSIZE=2000
	HOME=/nethome/franky
	HOSTNAME=octarine.hq.garrels.be
	INPUTRC=/etc/inputrc
	IRCNAME=franky
	JAVA_HOME=/usr/java/j2sdk1.4.0
	LANG=en_US
	LDFLAGS=-s
	LD_LIBRARY_PATH=/usr/lib/mozilla:/usr/lib/mozilla/plugins
	LESSCHARSET=latin1
	LESS=-edfMQ
	LESSOPEN=|/usr/bin/lesspipe.sh %s
	LEX=flex
	LOCAL_MACHINE=octarine
	LOGNAME=franky
	[...]
	julien@ubuntu:/tmp/0x03$ 

Filename: **4-global_variables**

## 5. Local variables 
Create a script that lists all local variables and environment variables, and functions.

	julien@ubuntu:/tmp/0x03$ . ./5-local_variables
	BASH=/bin/bash
	BASHOPTS=checkwinsize:cmdhist:complete_fullquote:expand_aliases:extglob:extquote:force_fignore:histappend:interactive_comments:progcomp:promptvars:sourcepath
	BASH_ALIASES=()
	BASH_ARGC=()
	BASH_ARGV=()
	BASH_CMDS=()
	BASH_COMPLETION_COMPAT_DIR=/etc/bash_completion.d
	BASH_LINENO=()
	BASH_REMATCH=()
	BASH_SOURCE=()
	BASH_VERSINFO=([0]="4" [1]="3" [2]="46" [3]="1" [4]="release" [5]="x86_64-pc-linux-gnu")
	BASH_VERSION='4.3.46(1)-release'
	CLUTTER_IM_MODULE=xim
	COLUMNS=133
	COMPIZ_CONFIG_PROFILE=ubuntu
	COMP_WORDBREAKS=$' \t\n"\'><=;|&(:'
	DBUS_SESSION_BUS_ADDRESS=unix:abstract=/tmp/dbus-Fg27Lr20bq
	DEFAULTS_PATH=/usr/share/gconf/ubuntu.default.path
	DESKTOP_SESSION=ubuntu
	[...]
	julien@ubuntu:/tmp/0x03$ 

Filename: **5-local_variables**

## 6. Local variable 
Create a script that creates a new local variable.

- Name: `BEST`
- Value: `School`

Filename: **6-create_local_variable**

## 7. Global variable 
Create a script that creates a new global variable.

- Name: `BEST`
- Value: `School`

Filename: **7-create_global_variable**

## 8. Every addition to true knowledge is an addition to human power 
Write a script that prints the result of the addition of 128 with the value stored in the environment variable `TRUEKNOWLEDGE`, followed by a new line.

	julien@production-503e7013:~$ export TRUEKNOWLEDGE=1209
	julien@production-503e7013:~$ ./8-true_knowledge | cat -e
	1337$
	julien@production-503e7013:~$

Filename: **8-true_knowledge**

## 9. Divide and rule 
Write a script that prints the result of `POWER` divided by `DIVIDE`, followed by a new line.

- `POWER` and `DIVIDE` are environment variables

<!-- Output -->

	julien@production-503e7013:~$ export POWER=42784
	julien@production-503e7013:~$ export DIVIDE=32
	julien@production-503e7013:~$ ./9-divide_and_rule | cat -e
	1337$
	julien@production-503e7013:~$

Filename: **9-divide_and_rule**

## 
