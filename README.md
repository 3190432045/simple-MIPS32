#  simple-MIPS32
`Simple MIPS32 Simulator`  
A very basic MIPS32 simulator with a limited set of instructions and reads MIPS machine code.

List of implemented instructions:  
`ADDI, ADD, SUB, AND, OR, XOR, NOR, LW, SW, J, JR, BEQ, BNE, SLT, SLLV, SRLV`  

<html xmlns:v="urn:schemas-microsoft-com:vml"
xmlns:o="urn:schemas-microsoft-com:office:office"
xmlns:w="urn:schemas-microsoft-com:office:word"
xmlns:m="http://schemas.microsoft.com/office/2004/12/omml"
xmlns="http://www.w3.org/TR/REC-html40">

<body lang=ZH-CN style='tab-interval:21.0pt;text-justify-trim:punctuation'>

<div class=WordSection1 style='layout-grid:15.6pt'>

<table class=MsoNormalTable border=1 cellspacing=0 cellpadding=0
 style='margin-left:5.4pt;border-collapse:collapse;border:none;mso-border-top-alt:
 solid black 1.0pt;mso-border-bottom-alt:solid black 1.0pt;mso-yfti-tbllook:
 1184;mso-padding-alt:0cm 5.4pt 0cm 5.4pt'>
 <tr style='mso-yfti-irow:0;mso-yfti-firstrow:yes'>
  <td width=82 rowspan=2 style='width:61.4pt;border-top:solid windowtext 1.5pt;
  border-left:none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext 1.5pt;mso-border-bottom-alt:solid windowtext .5pt;
  mso-border-right-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>Instruction<o:p></o:p></span></b></p>
  </td>
  <td width=367 colspan=6 style='width:275.35pt;border-top:solid windowtext 1.5pt;
  border-left:none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-left-alt:solid windowtext .5pt;mso-border-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext 1.5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>Instruction format<o:p></o:p></span></b></p>
  </td>
  <td width=250 style='width:187.75pt;border-top:solid windowtext 1.5pt;
  border-left:none;border-bottom:solid windowtext 1.0pt;border-right:none;
  mso-border-left-alt:solid windowtext .5pt;mso-border-top-alt:solid windowtext 1.5pt;
  mso-border-left-alt:solid windowtext .5pt;mso-border-bottom-alt:solid windowtext .5pt;
  padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>Description<o:p></o:p></span></b></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:1'>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b style='mso-bidi-font-weight:normal'><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'>31~26<o:p></o:p></span></b></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b style='mso-bidi-font-weight:normal'><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'>25~21<o:p></o:p></span></b></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b style='mso-bidi-font-weight:normal'><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'>20~16<o:p></o:p></span></b></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b style='mso-bidi-font-weight:normal'><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'>15~11<o:p></o:p></span></b></p>
  </td>
  <td width=69 style='width:51.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b style='mso-bidi-font-weight:normal'><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'>10~6<o:p></o:p></span></b></p>
  </td>
  <td width=62 style='width:46.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b style='mso-bidi-font-weight:normal'><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'>5~0<o:p></o:p></span></b></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b style='mso-bidi-font-weight:normal'><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'>32 bits<o:p></o:p></span></b></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:2'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>R type<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><b style='mso-bidi-font-weight:normal'><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>opcode</span></b></span><b
  style='mso-bidi-font-weight:normal'><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>(6)<o:p></o:p></span></b></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><b style='mso-bidi-font-weight:normal'><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>rs</span></b></span><b
  style='mso-bidi-font-weight:normal'><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>(5)<o:p></o:p></span></b></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><b style='mso-bidi-font-weight:normal'><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>rt</span></b></span><b
  style='mso-bidi-font-weight:normal'><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>(5)<o:p></o:p></span></b></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b style='mso-bidi-font-weight:normal'><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'>rd(5)<o:p></o:p></span></b></p>
  </td>
  <td width=69 style='width:51.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><b style='mso-bidi-font-weight:normal'><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>shamt</span></b></span><b
  style='mso-bidi-font-weight:normal'><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>(5)<o:p></o:p></span></b></p>
  </td>
  <td width=62 style='width:46.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><b style='mso-bidi-font-weight:normal'><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>funct</span></b></span><b
  style='mso-bidi-font-weight:normal'><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>(6)<o:p></o:p></span></b></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b style='mso-bidi-font-weight:normal'><span lang=EN-US
  style='color:black;mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:
  ZH-CN'>Register</span></b><b style='mso-bidi-font-weight:normal'><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></b></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:3'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>ADD<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>000000</span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rs</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rt</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>rd<o:p></o:p></span></p>
  </td>
  <td width=69 style='width:51.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>00000</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=62 style='width:46.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>100000</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>Add Word</span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>r</span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'>d</span><span lang=EN-US
  style='color:black;mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:
  ZH-CN'> ← <span class=SpellE>rs</span> + </span><span class=SpellE><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>rt</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:4'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>SUB<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>000000</span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rs</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rt</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>rd<o:p></o:p></span></p>
  </td>
  <td width=69 style='width:51.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>00000</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=62 style='width:46.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>100010</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>Subtract Word</span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>rd ← <span class=SpellE>rs</span>
  </span><span lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>-</span><span
  lang=EN-US style='color:black;mso-themecolor:text1;mso-themeshade:191;
  mso-fareast-language:ZH-CN'> <span class=SpellE>rt</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:5'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>AND<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>000000</span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rs</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rt</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>rd<o:p></o:p></span></p>
  </td>
  <td width=69 style='width:51.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>00000</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=62 style='width:46.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>100100</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>And</span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>rd ← <span class=SpellE>rs</span>
  </span><span lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>AND</span><span
  lang=EN-US style='color:black;mso-themecolor:text1;mso-themeshade:191;
  mso-fareast-language:ZH-CN'> <span class=SpellE>rt</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:6'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>OR<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>000000</span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'>rs</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'>rt</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>rd</span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=69 style='width:51.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>00000</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=62 style='width:46.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>100101</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>Or<o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>rd ← <span class=SpellE>rs</span>
  </span><span lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>OR</span><span
  lang=EN-US style='color:black;mso-themecolor:text1;mso-themeshade:191;
  mso-fareast-language:ZH-CN'> <span class=SpellE>rt</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:7'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>XOR<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>000000</span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'>rs</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'>rt</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>rd</span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=69 style='width:51.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>00000</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=62 style='width:46.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>100110</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>Xor</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>rd ← <span class=SpellE>rs</span>
  </span><span lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>XOR</span><span
  lang=EN-US style='color:black;mso-themecolor:text1;mso-themeshade:191;
  mso-fareast-language:ZH-CN'> <span class=SpellE>rt</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:8'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>NOR<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>000000</span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'>rs</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'>rt</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>rd</span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=69 style='width:51.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>00000</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=62 style='width:46.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>100111</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>Nor<o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>rd ← <span class=SpellE>rs</span>
  </span><span lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>N</span><span
  lang=EN-US style='color:black;mso-themecolor:text1;mso-themeshade:191;
  mso-fareast-language:ZH-CN'>OR <span class=SpellE>rt</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:9'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>JR<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>000000<o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rs</span></span><span lang=EN-US
  style='color:black;mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:
  ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=106 colspan=2 style='width:79.5pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>00 0000 <span class=SpellE>0000</span></span><span
  lang=EN-US style='color:black;mso-themecolor:text1;mso-themeshade:191;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=69 style='width:51.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black'>hint</span><span
  lang=EN-US style='color:black;mso-themecolor:text1;mso-themeshade:191'><o:p></o:p></span></p>
  </td>
  <td width=62 style='width:46.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>001000<o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>Jump Register</span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>pc</span><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'> ← <span class=SpellE>r<span
  style='color:black'>s</span></span></span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:10'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>SLT<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>000000<o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'>rs</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'>rt</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>rd</span><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=69 style='width:51.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>00000</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=62 style='width:46.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>101010<o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>Set on Less Than</span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>rd ← </span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'>( </span><span class=SpellE><span
  lang=EN-US style='color:black;mso-themecolor:text1;mso-themeshade:191;
  mso-fareast-language:ZH-CN'>rs</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'> &lt;</span><span lang=EN-US
  style='color:black;mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:
  ZH-CN'> <span class=SpellE>rt</span></span><span lang=EN-US style='color:
  black;mso-fareast-language:ZH-CN'> )</span><span lang=EN-US style='color:
  black;mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:11'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>SLLV<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>000000<o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'>rs</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'>rt</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>rd</span><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=69 style='width:51.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>00000</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=62 style='width:46.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>000100<o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>Shift Word Left Logical
  Variable</span><span lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>rd ← <span class=SpellE>rs</span>
  </span><span lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>&lt;&lt;</span><span
  lang=EN-US style='color:black;mso-themecolor:text1;mso-themeshade:191;
  mso-fareast-language:ZH-CN'> <span class=SpellE>rt</span><o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:12'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>SRLV<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>000000<o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'>rs</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'>rt</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>rd</span><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=69 style='width:51.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>00000</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=62 style='width:46.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>000110<o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>Shift Word Right Logical
  Variable</span><span lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>rd ← <span class=SpellE>rs</span>
  </span><span lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>&gt;&gt;</span><span
  lang=EN-US style='color:black;mso-themecolor:text1;mso-themeshade:191;
  mso-fareast-language:ZH-CN'> <span class=SpellE>rt</span><o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:13'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>I type<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><b style='mso-bidi-font-weight:normal'><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>opcode</span></b></span><b
  style='mso-bidi-font-weight:normal'><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>(6)<o:p></o:p></span></b></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><b style='mso-bidi-font-weight:normal'><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>rs</span></b></span><b
  style='mso-bidi-font-weight:normal'><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>(5)<o:p></o:p></span></b></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><b style='mso-bidi-font-weight:normal'><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>rt</span></b></span><b
  style='mso-bidi-font-weight:normal'><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>(5)<o:p></o:p></span></b></p>
  </td>
  <td width=184 colspan=3 style='width:138.15pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b style='mso-bidi-font-weight:normal'><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'>address/immediate(16)<o:p></o:p></span></b></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b style='mso-bidi-font-weight:normal'><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'>I</span></b><b
  style='mso-bidi-font-weight:normal'><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'>mmediate</span></b><b
  style='mso-bidi-font-weight:normal'><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></b></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:14'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>ADDI<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>001000<o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rs</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rt</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=184 colspan=3 style='width:138.15pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>immediate<o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>Add Immediate Word<o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rt</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'> ← <span class=SpellE>rs</span>
  + immediate<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:15'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>LW<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>100011</span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>base<o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rt</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=184 colspan=3 style='width:138.15pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>offset<o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>Load Word</span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'>rt</span></span><span
  lang=EN-US style='color:black;mso-themecolor:text1;mso-themeshade:191;
  mso-fareast-language:ZH-CN'> ← </span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>memory[ base + offset ]<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:16'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>SW<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>101011</span><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>base<o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rt</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=184 colspan=3 style='width:138.15pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>offset<o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>Store</span><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'> Word<o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>memory[ base + offset ] ← </span><span
  class=SpellE><span lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>rt</span></span><span
  lang=EN-US style='color:black;mso-themecolor:text1;mso-themeshade:191;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:17'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>BEQ<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>000100<o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rs</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rt</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=184 colspan=3 style='width:138.15pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>offset<o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>Branch on Equal</span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>if <span class=SpellE>rs</span>
  = <span class=SpellE>rt</span> then branch</span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:18'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>BNE<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>000101<o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rs</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=53 style='width:39.75pt;border-top:none;border-left:none;
  border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>rt</span></span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=184 colspan=3 style='width:138.15pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>offset<o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>Branch on Equal<o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>if <span class=SpellE>rs</span>
  </span><span lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>≠</span><span
  lang=EN-US style='color:black;mso-themecolor:text1;mso-themeshade:191;
  mso-fareast-language:ZH-CN'> <span class=SpellE>rt</span> then branch<o:p></o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:19'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext .5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>J type<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><b style='mso-bidi-font-weight:normal'><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'>opcode</span></b></span><b
  style='mso-bidi-font-weight:normal'><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'>(6)<o:p></o:p></span></b></p>
  </td>
  <td width=290 colspan=5 style='width:217.65pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b style='mso-bidi-font-weight:normal'><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'>address(26)<o:p></o:p></span></b></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-bottom-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b style='mso-bidi-font-weight:normal'><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'>Jump<o:p></o:p></span></b></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:20;mso-yfti-lastrow:yes'>
  <td width=82 style='width:61.4pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.5pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-top-alt:solid windowtext .5pt;mso-border-bottom-alt:
  solid windowtext 1.5pt;mso-border-right-alt:solid windowtext .5pt;padding:
  0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><b><span lang=EN-US style='color:black;mso-fareast-language:
  ZH-CN'>J<o:p></o:p></span></b></p>
  </td>
  <td width=77 style='width:57.7pt;border-top:none;border-left:none;border-bottom:
  solid windowtext 1.5pt;border-right:solid windowtext 1.0pt;mso-border-top-alt:
  solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;mso-border-bottom-alt:solid windowtext 1.5pt;
  padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191;mso-fareast-language:ZH-CN'>000010</span><span lang=EN-US
  style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=290 colspan=5 style='width:217.65pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.5pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;mso-border-bottom-alt:solid windowtext 1.5pt;
  padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span class=SpellE><span lang=EN-US style='color:black;
  mso-themecolor:text1;mso-themeshade:191'>instr_index</span></span><span
  lang=EN-US style='color:black;mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
  <td width=250 style='width:187.75pt;border:none;border-bottom:solid windowtext 1.5pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  padding:0cm 5.4pt 0cm 5.4pt'>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black'>Jump<o:p></o:p></span></p>
  <p class=MsoNormal align=center style='margin-bottom:0cm;margin-bottom:.0001pt;
  text-align:center'><span lang=EN-US style='color:black;mso-themecolor:text1;
  mso-themeshade:191'>J target</span><span lang=EN-US style='color:black;
  mso-fareast-language:ZH-CN'><o:p></o:p></span></p>
  </td>
 </tr>
</table>

<p class=MsoNormal><span lang=EN-US><o:p>&nbsp;</o:p></span></p>

</div>

</body>

</html>

# Usage
Some debugging-related features have been integrated into the simulator.  
Type the following command in the CMD:  
`SIM /?`

Type the following command to enable verbose mode, memory view, register view and redirect the standard output stream to a log file LOG.TXT:  
`SIM example1.bin /M /R /V > LOG.TXT`  

# Limitations
Currently no assembler.

# License
None.  
