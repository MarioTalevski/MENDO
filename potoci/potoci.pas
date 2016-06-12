program potoci;
var
   a,b,c,d:array [1..1200] of longint;
   n,i,j,m,v:integer;
begin
readln(n);
a[1]:=1;
b[1]:=3;
c[1]:=9;
d[1]:=n;
for i:=2 to 1200 do
    begin
    a[i]:=a[i-1]+(a[i-1]mod 10)+(a[i-1]div 10 mod 10)+(a[i-1]div 100 mod 10)+(a[i-1]div 1000 mod 10)+(a[i-1]div 10000 mod 10);
    b[i]:=b[i-1]+(b[i-1]mod 10)+(b[i-1]div 10 mod 10)+(b[i-1]div 100 mod 10)+(b[i-1]div 1000 mod 10)+(b[i-1]div 10000 mod 10);
    c[i]:=c[i-1]+(c[i-1]mod 10)+(c[i-1]div 10 mod 10)+(c[i-1]div 100 mod 10)+(c[i-1]div 1000 mod 10)+(c[i-1]div 10000 mod 10);
    d[i]:=d[i-1]+(d[i-1]mod 10)+(d[i-1]div 10 mod 10)+(d[i-1]div 100 mod 10)+(d[i-1]div 1000 mod 10)+(d[i-1]div 10000 mod 10);
    end;
for i:=1 to 1200 do
    begin
    for j:=1 to 1200 do
        if d[i]=a[j] then
           begin
                if (m=0) or (a[j]<m) then
                   begin
                   m:=a[j];
                   v:= 1;
                   end;
           end;
    for j:=1 to 1200 do
        if d[i]=b[j] then
           begin
                if (b[j]< m) or (m=0) then
                   begin
                   m:=b[j];
                   v:= 3;
                   end;
           end;
    for j:=1 to 1200 do
        if d[i]=c[j] then
           begin
                if (c[j] < m)or (m=0) then
                   begin
                   m:= c[j];
                   v:=9;
                   end;
           end;
    end;
writeln(v,' ',m);
end.