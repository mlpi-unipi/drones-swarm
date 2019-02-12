function setrandomseed(seedValue)
%SETRANDOMSEED  Set random seed using RandStream or rand/randn
%   SETRANDOMSEED(SEEDVALUE) sets the random seed to SEEDVALUE using
%   either function RandStream or functions rand/randn, depending on
%   the Matlab version in use.
%
%   Markus Buehren
%   Last modified 29.08.2014
%
%   See also RANDSTREAM, RAND, RANDN.

seedValueSet = false;

matlabInfo = ver('MATLAB');
if str2double(regexprep(matlabInfo.Version, '(\.[^\.]*)\..*', '$1')) >= 7.9 
  % not sure in which Matlab version exactly RandStream was introduced
  try %#ok
    RandStream.setDefaultStream(RandStream.create('mt19937ar', 'seed', seedValue));
    seedValueSet = true;
  end          
end

if seedValueSet == false
  rand ('state', seedValue); %#ok
  randn('state', seedValue); %#ok
end
