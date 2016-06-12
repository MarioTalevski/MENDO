program neparenzbir;
 
var a,b,k,n:longint;
 
begin
 
n:=0;
readln(a,b);
for k:=a to b do
if k mod 2 <> 0 then
n:=n+k;
writeln(n);
readln;
 
end.