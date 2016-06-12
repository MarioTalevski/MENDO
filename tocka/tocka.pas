program tocka;        (*Mario Talevski*)
 
var px,py,a,b,tx,ty,x,y:integer;
 
begin
 
   readln(px,py,a,b,x,y);
 
   if (((x>=px) and (x<=px+a)) and ((y>=py) and (y<=py+b)))  then
 
     begin
 
        if ((x=px) or (x=px+a) or (y=py) or (y=py+b))   then
 
            begin
               writeln('strana')
            end
 
          else
 
            begin
               writeln('vnatre');
            end;
      end
 
          else
   
            begin
               writeln('nadvor');
            end;
 
end.