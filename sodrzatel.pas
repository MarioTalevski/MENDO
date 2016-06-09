program sodrzatel;
 
var a,b:integer;
 
function nzd(m,n:integer):integer;
begin
if n=0 then
nzd:=m
else
nzd:=nzd(n,m mod n);
end;
 
function nzs(m,n:integer):integer;
begin
nzs:=(m*n) div nzd(m,n);
end;
 
begin
readln(a,b);
writeln(nzs(a,b));
end.
