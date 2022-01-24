#ifndef _CTERM_H_
#define _CTERM_H_

// Control macros

// define this macros if your terminal older then aixterm
// #define CT_OLD_TERM

extern void CT_PrintTable(void);
extern void CT_PrintTableRGB(void);
extern unsigned char CT_RgbToNum(unsigned char r, unsigned char g, unsigned char b);

// Control symbols
#define _CT_e				"\e["
#define _CT_end				"m"
#define _CT_sep				";"

// Generators of escape sequence
#define CT_GEN(e)			_CT_e e _CT_end

#define CT_GEN2(e1, e2)		_CT_e   e1 \
							_CT_sep e2 \
							_CT_end

#define CT_GEN3(e1, e2, e3)  _CT_e   e1 \
							_CT_sep e2 \
							_CT_sep e3 \
							_CT_end

#define CT_GEN4(e1, e2, e3, e4) \
							_CT_e   e1 \
							_CT_sep e2 \
							_CT_sep e3 \
							_CT_sep e4 \
							_CT_end

#define CT_GEN5(e1, e2, e3, e4, e5) \
							_CT_e   e1 \
							_CT_sep e2 \
							_CT_sep e3 \
							_CT_sep e4 \
							_CT_sep e5 \
							_CT_end

#define CT_GEN6(e1, e2, e3, e4, e5, e6) \
							_CT_e   e1 \
							_CT_sep e2 \
							_CT_sep e3 \
							_CT_sep e4 \
							_CT_sep e5 \
							_CT_sep e6 \
							_CT_end

#define CT_GEN7(e1, e2, e3, e4, e5, e6, e7) \
							_CT_e   e1 \
							_CT_sep e2 \
							_CT_sep e3 \
							_CT_sep e4 \
							_CT_sep e5 \
							_CT_sep e6 \
							_CT_sep e7 \
							_CT_end


#define CT_GEN8(e1, e2, e3, e4, e5, e6, e7, e8) \
							_CT_e   e1 \
							_CT_sep e2 \
							_CT_sep e3 \
							_CT_sep e4 \
							_CT_sep e5 \
							_CT_sep e6 \
							_CT_sep e7 \
							_CT_sep e8 \
							_CT_end

// Style symbols
#define CT_s_reset			"0"
#define CT_s_bold           "1"
#define CT_s_tone			"2"
#define CT_s_italic			"3"
#define CT_s_underline      "4"
#define CT_s_blink          "5"
#define CT_s_reverse        "7"

// Style cancel symbols
#define CT_sc_bold          "21"
#define CT_sc_tone			"22"
#define CT_sc_italic		"23"
#define CT_sc_underline     "24"
#define CT_sc_blink         "25"
#define CT_sc_reverse       "27"

// Fore color symbols
#define CT_c_black          "30"
#define CT_c_red            "31"
#define CT_c_green          "32"
#define CT_c_brown          "33"
#define CT_c_blue           "34"
#define CT_c_purple         "35"
#define CT_c_cyan           "36"
#define CT_c_gray           "37"
#define _CT_c_num			"38" _CT_sep "5"
#define CT_c_num_GEN(n)		_CT_c_num _CT_sep #n

// Background color symbols
#define CT_bg_black         "40"
#define CT_bg_red           "41"
#define CT_bg_green         "42"
#define CT_bg_brown         "43"
#define CT_bg_blue          "44"
#define CT_bg_purple        "45"
#define CT_bg_cyan          "46"
#define CT_bg_gray          "47"
#define _CT_bg_num			"48" _CT_sep "5"
#define CT_bg_num_GEN(n)	_CT_bg_num _CT_sep #n

// Intensive fore color symbols
#define CT_c_dk_gray        "90"
#define CT_c_lt_red         "91"
#define CT_c_lt_green       "92"
#define CT_c_yellow         "93"
#define CT_c_lt_blue        "94"
#define CT_c_lt_purple      "95"
#define CT_c_lt_cyan        "96"
#define CT_c_white          "97"

// Intensive bg color symbols
#define CT_bg_dk_gray       "100"
#define CT_bg_lt_red        "101"
#define CT_bg_lt_green      "102"
#define CT_bg_yellow        "103"
#define CT_bg_lt_blue       "104"
#define CT_bg_lt_purple     "105"
#define CT_bg_lt_cyan       "106"
#define CT_bg_white         "107"

// Sets
#define CT_RESET                CT_GEN(CT_s_reset)

// Fore colors
#define CT_C_BLACK              CT_GEN(CT_c_black )
#define CT_C_RED                CT_GEN(CT_c_red   )
#define CT_C_GREEN              CT_GEN(CT_c_green )
#define CT_C_BROWN              CT_GEN(CT_c_brown )
#define CT_C_BLUE               CT_GEN(CT_c_blue  )
#define CT_C_PURPLE             CT_GEN(CT_c_purple)
#define CT_C_CYAN               CT_GEN(CT_c_cyan  )
#define CT_C_GRAY               CT_GEN(CT_c_gray )

#ifdef CT_OLD_TERM
	// Fore modified colors
	#define CT_C_DK_GRAY        CT_GEN2(CT_s_bold, CT_c_black )
	#define CT_C_LT_RED         CT_GEN2(CT_s_bold, CT_c_red   )
	#define CT_C_LT_GREEN       CT_GEN2(CT_s_bold, CT_c_green )
	#define CT_C_YELLOW         CT_GEN2(CT_s_bold, CT_c_brown )
	#define CT_C_LT_BLUE        CT_GEN2(CT_s_bold, CT_c_blue  )
	#define CT_C_LT_PURPLE      CT_GEN2(CT_s_bold, CT_c_purple)
	#define CT_C_LT_CYAN        CT_GEN2(CT_s_bold, CT_c_cyan  )
	#define CT_C_WHITE          CT_GEN2(CT_s_bold, CT_c_gray )
#else
	// Fore light colors
	#define CT_C_DK_GRAY        CT_GEN(CT_c_dk_gray  )
	#define CT_C_LT_RED         CT_GEN(CT_c_lt_red   )
	#define CT_C_LT_GREEN       CT_GEN(CT_c_lt_green )
	#define CT_C_YELLOW         CT_GEN(CT_c_yellow   )
	#define CT_C_LT_BLUE        CT_GEN(CT_c_lt_blue  )
	#define CT_C_LT_PURPLE      CT_GEN(CT_c_lt_purple)
	#define CT_C_LT_CYAN        CT_GEN(CT_c_lt_cyan  )
	#define CT_C_WHITE          CT_GEN(CT_c_white    )
#endif


// Background colors
#define CT_BG_BLACK             CT_GEN(CT_bg_black )
#define CT_BG_RED               CT_GEN(CT_bg_red   )
#define CT_BG_GREEN             CT_GEN(CT_bg_green )
#define CT_BG_BROWN             CT_GEN(CT_bg_brown )
#define CT_BG_BLUE              CT_GEN(CT_bg_blue  )
#define CT_BG_PURPLE            CT_GEN(CT_bg_purple)
#define CT_BG_CYAN              CT_GEN(CT_bg_cyan  )
#define CT_BG_GRAY              CT_GEN(CT_bg_gray  )

#ifdef CT_OLD_TERM
	// Background modified colors
	#define CT_BG_DK_GRAY       CT_GEN2(CT_s_bold, CT_bg_black )
	#define CT_BG_LT_RED        CT_GEN2(CT_s_bold, CT_bg_red   )
	#define CT_BG_LT_GREEN      CT_GEN2(CT_s_bold, CT_bg_green )
	#define CT_BG_YELLOW        CT_GEN2(CT_s_bold, CT_bg_brown )
	#define CT_BG_LT_BLUE       CT_GEN2(CT_s_bold, CT_bg_blue  )
	#define CT_BG_LT_PURPLE     CT_GEN2(CT_s_bold, CT_bg_purple)
	#define CT_BG_LT_CYAN       CT_GEN2(CT_s_bold, CT_bg_cyan  )
	#define CT_BG_WHITE         CT_GEN2(CT_s_bold, CT_bg_gray  )
#else
	// Background intensivity colors
	#define CT_BG_DK_GRAY       CT_GEN(CT_bg_dk_gray  )
	#define CT_BG_LT_RED        CT_GEN(CT_bg_lt_red   )
	#define CT_BG_LT_GREEN      CT_GEN(CT_bg_lt_green )
	#define CT_BG_YELLOW        CT_GEN(CT_bg_yellow   )
	#define CT_BG_LT_BLUE       CT_GEN(CT_bg_lt_blue  )
	#define CT_BG_LT_PURPLE     CT_GEN(CT_bg_lt_purple)
	#define CT_BG_LT_CYAN       CT_GEN(CT_bg_lt_cyan  )
	#define CT_BG_WHITE         CT_GEN(CT_bg_white    )
#endif

// Example of string literalfor testing and understanding
#define CT_EXAMPLE         	CT_C_RED   "R" \
							CT_C_GREEN "G" \
							CT_C_BLUE  "B" \
							CT_RESET   " example\n"

// Example of custom color and style
#define CT_EXAMPLE2         CT_GEN3(CT_c_white, CT_bg_blue, CT_s_underline)

// Example uses EXAMPLE2
#define CT_EXAMPLE3			CT_EXAMPLE2 "example3" CT_RESET "\n"

// Example of 255 number color
#define CT_EXAMPLE4			CT_GEN2(CT_c_num_GEN(151), CT_bg_num_GEN(173)) "example4" CT_RESET "\n"

#endif // _CTERM_H_
