/* See LICENSE file for copyright and license details. */

/* This is the configuration file for kapan calendar. */
/* Feel free to change it according to your needs.  Then recompile the program. */

/* Main directory where kapan stores its data. */
/* HOME is passed via CFLAGS in Makefile as ${HOME} variable. */
#define KAPANDIR HOME "/.kapan"

#define	DATEMSK KAPANDIR "/datemsk"
#define DELIM "/"
#define DATABASE KAPANDIR "/events"
