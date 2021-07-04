/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 800;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
"Iosevka Nerd Font:size=12:style:Bold:antialias=true:autohint=true",
"FontAwesome:size=18"
};
static const char *prompt      = "run: " ;      /* -p option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#b8bb26", "#1d2021" },
	[SchemeSel] = { "#1d2021", "#d3869b" },
	[SchemeSelHighlight] = { "#458588", "#d3869b" },
	[SchemeNormHighlight] = { "#fabd2f", "#1d2021" },
	[SchemeOut] = { "#1d2021", "#458588" },
	[SchemeMid] = { "#8ec07c", "#1d2021" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 30;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;  /* -bw option; to add border width */
