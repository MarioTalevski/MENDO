program casovnik;
var
        k,a,b,i,n,z,j:integer;
begin
        readln(a,b);
        readln(n,z);
        i:=(60*a)+b;
        j:= (60*n)+z;
        if j<i then j:=j+(24*60);
        k:=j-i;
        i:=k div 60;
        j:=k mod 60;
        if (i<10) and (j<10) then writeln('0',i,':','0',j)
        else if i<10 then writeln('0',i,':',j)
        else if j<10 then writeln(i,':','0',j)
        else writeln(i,':',j);
end.
