%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xQueueIsQueueFullFromISR)
%;**     Description :
%;**         Queries a queue to determine if the queue is full. This
%;**         function should only be used in an ISR. 
%include Common\GeneralParameters.inc(27)
%;**         xQueue%ParxQueue %>27 - The handle of the queue being
%;** %>29 queried.
%;**     Returns     :
%;**         ---%RetVal %>27 - pdFALSE if the queue is not full, or any
%;** %>29 other value if the queue is full. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine