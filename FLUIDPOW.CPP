#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
clrscr();
int password;
int choice;
int j=0;
char main,data,aa,ar,jet,ext;
double a,b,c,d,e,f,g,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,ab,ac,ad,ae,af,ag,ah,ai,aj,ak,al,am,an,ao,ap,aq,as,at,au,av,aw,ax,ay,az,ba,bb,bc,bd,be,bi,bj,bk,bl,bm,bn,bo,bp,bq,br,bs,bt,bu,bv,bw,bx,by,bz,ca,cb,cc,cd,ce,cf,cg,ch,ci;
double h=0;
for(int za=0; za<160; za++)
{
cout<<"#";
}
cout<<"\t\t\t\t  WELCOME TO\n\t\t\t\tFLUID POWER -I\n\t\t\tPRACTICAL CALCULATION PROGRAM\n";
for(int zb=0; zb<160; zb++)
{
cout<<"#";
}
cout<<"\n\n\t\t\t  PRESS ENTER TO CONTINUE\n\n\n";
for(int zc=0; zc<160; zc++)
{
cout<<"#";
}
cout<<"\n\n";
for(int zd=0; zd<80; zd++)
{
cout<<"*";
}
cout<<"\t\t\tDESIGNED BY ::   SUNNY M NABHARE (2M)\n";
for(int ze=0; ze<160; ze++)
{
cout<<"*";
}
cout<<"\t\t\tGUIDED BY   ::   M B BHAMBERE sir\n";
for(int zf=0; zf<80; zf++)
{
cout<<"*";
}
getch();
clrscr();
cout<<"\n\n\n\n\n";
for(int zg=0; zg<160; zg++)
{
cout<<"+";
}
cout<<"\n\t\t\t\tENTER PASSWORD\n\n";
for(int zh=0; zh<160; zh++)
{
cout<<"+";
}
cout<<"\t\t\t\t     ";
cin>>password;
if(password==100)
{
clrscr();
}
else
{
exit(0);
}
for(int zi=0; zi<80; zi++)
{
cout<<"%";
}
cout<<"\n\t\t\t\t     UNITS\n\n";
for(int zj=0; zj<80; zj++)
{
cout<<"%";
}
cout<<"\n\n\n\tpi               :: 3.141592654";
cout<<"\n\n\trho (density)    :: 1000";
cout<<"\n\n\n\n\n\n\n\n\n\n\npress ENTER to Continue ...";
getch();
//........................................MAIN MENU
do
{
clrscr();
for(int zk=0; zk<160; zk++)
{
cout<<":";
}
cout<<"\n\t\t\t\t   MAIN MENU\n\n";
for(int zl=0; zl<160; zl++)
{
cout<<":";
}
cout<<"\n\t1.THE METACENTRIC HEIGHT OF A SHIP MODEL ";
cout<<"\n\n\t2.VERIFICATION OF BERNOULLIE EQUATION ";
cout<<"\n\n\t3.FLOW MEASURMENT BY VENTURIMETER ";
cout<<"\n\n\t4.DETERMINATION THE REYNOLDS NUMBER AND TYPE OF FLOW ";
cout<<"\n\n\t5.DETERMINATION OF COEFFICENT OF IMPACT JET ";
cout<<"\n\n\t6.EXIT ";
cout<<"\n\n\n\t\t\tENTER THE CHOICE =";
cin>>choice;
//................................metacentric height
if(choice==1)
{
for(int i=1;i<=10;i++)
{
j++;
clrscr();
for(int zm=0; zm<160; zm++)
{
cout<<"<";
}
cout<<"\n\t\t\t   METACENTRIC HEIGHT\n";
for(int zn=0; zn<160; zn++)
{
cout<<">";
}
cout<<"\nWEIGHT OF SHIP (in grams) :: ";
cin>>a;
for(int zo=0; zo<80; zo++)
{
cout<<"*";
}
cout<<"WEIGHT PLACE ON SHIP (in grams) :: ";
cin>>g;
for(int zq=0; zq<80; zq++)
{
cout<<"*";
}
cout<<"DISTANCE BY WHICH THE WEIGHT IS HANG (in cm) :: ";
cin>>b;
for(int zp=0; zp<80; zp++)
{
cout<<"*";
}
cout<<"ANGLE (in degrees) :: ";
cin>>c;
d=c*(3.141592654/180);
e=tan(d);
f=(g*b)/((a+g)*e);
h=(h+f);
clrscr();
for(int zr=0; zr<160; zr++)
{
cout<<"!";
}
cout<<"\n\nWEIGHT OF SHIP                     :: "<<a<<" gm";
cout<<"\nWEIGHT PLACED ON SHIP              :: "<<g<<" gm";
cout<<"\nDISTANCE BY WHICH WEIGHT IS HANGED :: "<<b<<" cm";
cout<<"\nANGLE                              :: "<<c<<" degree";
cout<<"\nTAN 0                              :: "<<e<<" degree";
cout<<"\nMETACENTRIC HEIGHT                 :: "<<f<<" cm";
cout<<"\n\n";
for(int zs=0; zs<160; zs++)
{
cout<<"!";
}
cout<<"\n\nWNAT TO ENTER MORE DATA ... (y/n) ::";
cin>>data;
if(data=='y'||data=='Y')
{
continue;
}
else
{
break;
}
}
k=h/j;
for(int zt=0; zt<160; zt++)
{
cout<<"/";
}
cout<<"\nMEAN                               :: "<<k<<" cm";
}
//...............................bernoullie equations.
else if(choice==2)
{
for(int z=1;z<20;z++)
{
clrscr();

for(int zu=0; zu<160; zu++)
{
cout<<"$";
}
cout<<"\n\n\t\t\t      BERNOULLIE EQUATION\n\n";
for(int zz=0; zz<160; zz++)
{
cout<<"$";
}
cout<<"\n\nVOLUME OF A WATER (in liters) :: ";
cin>>l ;
for(int zv=0; zv<80; zv++)
{
cout<<"=";
}
cout<<"\nTIME REQUIRED (in seconds) ::";
cin>>m ;
for(int zy=0; zy<80; zy++)
{
cout<<"=";
}
cout<<"\nDIAMETER OF PIPE (in millimeters) ::";
cin>>t;
for(int zw=0; zw<80; zw++)
{
cout<<"=";
}
cout<<"\nPRESSURE HEAD (in millimeters) :: ";
cin>>n ;
for(int zx=0; zx<80; zx++)
{
cout<<"=";
}
cout<<"\nPRESSURE HEAD H1 (in millimeters) :: ";
cin>>o;
clrscr();
r=t*0.001;                 //diameter
p=l*0.001;
q=p/m;                     //discharge
y=((3.141592654/4)*r*r);  //area
s=q/y;                   //velocity
u=(s*s)/(2*9.81);       //k.e
v=n+o;                 //pressure head
w=u+v;	             //total pressure head
x=w*0.001;
clrscr();
for(int ya=0; ya<160; ya++)
{
cout<<"%";
}
cout<<"\n\nVOLUME OF A WATER   :: "<<l<<" meter cube";
cout<<"\nTIME REQUIRED       :: "<<m<<" second";
cout<<"\nDIAMETER OF A PIPE  :: "<<r<<" meter cube";
cout<<"\nPRESSURE HEAD       :: "<<n*0.001<<" meter";
cout<<"\nPRESSURE HEAD H1    :: "<<o*0.001<<" meter";
cout<<"\nDISCHARGE           :: "<<q<<" meter cube per second";
cout<<"\nAREA                :: "<<y<<" meter square";
cout<<"\nVELOCITY            :: "<<s<<" meter per second";
cout<<"\nKINETIC HEAD        :: "<<u<<" meter";
cout<<"\nPRESSURE HEAD       :: "<<v<<" meter";
cout<<"\nTOTAL PRESSURE HEAD :: "<<x<<" meter\n";
for(int yb=0; yb<160; yb++)
{
cout<<"%";
}
cout<<"\nWANT TO ENTER MORE READINGS ... (y/n) :: ";
cin>>aa;
if(aa=='y'||aa=='Y')
{
continue;
}
else
{
break;
}
}
}
//................................venturimeter meter
else if(choice==3)
{
for(int as=1;as<10;as++)
{
clrscr();
for(int yb=0; yb<160; yb++)
{
cout<<"&";
}
cout<<"\n\n\t\t\t\t   VENTURIMETER\n\n";
for(int yc=0; yc<160; yc++)
{
cout<<"&";
}
cout<<"\n\nDIAMETER OF INLET (in mm) :: ";
cin>>ab;
for(int yd=0; yd<80; yd++)
{
cout<<"#";
}
cout<<"\nDIAMETER OF THROAT (in mm) :: ";
cin>>ac;
for(int ye=0; ye<80; ye++)
{
cout<<"#";
}
cout<<"\nVOLUME OF WATER (in liters) :: ";
cin>>ad;
for(int yf=0; yf<80; yf++)
{
cout<<"#";
}
cout<<"\nTIME REQUIRED (in sec) :: ";
cin>>ae;
for(int yg=0; yg<80; yg++)
{
cout<<"#";
}
cout<<"\nDIFFERECNE IN LEVEL OF MERCURY (in cm) :: ";
cin>>af;
clrscr();
bc=ab*0.001;                     //d1
bd=ac*0.001;                    //d2
be=af*0.01;                     //x
ag=12.6*be;       //pressure head diff
ah=(ad*0.001)/ae;        //discharge
ai=((3.141592654/4)*bc*bc); //a1
aj=((3.141592654/4)*bd*bd); //a2
ak=ai*aj;
al=((ai*ai)-(aj*aj));
am=2*9.81*ag;
an=sqrt(am);
ao=sqrt(al);
ap=(ak/ao)*an;     //Qth
aq=ah/ap;          //Cd
for(int yh=0; yh<160; yh++)
{
cout<<"@";
}
cout<<"\n\nDAMETER OF A INLET             :: "<<bc<<" meter";
cout<<"\nDAMETER OF A THROAT            :: "<<bd<<" meter ";
cout<<"\nVOLUME OF WATER                :: "<<ad*0.001<<" meter cube";
cout<<"\nTIME REQUIRED                  :: "<<ae<<" second";
cout<<"\nDIFFERENCE IN LEVEL OF MERCURY :: "<<be<<" meter";
cout<<"\nPRESSURE HEAD DIFFERENCE       :: "<<ag<<" meter";
cout<<"\nAREA OF INLET                  :: "<<ai<<" meter square ";
cout<<"\nAREA OF THROAT                 :: "<<aj<<" meter squre";
cout<<"\nACTUAL DISCHARGE               :: "<<ah<<" meter cube per second";
cout<<"\nTHEORETICAL DISCHARGE           :: "<<ap<<" meter cube per second";
cout<<"\nCOEFFICENT OF DISCHARGE        :: "<<aq<<"\n\n";
for(int yi=0; yi<160; yi++)
{
cout<<"@";
}
cout<<"\nWANT TO ENTER MORE DATA ... (y/n) :: ";
cin>>ar;
if(ar=='y'||ar=='Y')
{
continue;
}
else
{
break;
}
}
}
//....................................reynolds number
else if(choice==4)
{
clrscr();
for(int yi=0; yi<160; yi++)
{
cout<<"{";
}
cout<<"\n\t\t\tREYNOLDS NUMBER AND TYPE OF FLOW\n";
for(int yj=0; yj<160; yj++)
{
cout<<"}";
}
cout<<"\n\nVOLUME OF WATER (in liters) :: ";
cin>>as;
for(int yk=0; yk<160; yk++)
{
cout<<"~";
}
cout<<"TIME REQUIRED (in sec) :: ";
cin>>at;
for(int yl=0; yl<160; yl++)
{
cout<<"~";
}
cout<<"DIAMETER OF PIPE (in mm) :: ";
cin>>au;
for(int yo=0; yo<160; yo++)
{
cout<<"~";
}
cout<<"COEFFICENT OF FRICTION :: ";
cin>>ba;
clrscr();
az=as*0.001;                  //volume
ay=((3.141592654/4)*au*au);
bb=ay*0.001;                 //area
av=az/at;                   //discharge
aw=av/bb;                  //velocity
ax=(1000*aw*az)/ba;       //re
for(int yn=0; yn<160; yn++)
{
cout<<":";
}
cout<<"\n\nVOLUME OF WATER          :: "<<az<<" meter cube";
cout<<"\nTIME REQUIRED          :: "<<at<<" second";
cout<<"\nDIAMETER OF PIPE       :: "<<au<<" millimeter";
cout<<"\nAREA OF PIPE           :: "<<bb<<" meter square";
cout<<"\nCOEFICENT OF FRICTION  :: "<<ba;
cout<<"\nDISCHARGE              :: "<<av<<" meter cube per second";
cout<<"\nVELOCITY               :: "<<aw<<" meter per second";
cout<<"\nREYNOLDS NUMBER        :: "<<ax;
if(ax<2000)
{
cout<<"\n\nTYPE OF FLOW           :: LAMINAR FLOW\n\n";
}
else if(ax>4000)
{
cout<<"\n\nTYPE OF FLOW           :: TURBULENT FLOW\n\n";
}
else
{
cout<<"\n\nTYPE OF FLOW           :: TRANSIENT FLOW\n\n";
}
for(int yp=0; yp<160; yp++)
{
cout<<":";
}
}
//.............................impact jet
else if(choice==5)
{
for(int impact=1;impact<10;impact++)
{
clrscr();
for(int yq=0; yq<160; yq++)
{
cout<<"?";
}
cout<<"\n\t\t\tCOEFFICENT OF IMPACT JET\n";
for(int yr=0; yr<160; yr++)
{
cout<<"?";
}
cout<<"\n\nDISTANCE OF VANE FROM HINGE X1 (in cm) :: ";
cin>>bi;
for(int yt=0; yt<80; yt++)
{
cout<<":";
}
cout<<"\nDISTANCE OF PAN FROM HINGE X2 (in cm) :: ";
cin>>bj;
for(int yu=0; yu<80; yu++)
{
cout<<":";
}
cout<<"\nDIAMETER OF NOZZLE (in cm) :: ";
cin>>bk;
for(int yv=0; yv<80; yv++)
{
cout<<":";
}
cout<<"\nVOLUME OF WATER (in liters) :: ";
cin>>bl;
for(int yw=0; yw<80; yw++)
{
cout<<":";
}
cout<<"\nTIME REQUIRED (in sec) :: ";
cin>>bm;
for(int yx=0; yx<80; yx++)
{
cout<<":";
}
cout<<"\nTYPE OF VANE ::\n\t1 . STATIONARY VERTICAL PLATE\n\t2 . STATIONARY INCLINED PLATE\n\t3 . STATIONARY SEMICIRCULAR PLATE\t:: ";
cin>>bn;
for(int yy=0; yy<80; yy++)
{
cout<<":";
}
cout<<"\nWEIGHT OF PAN (in kg) ::";
cin>>bo;
bp=bi*0.01;     //x1
bq=bj*0.01;     //x2
br=bk*0.01;     //d
bs=bl*0.001;     //volume
bt=bs/bm;        //discharge
bu=((3.141592654/4)*br*br);    //area
bv=bt/bu;   //velocity
if(bn==1)
{
bw=(1000*bu*bv*bv);      //vet pl             f th
}
else if(bn==2)
{
for(int yz=0; yz<80; yz++)
{
cout<<":";
}
cout<<"\nENTER THE ANGEL (degree) :: ";
cin>>bx;
by=bx*(3.141592654/180);
bw=1000*bu*bv*bv*sin(by);     //inc pl      f th
}
else
{
bw=2*1000*bu*bv*bv;           //sem cir pl   f th
}
bz=(bo*bj)/bi;                 //f actual
ca=bz/bw;                      //coefficent
clrscr();
for(int ys=0; ys<160; ys++)
{
cout<<"*";
}
cout<<"\n\nDISTANCE OF VANE FROM HINGE X1 :: "<<bp<<" meter";
cout<<"\nDISTANCE OF PAN FROM HINGE X2 :: "<<bq<<" meter";
cout<<"\nDIAMETER OF NOZZLE            :: "<<br<<" meter";
cout<<"\nVOLUME OF WATER               :: "<<bs<<" meter cube";
cout<<"\nTIME REQUIRED                 :: "<<bm<<" second";
if(bn==1)
{
cout<<"\nTYPE OF VANE                  :: STATIONARY VERTICAL PLANE";
}
else if(bn==2)
{
cout<<"\nANGLE                         :: "<<bx<<" degree";
cout<<"\nTYPE OF VANE                  :: STATIONARY INCLINED PLANE";
}
else
{
cout<<"\nTYPE OF VANE                  :: STATIONARY SEMICIRCULAR PLANE";
}
cout<<"\nWEIGHT OF PAN                 :: "<<bo<<" kilograms";
cout<<"\nDISCHARGE                     :: "<<bt<<" meter cube per second";
cout<<"\nAREA                          :: "<<bu<<" meter square";
cout<<"\nVELOCITY                      :: "<<bv<<" meter per second";
cout<<"\nTHEORETICAL FORCE             :: "<<bw<<" newton per meter square";
cout<<"\nACTUAL FORCE                  :: "<<bz<<" newton per meter square";
cout<<"\nCOEFFICENT OF IMPACT JET      :: "<<ca ;
cout<<"\n\n";
for(int xa=0; xa<160; xa++)
{
cout<<"*";
}
cout<<"\n\nWANT TO ENTER MORE READING ... (y/n) ::";
cin>>jet;
if(jet=='y'||jet=='Y')
{
continue;
}
else
{
break;
}
}
}
//...................................exit
else if(choice==6)
{
for(int et=0;et<=1;et++)
{
clrscr();
for(int xb=0; xb<240; xb++)
{
cout<<"!";
}
cout<<"\t\t\tDESIGNED BY :: SUNNY M NABHARE\n";
for(int xd=0; xd<160; xd++)
{
cout<<"!";
}
cout<<"\n\n\n\n\n\t\t  **  WANT TO EXIT FROM THE PROGRAM ... (Y/N) **\n\n\n\n\n\n";
for(int xc=0; xc<160; xc++)
{
cout<<"!";
}
cout<<"\t\t\tGUIDED BY :: M B BHAMBERE sir\n";
for(int xe=0; xe<240; xe++)
{
cout<<"!";
}
cout<<"\t\t\t\t\t";
cin>>ext;
if(ext=='y'||ext=='Y')
{
exit(0);
}
else
{
break;
}
}
}
else
{
cout<<"\n\n\t\t\t**   WRONG CHOICE   **";
}
cout<<"\n\nwant to go MAIN MENU ... (Y/N).";
cin>>main;
}while(main =='y'||main =='Y');
getch();
}