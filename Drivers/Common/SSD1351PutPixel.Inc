%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (PutPixel)
%;**     Description :
%;**         Writes a pixel to the display memory buffer
%include Common\GeneralParameters.inc(27)
%;**         x%Parx %>27 - x coordinate
%;**         y%Pary %>27 - 
%;**         color%Parcolor %>27 - pixel color
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine