program torta;
var
   a,b:array [1..100] of integer;
   p,n,k,zbir,i,j:integer;
begin
readln(n);
readln(k);
zbir := 0;
for i:= 1 to k do
    begin
    readln(a[i], b[i]);
    end;
for i:=1 to k-1 do
    begin
    for j:=i+1 to k do
        if a[i]>a[j] then
        begin
        p:=a[i];
        a[i]:=a[j];
        a[j]:=p;
        end;
    end;
for i:=1 to k-1 do
    begin
    for j:=i+1 to k do
        if b[i]>b[j] then
        begin
        p:=b[i];
        b[i]:=b[j];
        b[j]:=p;
        end;
    end;
repeat
begin
     if n >= 6 then
        begin
        if a[1]<= (b[1]*6) then
           begin
           zbir:= zbir + a[1];
           n:=n - 6;
           end;
        if a[1] > (b[1]*6) then
           begin
           zbir:= zbir + (b[1]*6);
           n:=n-6;
           end;
        end;
     if n< 6 then
        begin
        if (b[1]*n) <= a[1] then
           begin
           zbir :=zbir +  (b[1]*n);
           n:=0;
           end
        else
            begin
            zbir:= zbir + a[1];
            n:=0;
            end;
        end;
end;
until (n<=0);
writeln(zbir);
end.