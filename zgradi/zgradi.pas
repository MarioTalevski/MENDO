program zgradi;
 
var n,vi,i,j,pom,rez,max:longint;
    niza:array[1..500] of longint;
 
begin
 
readln(n);
 
for pom:= 1 to n do
begin
readln(niza[pom]);
if niza[pom]>max then begin max:=niza[pom]; end;
end;
 
 
for pom:= 1 to n do
begin
if niza[pom]<max then
rez:=rez+(max-niza[pom]);
end;
 
writeln(rez);
 
end.