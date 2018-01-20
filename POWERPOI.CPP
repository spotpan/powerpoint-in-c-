
#include "string.h"
#include "dos.h"
#include "stdlib.h"
#include "graphics.h"
#include"iostream.h"
#include "process.h"
#include "stdio.h"
#include "conio.h"
#include "fstream.h"
fstream f1,f2,f3,f4,f5,f6;
union REGS i,o;
initmouse();
showmouseptr();
hidemouseptr();
restrictmouseptr(int,int,int,int);
getmousepos(int *,int *, int *);
	int f=7,s=1,flip=1;
	char ch2[80],fl[20];
	long int aj;
char ch[100],nm[30],co;
	int pc;
int x,y,ch1,a=145,b,c=25;
void print_size()
{                      	hidemouseptr();
		setfillstyle(1,WHITE);
bar(102,0,148,20);
outtextxy(110,0,"size");
}
class print
      {
       char ch[100],ch1;
       public:

	print()
	{
	}
	void print_slide()
{	outtextxy(530,105,"new slide");
	outtextxy(570,120,"1");
	outtextxy(570,135,"2");
	outtextxy(570,150,"3");
}
	void print_line()
{
			gotoxy(1,c);
			cout<<"*";
			gets(ch);
			settextstyle(f,0,s);
			outtextxy(10,a,ch);
			showmouseptr();

		ch==NULL;
			++b;
			a=a+15;

			int y=strlen(ch);
			ch1=ch[y-1];
}
	  void nextline()
{			 while(ch1==59)
			{gotoxy(1,25);
			gets(ch);
		       int y=strlen(ch);
			ch1=ch[y-1];
		       settextstyle(f,0,s);
			outtextxy(10,a,ch);
			a=a+15;
			showmouseptr();
		     }
}
	void print_line2()
{
			gotoxy(1,c);
			cout<<"*";
			gets(ch);
		       settextstyle(f,0,s);
		       outtextxy(10,a,ch);

		ch==NULL;
			++b;
			a=a+20;

			int y=strlen(ch);
			ch1=ch[y-1];
}

      };
void show_slide(fstream &f,int &flip)    //////function for animation/*
{       if(flip==1)
   {
	for(int ac=0;ac<450;++ac)
			{for(int ad=100;ad<350;++ad)
			{f.read((char *)&pc,sizeof(pc));
			 putpixel(ac,ad,pc);
}
		       }
   }
      else if(flip==2)
   {         for(int ad=100;ad<350;++ad)
		{	 for(int ac=0;ac<450;++ac)
			{  f.read((char *)&pc,sizeof(pc));
				putpixel(ac,ad,pc);
}
			    }
   }
	else if(flip==3)
   {
     for(int ad=350;ad>100;--ad)
			{  for(int ac=450;ac>0;--ac)
			{f.read((char *)&pc,sizeof(pc));
			 putpixel(ac,ad,pc);
}
		       }
   }
 if(flip==4)
   {               for(int ac=450;ac>0;--ac)
			{    for(int ad=350;ad>100;--ad)
			{ f.read((char *)&pc,sizeof(pc));
			  putpixel(ac,ad,pc);
}
		       }
   }
}
void slide(fstream &f,int &flip)    //////function for save animation/*
{       if(flip==1)
    {
	for(int ac=0;ac<451;++ac)
	    {     for(int ad=100;ad<350;++ad)
			{pc=getpixel(ac,ad);
			 f.write((char *)&pc,sizeof(pc));}
	    }
			    setfillstyle(1,BLACK);
			    bar(0,125,450,375);
     }
 if(flip==2)
   {         for(int ad=100;ad<350;++ad)
			{for(int ac=0;ac<450;++ac)
			{pc=getpixel(ac,ad);
			f.write((char *)&pc,sizeof(pc));}
		       }
   }
			    setfillstyle(1,BLACK);
			    bar(0,125,450,375);
  if(flip==3)
   {
       for(int ad=350;ad>100;--ad)
			{for(int ac=450;ac>0;--ac)
			{pc=getpixel(ac,ad);
			f.write((char *)&pc,sizeof(pc));}
		       }
			    f.close();
			    setfillstyle(1,BLACK);
			    bar(0,125,450,375);
   }
		 if(flip==4)
	 {       for(int ac=450;ac>0;--ac)
		{    for(int ad=350;ad>100;--ad)
			{ pc=getpixel(ac,ad);
				f.write((char *)&pc,sizeof(pc));}
		}  f.close();
		  setfillstyle(1,BLACK);
		  bar(0,125,450,375);
   }
}
void repaint() ////* funtion for print black bar/*
{ setfillstyle(1,BLACK);
	 bar(0,21,640,99);
 }
void main()
{       print p;
	unsigned long int size;
void far  *ptr=NULL;
	int gd=DETECT,gm,maxx,maxy,button,prevx,prevy;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	maxx=getmaxx();
maxy=getmaxy();
	rectangle(0,0,maxx,maxy);
	setviewport(1,1,maxx-1,maxy-1,1);
	if(initmouse() ==0)
{	closegraph();
		restorecrtmode();
		printf("Mouse driver not loaded");
		exit (1);
}
restrictmouseptr (1,1,maxx-1,maxy-1);
	showmouseptr();
	setcolor(BLUE);
	setfillstyle(1,GREEN);
	bar(0,0,670,440);
	clrscr();
	char em[20],ps[20];
	settextstyle(7,0,4);
	outtextxy(0,50,"WELCOME TO POWERPOINT IN C++");
	outtextxy(0,100,"DEVELOPED BY:-");
	outtextxy(270,100,"AMAN THAKUR.");
outtextxy(0,150,"GEUIDED BY:-");
	outtextxy(270,150,"MR.SAMEER KUMAR");
	getch();
	gotoxy(35,15);
	cout<<"USERNAME:";
	cin>>em;
	strcmp(em,"aman.sinu");
	if(strcmp(em,"aman.sinu")==0)
       {
	gotoxy(35,16);
	cout<<"PASSWORD: ";
	cin>>ps;
       }
	else
     {	cout<<"email not matched.!!!";
	delay(500);

	exit(0);
      }
	strcmp(ps,"aman");
       if(strcmp(ps,"aman")==0)
      {	cout<<"you are a valid person...";

int poly[6];
	poly[0] =460;
	poly[1] =50 ;
	poly[2] = 420;
	poly[3] = 100;
	poly[4] =500;
	poly[5]=100;
////////***********FOR FIRST  PAGE***//////////////////
	setfillstyle(1,BLUE);
	bar(0,0,670,440);
	setfillstyle(1,GREEN);
	settextstyle(7,0,7);
	outtextxy(100,200,"C++ minisoft");
	outtextxy(100,250,"power point");
	delay(5);
	for(int n=0;n<670;++n)
       {
       setfillstyle(1,RED);
       bar(0,400,n,420);
       delay(5);
       }
       delay(10);
	getch();

////***////////*****-FOR MENU PAGE-****/////////////
     setfillstyle(1,BLACK);
       bar(0,0,670,440);
       setfillstyle(1,WHITE);
       bar(0,0,670,20);
      setcolor(12);
      line(50,0,50,20);
	settextstyle(1,0,1);
	outtextxy(10,0,"file");
	line(100,0,100,20);
	outtextxy(60,0,"font");
	line(150,0,150,20);
	outtextxy(110,0,"size");
	line(210,0,210,20);
	outtextxy(152,0,"design");
	line(310,0,310,20);
	outtextxy(215,0,"animation");
	p.print_slide();
	setfillstyle(1,9);
	bar(620,0,635,15);
	 setcolor(12);
	line(620,15,635,0);
line(620,0,635,15);
/////////////****************/////////////
	line(0,100,670,100);
	settextstyle(1,0,1);
	outtextxy(20,100,"enter your text here");
		az:
		getch();
		while (!kbhit())
	{	getmousepos (&button, &x, &y);
		if((button &1)==1)
		{hidemouseptr();

///////////******show and select of font and size*****////////////////////////
		      if(x>50&&x<101&&y>0&&y<21)
		     {  repaint();
		       setfillstyle(1,WHITE);
			bar(52,0,98,20);
			 settextstyle(1,0,1);
			 outtextxy(52,0,"font");
			 outtextxy(50,20,"bold");
			 outtextxy(50,35,"ariel");
			 outtextxy(50,50,"yuki");
			 outtextxy(50,65,"hyper");
			 outtextxy(50,80,"dash");
		     }
			 if(x>100&&x<150&&y>0&&y<20 )
		  {     repaint();
			settextstyle(1,0,1);
			outtextxy(120,20,"1");
			outtextxy(120,35,"2");
			outtextxy(120,50,"3");
			outtextxy(120,65,"4");
			outtextxy(120,80,"5");
		   }


/*to OPEN FILE BAR*/	if(x>0&&x<51&&y>0&&y<20)
		  {     repaint();
			setfillstyle(1,WHITE);
			bar(0,0,49,20);
			settextstyle(1,0,1);
			outtextxy(10,0,"file");
			outtextxy(0,20,"shape");
			outtextxy(0,35,"save");
			outtextxy(0,50,"open");
			outtextxy(0,65,"show slide");
		   }



/*TO OPEN DESIGN BAR*/	if(x>150&&x<210&&y>0&&y<20)
			{ repaint();
			 setfillstyle(1,WHITE);
			bar(151,0,209,19);
			settextstyle(1,0,1);
			outtextxy(152,0,"design");
			outtextxy(150,20,"textcolor");
			outtextxy(150,35,"pagetype");
		       }


//////**********to SHOW TYPES OF PAGE****/////////////////
			if(x>150&&x<230&&y>35&&y<50)
			      {    setfillstyle(1,58);
				  bar(420,21,440,41);
				 setfillstyle(1,12);
				  bar(420,25,440,41);
					    setfillstyle(1,9);
					  bar(445,21,465,41);
					   setfillstyle(1,12);
					  bar(445,21,465,25);
						setfillstyle(1,3);
						bar(470,21,490,41);
						setfillstyle(1,MAGENTA);
						bar(470,21,490,25);
						setfillstyle(1,9);
						bar(495,21,515,41);
						setfillstyle(1,14);
						bar(495,21,515,25);
				      }

/*FOR ANIMATION BAR*/	     if(x>215&&x<310&&y>0&&y<20)
			     {  repaint();
				settextstyle(1,0,1);
			       outtextxy(220,20,"right flip");
				outtextxy(220,35,"down flip");
				outtextxy(220,50,"up flip");
				outtextxy(220,65,"left flip");
			      }

//////////////************FOR ANIMATION TYPE**********//////////////
			while(x>220&&x<310&&y>20&&y<35)
		       { repaint();
		       flip=1;
		       goto ba;
		       }
		      ba:
			while(x>220&&x<310&&y>35&&y<50)
			{repaint();
			 flip=2;
		       goto bb;
		       }
			      bb:
			while(x>220&&x<310&&y>50&&y<65)
			{repaint();
			 flip=3;
		       goto bc;
		       }
			      bc:
			while(x>220&&x<310&&y>65&&y<80)
			{ repaint();
			  flip=4;
		       goto bd;
		       }
			      bd:
			if(x>0&&x<450&&y>110&&y<440)
			{repaint();
			}

////////////***********FOR NEW SLIDE/**********//////////////////////////
		    while(x>570&&x<590&&y>105&&y<120)
		   {    a=145;
		       setfillstyle(1,BLACK);
			    bar(0,125,450,375);
		       goto ax;
		   }
		   ax:
//////////FOR SAVING SLIDE////////////**********///////////
		   while(x>570&&x<590&&y>120&&y<135)
		  {     a=145;
			f4.open("slide1",ios::in|ios::out);
			slide(f4,flip);
			  goto at;
		      }
		     at:
		     while(x>570&&x<590&&y>135&&y<150)
		     {  a=145;
			f5.open("slide2",ios::in|ios::out);
			slide(f5,flip);
			goto au;
		     }
		     au:
			 while(x>570&&x<590&&y>150&&y<165)
		     {  a=145;
			f6.open("slide3",ios::in|ios::out);
			slide(f6,flip);
			goto av;
		     }
		     av:
///////////*************TO SHOW SLIDE************//////////////////////
		     f4.close();
		     f5.close();
		     f6.close();
		     while(x>0&&x<65&&y>65&&y<80)
		{   	f4.open("slide1",ios::in|ios::out);
			show_slide(f4,flip);
			delay(100);
			f5.open("slide2",ios::in|ios::out);
			show_slide(f5,flip);
			 delay(100);
			 f6.open("slide3",ios::in|ios::out);
			show_slide(f6,flip);
			goto aw;
		}
		aw:

//////****************/////////FOR PAGE TYPE*********/////////////////////
		  while(x>420&&x<440&&y>21&&y<41)
		{     repaint();
		      setfillstyle(1,12);
		      bar(0,125,450,375);
		      setfillstyle(1,58);
		      bar(0,125,450,185);
		      goto ai;
		  }
		    ai:
		     while(x>445&&x<465&&y>21&&y<41)
		     {   repaint();
			  setfillstyle(1,9);
			  bar(0,125,450,375);
			  setfillstyle(1,12);
			  bar(0,125,450,185);
			  goto aj;
		     }
		      aj:
		       while(x>470&&x<490&&y>21&&y<41)
		      {
			repaint();
			setfillstyle(1,3);
			bar(0,125,450,375);
			setfillstyle(1,MAGENTA);
			bar(0,125,450,185);
			goto al;
			}
			  al:
			  while(x>495&&x<515&&y>21&&y<41)
		       {    repaint();
			    setfillstyle(1,9);
			    bar(0,125,450,375);
			    setfillstyle(1,14);
			    bar(0,125,450,185);
			   goto am;
			   }
			   am:
//////*************for SHOWING COLOURS**************/////////////////////
		       while(x>150&&x<230&&y>20&&y<35)
		      {  repaint();
			setfillstyle(1,58);
				  bar(420,42,440,62);
				 setfillstyle(1,4);
				  bar(445,42,465,62);
					    setfillstyle(1,9);
					  bar(470,42,490,62);
					   setfillstyle(1,WHITE);
					  bar(495,42,515,62);
						setfillstyle(1,3);
						bar(520,42,540,62);
						setfillstyle(1,YELLOW);
						bar(545,42,565,62);
		      goto ak;
		      }
	


//////////*****************TO EXIT************/////////////////
		      ak:
		     if(x>620&&x<635&&y>0&&y<15)
		    {   exit(0);
		    }
/*////////FOR TEXT COLOR////////////////////////*/
		       while(x>422&&x<440&&y>42&&y<62)
		       {   repaint();
			   setcolor(58);
			    goto an;
		       }
		       an:
			while(x>445&&x<465&&y>42&&y<62)
		  {     repaint();
			setcolor(4);
			goto ao;
		  }
		  ao:
		while(x>470&&x<490&&y>42&&y<62)
		  {       repaint();
			setcolor(9);
			goto ap;
		  }
		  ap:
		while(x>495&&x<515&&y>42&&y<62)
		  {       repaint();
			setcolor(WHITE);
			goto aq;
		  }
		  aq:
			while(x>520&&x<540&&y>42&&y<62)
		  {       repaint();
			setcolor(3);
			goto ar;
		  }
		    ar:
			while(x>545&&x<565&&y>42&&y<62)
		  {       repaint();
			setcolor(YELLOW);
			goto as;
		  }
		  as:
////////////////FOR SAVE THE SLIDE////////*********//////////
		  while(x>0&&x<51&&y>35&&y<50)
		  {setfillstyle(1,BLACK);
			bar(0,21,49,90);
			 setfillstyle(1,WHITE);
			bar(0,0,48,19);
			outtextxy(5,0,"save");
			  gotoxy(1,c);
			    cout<<"save as:-";
			gets(nm);
			f1.open(nm,ios::in|ios::out);
			for(int ac=0;ac<451;++ac)
			{for(int ad=100;ad<350;++ad)
			{pc=getpixel(ac,ad);
			f1.write((char *)&pc,sizeof(pc));
			}
			}
			gotoxy(15,c);
			cout<<"file saved:-";
			     goto ae;
		  }
		   ae:

//////////FOR OPEN THE SAVED FILE///////////////////////
			 while(x>0&&x<51&&y>50&&y<65)
		 {      setfillstyle(1,BLACK);
			bar(0,21,49,90);
			setfillstyle(1,WHITE);
			bar(0,0,49,19);
			outtextxy(5,0,"open");
			 gotoxy(1,c);
			cout<<"enter file:-";
			gets(nm);
		    //	cleardevice();

			f3.open(nm,ios::in);
			if(!f3)
			{cout<<"file dost'nt exist!!";
			goto af;
			}
			else
		       {//cleardevice();
			for(int ac=0;ac<450;++ac)
			{for(int ad=100;ad<350;++ad)
			{f3.read((char *)&pc,sizeof(pc));
			putpixel(ac,ad,pc);
		       }
		       }
		       }
			getch();
		     }

		    af:
//////////////////////FOR OPEN SHAPE////////////////
			while(x>0&&x<50&&y>20&&y<35)
		     {  repaint();
			setfillstyle(1,WHITE);
			bar(0,0,49,20);

			outtextxy(3,0,"shape");
			setfillstyle(1,7);
			bar(400,25,670,440);
			setfillstyle(1,RED);
			bar(600,30,615,45);
			line(600,45,615,30);
			line(600,30,615,45);

			setfillstyle(1,BLUE);
			fillpoly(3, poly);
			goto ac;
		     }
		     ac:
		     while(x>600&&x<616&&y>30&&y<46)
		     {
			setfillstyle(1,BLACK);
			bar(400,0,670,440);
			 setfillstyle(1,WHITE);
			 bar(375,0,670,20);
			 line(0,100,670,100);
			 p.print_slide();
			goto ad;
		     }
		     ad:
///////////////***********FOR FONTS WITH SIZE 1*****//////////////
			showmouseptr();
			while((x>50&&x<100&&y>20&&y<35)&&s==1)
		    {   f=7;
			hidemouseptr();
			 repaint();
			 setfillstyle(1,WHITE);
			bar(52,0,98,20);
			settextstyle(7,0,2);
			outtextxy(52,0,"bold");
			 showmouseptr();
			p.print_line();
			while(!kbhit())
		      { p.nextline();
		      goto d;
		     }


		      showmouseptr();
		     goto d;

		    }
		      d:

		      while((x>100&&x<150&&y>20&&y<35)&&f==7)
		     {//to print font size 1 with font 1//
			s=1;
			print_size();
			repaint();
			p.print_line();
			while(!kbhit())
			{p.nextline();
		     goto e;
		     }
			showmouseptr();
			goto e;
		      }
		      e:

		      while((x>50&&x<100&&y>35&&y<50)&&s==1)
		    {   f=3;
			hidemouseptr();
			 repaint();
			 setfillstyle(1,WHITE);
			bar(52,0,98,20);
			settextstyle(7,0,1);
			outtextxy(52,0,"ariel");
			 showmouseptr();
			p.print_line();
			while(!kbhit())
		      { p.nextline();
		     goto f;
		     }





			showmouseptr();
		       goto f;
		    }
		   f:

			while((x>100&&x<150&&y>20&&y<35)&&f==3)
		     {//to print font size 1 with font 1//
			s=1;
			print_size();
			repaint();
			p.print_line();
			while(!kbhit())
		      {p.nextline();
		      goto g;
		     }
			showmouseptr();
			goto g;
		      }
		   g:


			while((x>50&&x<100&&y>50&&y<66)&&s==1)
		    {   f=5;
			hidemouseptr();
			 repaint();
			 setfillstyle(1,WHITE);
			bar(52,0,98,20);
			settextstyle(f,0,1);
			outtextxy(52,0,"yuki");
			 showmouseptr();
			p.print_line();
			while(!kbhit())
		      { p.nextline();
			goto h;
		     }
		       goto h ;

		    }
		      h:
			while((x>100&&x<150&&y>20&&y<35)&&f==5)
		     {//to print font size 1 with font 1//
			s=1;
			print_size();
			repaint();
			p.print_line();
			while(!kbhit())
		      { p.nextline();
		     goto i;
		     }


			showmouseptr();
			goto i;
		      }
		      i:

			while((x>50&&x<100&&y>65&&y<81)&&s==1)
		    {   f=9;
			hidemouseptr();
			 repaint();
			 setfillstyle(1,WHITE);
			bar(52,0,98,20);
			settextstyle(1,0,2);
			outtextxy(52,0,"hyper");
			 showmouseptr();
			p.print_line();
			while(!kbhit())
		      { p.nextline();
		     goto j;
		     }


			showmouseptr();
		       goto j;
		    }
		   j:
			while((x>100&&x<150&&y>20&&y<35)&&f==1)
		     {//to print font size 1 with font 1//
			s=1;
			print_size();
			repaint();
			p.print_line();
			while(!kbhit())
		      { p.nextline();
		     goto k;
		     }


			showmouseptr();
			goto k;
		      }
		      k:

		   while((x>50&&x<100&&y>80&&y<96)&&s==1)
		    {   f=8;
			hidemouseptr();
			 repaint();
			 setfillstyle(1,WHITE);
			bar(52,0,98,20);
			settextstyle(1,0,2);
			outtextxy(52,0,"dash");
			 showmouseptr();
			p.print_line();
			while(!kbhit())
		      { p.nextline();
		     goto l;
		     }


			showmouseptr();
		       goto l;
		    }
		   l:
		   while((x>100&&x<150&&y>20&&y<35)&&f==8)
		     {//to print font size 1 with font 1//
			s=1;
			print_size();
			repaint();
			p.print_line();
			while(!kbhit())
		      { p.nextline();
		     goto m;
		     }


			showmouseptr();
			goto m;
		      }
		     m:

///////****FOR FONT SIZE 2*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/**/*
///////////////////****size 2 start**************//////////////////////////
				while((x>50&&x<100&&y>20&&y<35)&&s==3)
		    {   f=7;
				hidemouseptr();
			 repaint();
			 setfillstyle(1,WHITE);
			bar(52,0,98,20);
			settextstyle(7,0,2);
			outtextxy(52,0,"bold");
			showmouseptr();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto n;
		     }


			showmouseptr();
		       goto n;
		    }
		     n:

		      while((x>100&&x<150&&y>35&&y<50)&&f==7)
		     {//to print font size 2 with font 1//
			s=3;
			repaint();
			print_size();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto o;
		     }
			showmouseptr();
			goto o;
		      }
		      o:
			while((x>50&&x<100&&y>35&&y<50)&&s==3)
		    {   f=3;
			hidemouseptr();
			repaint();
			 setfillstyle(1,WHITE);
			bar(52,0,98,20);
			settextstyle(1,0,1);
			outtextxy(52,0,"ariel");
			showmouseptr();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto p;
		     }
		    showmouseptr();
		       goto p;
		    }
		   p:

			while((x>100&&x<150&&y>35&&y<50)&&f==3)
		     {//to print font size 1 with font 1//
			s=3;
			repaint();
			print_size();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto q;
		     }

			showmouseptr();
			goto q;
		      }
		     q:

			while((x>50&&x<100&&y>50&&y<66)&&s==3)
		    {   f=5;
			repaint();
			hidemouseptr();
			 setfillstyle(1,WHITE);
			bar(52,0,98,20);

			settextstyle(1,0,2);
			outtextxy(52,0,"yuki");
			showmouseptr();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto r;
		     }

			showmouseptr();
		       goto r;

		    }
		      r:
			while((x>100&&x<150&&y>35&&y<50)&&f==5)
		     {//to print font size 1 with font 1//
			s=3;
			print_size();
			repaint();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto s;
		     }

			showmouseptr();
			goto s;
		      }
		      s:
			while((x>50&&x<100&&y>65&&y<81)&&s==3)
		    {   f=9;
			hidemouseptr();
			repaint();
			 setfillstyle(1,WHITE);
			bar(52,0,98,20);

			settextstyle(1,0,2);
			outtextxy(52,0,"hyper");
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto t;
		     }

			showmouseptr();
		       goto t;
		    }
		   t:
		    while((x>100&&x<150&&y>35&&y<50)&&f==9)
		     {//to print font size 1 with font 1//
			s=3;
			print_size();
			repaint();
			p.print_line2();
			while(!kbhit())
		      {p.nextline();
		     goto u;
		     }
			showmouseptr();
			goto u;
		      }
		      u:
			   while((x>50&&x<100&&y>80&&y<95)&&s==3)
		    {   f=8;
			hidemouseptr();
			repaint();
			 setfillstyle(1,WHITE);
			bar(52,0,98,20);
			settextstyle(f,0,2);
			outtextxy(52,0,"dash");
			showmouseptr();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto v;
		     }

			showmouseptr();
		       goto v;
		    }
		   v:
		   while((x>100&&x<150&&y>50&&y<65)&&f==8)
		     {//to print font size 1 with font 1//
			s=3;
			print_size();
			repaint();
			p.print_line2();
			while(!kbhit())
		      {p.nextline();
		     goto w;
		     }

			showmouseptr();
			goto w;
		      }
		     w:
//////////////**************SIZE 3**************///////////////////////////
				while((x>50&&x<100&&y>50&&y<73)&&s==4)
		    {   f=7;
			setfillstyle(1,WHITE);
			bar(52,0,98,20);
			hidemouseptr();
			repaint();

			settextstyle(7,0,1);
			outtextxy(52,0,"bold");
			showmouseptr();
			p.print_line2();
			while(!kbhit())
		      {p.nextline();
		     goto x;
		     }

			showmouseptr();
		       goto x;
		    }
		     x:

			while((x>100&&x<150&&y>50&&y<65)&&f==7)
		     {//to print font size 2 with font 1//
			s=4;
			print_size();
			repaint();
			p.print_line2();
			while(!kbhit())
		      {p.nextline();
		     goto y;
		     }

			showmouseptr();
			goto y;
		      }
		      y:
			while((x>50&&x<100&&y>35&&y<50)&&s==4)
		    {   f=3;
			hidemouseptr();
			repaint();
			setfillstyle(1,WHITE);
			bar(52,0,98,20);
			settextstyle(f,0,1);
			outtextxy(52,0,"ariel");
			showmouseptr();
			p.print_line2();
			while(!kbhit())
		      {p.nextline();
		     goto z;
		     }
			showmouseptr();
		       goto z;
		    }
		   z:
			while((x>100&&x<150&&y>50&&y<65)&&f==3)
		     {
			s=4;
			print_size();
			repaint();
			p.print_line2();
			while(!kbhit())
		      {p.nextline();
		     goto aa;
		     }
			showmouseptr();
			goto aa;
		      }
		     aa:
			while((x>50&&x<100&&y>50&&y<66)&&s==4)
		    {   f=5;
				hidemouseptr();
				repaint();
			setfillstyle(1,WHITE);
			bar(52,0,98,20);

			settextstyle(f,0,3);
			outtextxy(52,0,"yuki");
			showmouseptr();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto be;
		     }
		showmouseptr();
		       goto be;
		    }
		      be:
		while((x>100&&x<150&&y>50&&y<65)&&f==5)
		     {//to print font size 1 with font 1//
			s=4;
			print_size();
			repaint();
			p.print_line2();
			while(!kbhit())
		      {p.nextline();
		     goto cc;
		     }
		showmouseptr();
			goto cc;
		      }
		      cc:
			while((x>50&&x<100&&y>65&&y<81)&&s==4)
		    {   f=9;
			hidemouseptr();
			repaint();
			setfillstyle(1,WHITE);
			bar(52,0,98,20);
			settextstyle(f,0,1);
			outtextxy(52,0,"hyper");
			showmouseptr();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto dd;
		     }
			showmouseptr();
			       goto dd;
		    }
		   dd:
			while((x>100&&x<150&&y>50&&y<65)&&f==9)
		     {//to print font size 1 with font 1//
			s=4;
			print_size();
			repaint();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto ee;
		     }
		showmouseptr();
			goto ee;
		      }
		      ee:
			 while((x>50&&x<100&&y>80&&y<95)&&s==4)
		    {   f=8;
			hidemouseptr();
			setfillstyle(1,WHITE);
			bar(52,0,98,20);
			repaint();
			settextstyle(f,0,2);
			outtextxy(52,0,"dash");
			showmouseptr();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto p;
		     }
			showmouseptr();
		       goto ff;
		    }
		   ff:
		    while((x>100&&x<150&&y>50&&y<65)&&f==8)
		     {//to print font size 1 with font 1//
			s=4;
			print_size();
			repaint();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto gg;
		     }
			showmouseptr();
			goto gg;
		      }
		     gg:
/////////***********/////**SIZE 4 **********///////////////////////////
				while((x>50&&x<100&&y>50&&y<73)&&s==5)
		    {   f=7;
			hidemouseptr();
			repaint();
			setfillstyle(1,WHITE);
			bar(52,0,98,20);
			settextstyle(7,0,2);
			outtextxy(52,0,"bold");
			showmouseptr();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto hh;
		     }
		showmouseptr();
		       goto hh;
		    }
		     hh:
		    while((x>100&&x<150&&y>65&&y<80)&&f==7)
		     {//to print font size 2 with font 1//
			s=5;
			print_size();
			repaint();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto ii;
		     }
		showmouseptr();
			goto ii;
		      }
		      ii:
			while((x>50&&x<100&&y>35&&y<50)&&s==5)
		    {
			f=3;
			hidemouseptr();
			repaint();
			setfillstyle(1,WHITE);
			bar(52,0,98,20);
			settextstyle(7,0,3);
			outtextxy(52,30,"ariel");
			showmouseptr();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto jj;
		     }
			showmouseptr();
		       goto jj;
		    }
		   jj:
		while((x>100&&x<150&&y>65&&y<80)&&f==3)
		     {//to print font size 1 with font 1//
			s=5;
			print_size();
			repaint();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto kk;
		     }
			showmouseptr();
			goto kk;
		      }
		     kk:
			while((x>50&&x<100&&y>50&&y<66)&&s==5)
		    {   f=5;
			hidemouseptr();
			setfillstyle(1,WHITE);
			bar(52,0,98,20);
			repaint();
			settextstyle(f,0,3);
			outtextxy(52,0,"yuki");
			showmouseptr();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto ll;
		     }
			showmouseptr();
		       goto ll;
		    }
		      ll:
			while((x>100&&x<150&&y>65&&y<80)&&f==5)
		     {//to print font size 1 with font 1//

			s=5;
			print_size();
			repaint();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto mm;
		     }
			showmouseptr();
			goto mm;
		      }
		      mm:
		      while((x>50&&x<100&&y>65&&y<81)&&s==5)
		    {   f=9;
			hidemouseptr();
			repaint();
			setfillstyle(1,WHITE);
			bar(52,0,98,20);
			settextstyle(f,0,2);
			outtextxy(52,0,"hyper");
			showmouseptr();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto nn;
		     }
		showmouseptr();
		       goto nn;
		    }
		   nn:
		   while((x>100&&x<150&&y>65&&y<80)&&f==9)
		     {//to print font size 1 with font 1//
			s=5;
			print_size();
			repaint();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto oo;
		     }
			showmouseptr();
			goto oo;
		      }
		      oo:
			 while((x>50&&x<100&&y>80&&y<95)&&s==5)
		    {   f=8;
			hidemouseptr();
			repaint();
			setfillstyle(1,WHITE);
			bar(52,0,98,20);
			settextstyle(f,0,2);
			outtextxy(52,0,"dash");
			showmouseptr();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto pp;
		     }
			showmouseptr();
		       goto pp;
		    }
		   pp:
			while((x>100&&x<150&&y>65&&y<80)&&f==8)
		     {//to print font size 1 with font 1//
			s=5;
			print_size();
			repaint();
			p.print_line2();
			while(!kbhit())
		      { p.nextline();
		     goto qq;
		     }
			showmouseptr();
			goto qq;
		      }
		     qq:
			showmouseptr();

		}
	}
			 setfillstyle(1,BLACK);
			bar(0,380,640,400);
			  gotoxy(1,c);
			 cout<<"file not saved. save? y/n/c:-";
			  setfillstyle(1,BLACK);
			bar(0,400,50,420);
			cin>>co;
			if(co=='y')
		   
   {
			setfillstyle(1,12);
			bar(0,380,640,400);
			  gotoxy(1,c);
			 cout<<"save as:-";
			gets(nm);
			f2.open(nm,ios::in|ios::app);
			slide(f2,flip);
			setfillstyle(1,12);
			bar(0,380,640,400);
			gotoxy(15,c);
			cout<<"saving:-";
		       }
		       else if(co=='c')
		       { setfillstyle(1,BLACK);
			 bar(0,360,640,440);
		       goto az;
		       }
		       else
		     { f2.close();
		       exit(1);
		      //	f2.close();
			f1.close();
		      }
      }
else
	
	cout<<"\n            *!!!!*.you are not a valid person.!!!!**";
	delay(500);
	exit(0);
	getch();

 }
initmouse()
{
	i.x.ax=0;
	int86 (0x33,&i,&o);
	return (o.x.ax);
}
showmouseptr()
{
	i.x.ax=1;

	int86(0x33,&i,&o);
	//circle(x,y,10);;
}
hidemouseptr()
{
	i.x.ax=2;
	int86(0x33,&i,&o);
}

restrictmouseptr (int x1, int y1,int x2,int y2)
{
	i.x.ax=7;
	i.x.cx=x1;
	i.x.dx=x2;
	int86 (0x33,&i,&o);
	i.x.ax=8;
	i.x.cx=y1;
	i.x.dx=y2;
	int86 (0x33,&i,&o);
}

getmousepos (int *button, int *x, int *y)
{
	i.x.ax=3;
	int86(0x33,&i,&o);
	*button=o.x.bx;
	*x=o.x.cx;
	*y=o.x.dx;
}

