program ostatkok;
 
var
    i,j,y,br,br1,momentalen:integer;
    predhodnoViden:boolean;
    niza:array[1..10] of integer;
 
begin
 
for y:=1 to 10 do
begin
readln(niza[y]);
end;
for y:=1 to 10 do
begin
niza[y]:=niza[y] mod 42;
end;
 
for i:=1 to 10 do
begin
 
momentalen := niza[i];
predhodnoViden:=false;
 
for j:=1 to i-1 do
begin
  if (momentalen=niza[j]) then
     predhodnoViden:=true;
end;
 
if predhodnoViden=false then
   br:=br+1;
 
end;
 
 
writeln(br);
 
end.