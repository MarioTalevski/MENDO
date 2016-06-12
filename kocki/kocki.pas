Program zadaca1;
 
Var i,n,m,x,x1,k,k1,rez,pom:integer;
 
Begin
 
readln(n,m);
 
if n>m then pom:=m
else pom:=n;
 
for i:= 1 to pom do
begin
x:=x+1;
x1:=x1+1;
k:=x*x1;
if (k>rez) and (k mod 2 = 0) then
begin
rez:=k;
end;
end;
 
writeln(rez);
 
End.