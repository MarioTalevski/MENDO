program kastrenje;
label 1,2;
var n,k,poz,i,j:integer;
tr:boolean;
zborovi:array[1..50] of string;
pom,del:string;
begin
        readln(n);
        for k:=1 to n do readln(zborovi[k]);
        for k:=1 to n do begin
                poz:=1;
                tr:=false;
                pom:='';
                while tr=false do begin
                        pom:=pom+zborovi[k][poz];
                        tr:=true;
                        for i:=1 to n do begin
                                if (i<>k) then begin
                                        del:='';
                                        if poz>length(zborovi[i]) then begin
                                                goto 2;
                                        end
                                        else begin
                                                for j:=1 to poz do del:=del+zborovi[i][j];
                                                if del=pom then begin
                                                        tr:=false;
                                                        goto 1;
                                                end;
                                        end;
                                end;
                                2:
                        end;
                        1:if tr=false then poz:=poz+1;
                end;
                writeln(pom);
        end;
end.