/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 800;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Mononoki:size=14"
};
static const char *prompt      = "run: " ;      /* -p option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#e5e9f0", "#2e3440" },
	[SchemeSel] = { "#eceff4", "#88c0d0" },
	[SchemeSelHighlight] = { "#d8dee9", "#434c5e" },
	[SchemeNormHighlight] = { "#8fbcbb", "#4c566a" },
	[SchemeOut] = { "#3b4252", "#88c0d0" },
	[SchemeMid] = { "#d8dee9", "#2e3440" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 15;
static unsigned int lineheight = 22;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;  /* -bw option; to add border width */
