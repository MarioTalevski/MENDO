program lisja;  
 
var max,di2,di,ni:integer;
 
begin
 
     readln(di,ni);
      
     max:=ni;
     di2:=di;
      
      repeat
      readln(di,ni);
      if ni>max then
         begin
            max:=ni;
            di2:=di;
         end;
      until di=30;
        
     writeln(di2,' noemvri');
     readln;
      
end.
