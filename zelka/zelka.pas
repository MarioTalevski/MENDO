program zelka;   (*Mario Talevski*)
 
var H,U,D,n,k:longint;
 
 
begin
 
   readln(H,U,D);
  
   while (n < H) do
  
     repeat
     n:=n+U;
     if (n<H) 
     then n:=n-D;
     k:=k+1;
     until (n >= H);
      
   writeln(k);
 
end.