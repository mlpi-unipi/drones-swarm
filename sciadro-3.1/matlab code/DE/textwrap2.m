function ret = textwrap2(stringIn, textWidth)
%TEXTWRAP2  Wrap text string.
%   OUT = TEXTWRAP2(IN, COL) wraps the given text string IN to fit into COL
%   columns. The results is a string with line breaks '\n' inserted.
%
%   OUT = TEXTWRAP2(IN) uses a default number of 100 columns.
%
%   TEXTWIDHT = TEXTWRAP (without input arguments) returns the default text width.
%
%   Note: This function uses the Matlab-function TEXTWRAP which returns a cell
%   array with each cell containing one line of text.
%
%   Example:
%   disp(textwrap2(myString, 80));
%
%   Markus Buehren
%   Last modified 24.08.2014
%
%   See also TEXTWRAP.

defaultTextWidth = 100;

if nargin == 0
  ret = defaultTextWidth;
  return
elseif nargin < 2
  textWidth = defaultTextWidth;
end

if ischar(stringIn)
  stringIn = {stringIn}; % function textwrap requires a cell array as input
end
stringOutCell = textwrap(stringIn, textWidth);

ret = '';
for k = 1:length(stringOutCell)
  ret = [ret, stringOutCell{k}, sprintf('\n')]; %#ok
end
ret(end) = ''; % remove last line break
