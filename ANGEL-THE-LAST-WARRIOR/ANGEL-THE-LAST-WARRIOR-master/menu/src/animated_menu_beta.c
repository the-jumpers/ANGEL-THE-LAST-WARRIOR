#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"

void main()
{int screen = 1;
int x,y;
int i=1;
int j=0;
int bk2;


SDL_Event event;
SDL_Surface *ecran=NULL;
SDL_Surface *loadedimage=NULL; 
SDL_Surface *image1=NULL;
SDL_Surface *im1=NULL;
SDL_Surface *im11=NULL;
SDL_Surface *im2=NULL;
SDL_Surface *im22=NULL;
SDL_Surface *im3=NULL;
SDL_Surface *im33=NULL;
SDL_Surface *back2=NULL ; //
SDL_Surface *im4=NULL;    
SDL_Surface *im44=NULL;
SDL_Surface *im5=NULL;
SDL_Surface *im55=NULL;
SDL_Surface *soundon=NULL; // 
SDL_Surface *soundoff=NULL; //
SDL_Surface *prev=NULL ;
SDL_Surface *ss=NULL ; 
SDL_Surface *ss1=NULL ;
SDL_Surface *ss2=NULL ;
SDL_Surface *mus=NULL;
SDL_Surface *mus1=NULL;
SDL_Surface *mus2=NULL;
SDL_Surface *mus3=NULL;
SDL_Surface *ins=NULL;
SDL_Surface *ins1=NULL;
SDL_Rect positionins;
SDL_Rect positionins1;
SDL_Rect positionprev;
SDL_Rect positionss;
SDL_Rect positionss1;
SDL_Rect positionss2;
SDL_Rect positionimage2;
SDL_Rect positionsound; 

SDL_Rect positionim1;
SDL_Rect positionim2;
SDL_Rect positionim3;
SDL_Rect positionim4;
SDL_Rect positionim5;
SDL_Rect positionmus;
SDL_Rect positionmus1;
SDL_Rect positionmus2;
SDL_Rect positionmus3;
Mix_Music *musique;
Mix_Music *musique2;
Mix_Music *musique3;
positionins.x=800;
positionins.y=60;
positionins1.x=800;
positionins1.y=150;
positionss1.x=400;
positionss1.y=150;
positionss2.x=400;
positionss2.y=240;
positionss.x=400;
positionss.y=60;
positionmus1.x=600;
positionmus1.y=150;
positionmus2.x=600;
positionmus2.y=240;
positionmus3.x=600;
positionmus3.y=330;
positionmus.x=600;
positionmus.y=60;
positionprev.x=200;
positionprev.y=500;
positionsound.x=200;
positionsound.y=60;

positionimage2.x=0;
positionimage2.y=0;
positionim1.x = 555;
positionim1.y = 100;
positionim2.x = 555;
positionim2.y = 170;
positionim3.x = 555;
positionim3.y = 240;
positionim4.x = 555;
positionim4.y = 310;
positionim5.x = 555;
positionim5.y = 380;

SDL_Init(SDL_INIT_AUDIO|SDL_INIT_VIDEO);
ecran=SDL_SetVideoMode(1266, 668, 32,SDL_HWSURFACE|SDL_DOUBLEBUF | SDL_SRCALPHA);
if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1)
printf("%s", Mix_GetError());
if (ecran==NULL)
printf ("Erreur");
else
musique = Mix_LoadMUS("../images/get.mp3");
musique2 = Mix_LoadMUS("../images/get2.mp3");
musique3 = Mix_LoadMUS("../images/get3.mp3");
Mix_VolumeMusic(MIX_MAX_VOLUME);
Mix_PlayMusic(musique, -1);
//LOADING IMAGES //

//menu



im1=IMG_Load("../images/1.png");

im2=IMG_Load("../images/2.png");

im3=IMG_Load("../images/3.png");

im4=IMG_Load("../images/4.png");

im5=IMG_Load("../images/5.png");

ss=IMG_Load("../images/full.png");
back2=IMG_Load("../images/back2.jpg");
soundoff=IMG_Load("../images/SOFF.png");
soundon=IMG_Load("../images/SON.png");
prev=IMG_Load("../images/prev.png");
ss1=IMG_Load("../images/ss1.png");
ss2=IMG_Load("../images/ss2.png");
mus=IMG_Load("../images/mus.png");  
mus2=IMG_Load("../images/mus2.png");
mus3=IMG_Load("../images/mus3.png");
mus1=IMG_Load("../images/mus1.png");
ins=IMG_Load("../images/ins.png");
ins1=IMG_Load("../images/ins1.png");




loadedimage=SDL_LoadBMP("../images/bmp.bmp");
image1 = SDL_DisplayFormat(loadedimage);

int a1=0;
int a2=2; 

SDL_Rect anim; 
anim.x=0;
anim.y=0;
anim.w=1266;
anim.h=677;

im11=IMG_Load("../images/11.png");
im22=IMG_Load("../images/22.png");
im33=IMG_Load("../images/33.png");
im44=IMG_Load("../images/44.png");
im55=IMG_Load("../images/55.png");

while (screen)
    {
{SDL_BlitSurface(im1,NULL,ecran,&positionim1);

SDL_BlitSurface(im2,NULL,ecran,&positionim2);

SDL_BlitSurface(im3,NULL,ecran,&positionim3);

SDL_BlitSurface(im4,NULL,ecran,&positionim4);

SDL_BlitSurface(im5,NULL,ecran,&positionim5);

SDL_BlitSurface(image1,&anim,ecran,NULL);
a1+=1;
if (a1>a2)
{
a1=0;
}
anim.x= a1 * anim.w;
}



        SDL_WaitEvent(&event);
switch(event.type)
{ case SDL_QUIT:
    screen = 0;
  case SDL_KEYDOWN:
 switch (event.key.keysym.sym)
            {
                case SDLK_DOWN:


				switch(i)
				{
					case 1:
i=1;
						i++;
						// BOUTTON1,CLAVIER
 						

						SDL_BlitSurface(im1,NULL,ecran,&positionim1);

						SDL_BlitSurface(im2,NULL,ecran,&positionim2);



						SDL_BlitSurface(im3,NULL,ecran,&positionim3);



						SDL_BlitSurface(im4,NULL,ecran,&positionim4);



						SDL_BlitSurface(im5,NULL,ecran,&positionim5);



						SDL_BlitSurface(im11,NULL,ecran,&positionim1);


						SDL_Flip(ecran);
						break;
					case 2:
						//BOUTTON2,CLAVIER
						i++;
						//initialliser ecran

						
						SDL_BlitSurface(im1,NULL,ecran,&positionim1);

						SDL_BlitSurface(im2,NULL,ecran,&positionim2);



						SDL_BlitSurface(im3,NULL,ecran,&positionim3);



						SDL_BlitSurface(im4,NULL,ecran,&positionim4);



						SDL_BlitSurface(im5,NULL,ecran,&positionim5);



						SDL_BlitSurface(im22,NULL,ecran,&positionim2);


						SDL_Flip(ecran);
						break;
					case 3:
						//BOUTTON3,CLAVIER
						i++;
						//initialliser ecran

				               
						SDL_BlitSurface(im1,NULL,ecran,&positionim1);

						SDL_BlitSurface(im2,NULL,ecran,&positionim2);



						SDL_BlitSurface(im3,NULL,ecran,&positionim3);



						SDL_BlitSurface(im4,NULL,ecran,&positionim4);



						SDL_BlitSurface(im5,NULL,ecran,&positionim5);



					SDL_BlitSurface(im33,NULL,ecran,&positionim3);

						SDL_Flip(ecran);
						break;
					case 4:
						//BOUTTON4,CLAVIERdn
						i++;
						//initialliser ecran


						SDL_BlitSurface(im1,NULL,ecran,&positionim1);

						SDL_BlitSurface(im2,NULL,ecran,&positionim2);
						SDL_BlitSurface(im3,NULL,ecran,&positionim3);



						SDL_BlitSurface(im4,NULL,ecran,&positionim4);



						SDL_BlitSurface(im5,NULL,ecran,&positionim5);



						SDL_BlitSurface(im44,NULL,ecran,&positionim4);


						SDL_Flip(ecran);
						break;
					case 5:

						i=1;//BOUTTON5,CLAVIERdn
						//initialliser ecran


						SDL_BlitSurface(im1,NULL,ecran,&positionim1);

						SDL_BlitSurface(im2,NULL,ecran,&positionim2);



						SDL_BlitSurface(im3,NULL,ecran,&positionim3);



						SDL_BlitSurface(im4,NULL,ecran,&positionim4);






						SDL_BlitSurface(im55,NULL,ecran,&positionim5);

						SDL_Flip(ecran);
						break;
		}
		break;

		case SDLK_UP:

					switch(i)
					{
					case 1:
						i=5;
						
						SDL_BlitSurface(im1,NULL,ecran,&positionim1);
						SDL_BlitSurface(im2,NULL,ecran,&positionim2);
						SDL_BlitSurface(im3,NULL,ecran,&positionim3);
						SDL_BlitSurface(im4,NULL,ecran,&positionim4);
						SDL_BlitSurface(im5,NULL,ecran,&positionim5);
						SDL_BlitSurface(im11,NULL,ecran,&positionim1);
						SDL_Flip(ecran);
						break;
					case 2:
//UP2
						i--;

						SDL_BlitSurface(im1,NULL,ecran,&positionim1);
						SDL_BlitSurface(im2,NULL,ecran,&positionim2);
						SDL_BlitSurface(im3,NULL,ecran,&positionim3);
						SDL_BlitSurface(im4,NULL,ecran,&positionim4);
						SDL_BlitSurface(im5,NULL,ecran,&positionim5);
						SDL_BlitSurface(im22,NULL,ecran,&positionim2);
						SDL_Flip(ecran);
						break;
					case 3:

						i--;
						

						SDL_BlitSurface(im1,NULL,ecran,&positionim1);
						SDL_BlitSurface(im2,NULL,ecran,&positionim2);
						SDL_BlitSurface(im3,NULL,ecran,&positionim3);
						SDL_BlitSurface(im4,NULL,ecran,&positionim4);
						SDL_BlitSurface(im5,NULL,ecran,&positionim5);
						SDL_BlitSurface(im33,NULL,ecran,&positionim3);
						SDL_Flip(ecran);
						break;
					case 4:

						i--;
				

						SDL_BlitSurface(im1,NULL,ecran,&positionim1);
						SDL_BlitSurface(im2,NULL,ecran,&positionim2);
						SDL_BlitSurface(im3,NULL,ecran,&positionim3);
						SDL_BlitSurface(im4,NULL,ecran,&positionim4);
						SDL_BlitSurface(im5,NULL,ecran,&positionim5);
						SDL_BlitSurface(im44,NULL,ecran,&positionim4);

						SDL_Flip(ecran);
						break;


					case 5:

						i--;
	
						SDL_BlitSurface(im1,NULL,ecran,&positionim1);
						SDL_BlitSurface(im2,NULL,ecran,&positionim2);
						SDL_BlitSurface(im3,NULL,ecran,&positionim3);
						SDL_BlitSurface(im4,NULL,ecran,&positionim4);
						SDL_BlitSurface(im5,NULL,ecran,&positionim5);
						SDL_BlitSurface(im55,NULL,ecran,&positionim5);

						SDL_Flip(ecran);
                				break;
		}}
		break;

		

//MOUSE CLIC
   case SDL_MOUSEBUTTONUP:

//EXIT BUTTON

     if (((event.button.x >=555)&&(event.button.x <=770))&&((event.button.y <= 430)&&(event.button.y >= 380)))

{

screen=0;

}

  if (((event.motion.x >=555)&&(event.motion.x <=770))&&((event.motion.y <= 290)&&(event.motion.y >= 240)))



{

SDL_BlitSurface(back2,NULL,ecran,&positionimage2);
SDL_BlitSurface(soundon,NULL,ecran,&positionsound);
SDL_BlitSurface(prev,NULL,ecran,&positionprev);
SDL_BlitSurface(ss,NULL,ecran,&positionss);
SDL_BlitSurface(mus,NULL,ecran,&positionmus);
SDL_BlitSurface(ins,NULL,ecran,&positionins);
SDL_Flip(ecran);

bk2=1;

while (bk2)

{



SDL_WaitEvent(&event);

switch (event.type) 													

{

case SDL_MOUSEBUTTONUP:
{
    

 if (((event.button.x >=200)&&(event.button.x <=380))&&((event.button.y <= 110)&&(event.button.y >= 60)))


switch (j)


{case 0:

j++;



{

SDL_BlitSurface(back2,NULL,ecran,&positionimage2);

SDL_BlitSurface(soundoff,NULL,ecran,&positionsound);
SDL_BlitSurface(prev,NULL,ecran,&positionprev);
SDL_BlitSurface(ss,NULL,ecran,&positionss);
SDL_BlitSurface(mus,NULL,ecran,&positionmus);
SDL_BlitSurface(ins,NULL,ecran,&positionins);
SDL_Flip(ecran);

Mix_PauseMusic(); 

}

//


break;


case 1:

j--;

if((Mix_PausedMusic() == 1))

{

Mix_ResumeMusic();

SDL_BlitSurface(back2,NULL,ecran,&positionimage2);

SDL_BlitSurface(soundon,NULL,ecran,&positionsound);
SDL_BlitSurface(prev,NULL,ecran,&positionprev);
SDL_BlitSurface(ss,NULL,ecran,&positionss);
SDL_BlitSurface(mus,NULL,ecran,&positionmus);
SDL_BlitSurface(ins,NULL,ecran,&positionins);
SDL_Flip(ecran);}
//




break;}






if (((event.button.x >=400)&&(event.button.x <=580))&&((event.button.y <= 110)&&(event.button.y >= 60)))

{

SDL_BlitSurface(back2,NULL,ecran,&positionimage2);
SDL_BlitSurface(ss1,NULL,ecran,&positionss1);
SDL_BlitSurface(ss2,NULL,ecran,&positionss2);
SDL_BlitSurface(soundon,NULL,ecran,&positionsound);
SDL_BlitSurface(prev,NULL,ecran,&positionprev);
SDL_BlitSurface(ss,NULL,ecran,&positionss);
SDL_BlitSurface(mus,NULL,ecran,&positionmus);SDL_BlitSurface(ins,NULL,ecran,&positionins);

SDL_Flip(ecran);

}
if (((event.button.x >=400)&&(event.button.x <=580))&&((event.button.y <= 200)&&(event.button.y >= 150)))

{
ecran=SDL_SetVideoMode(1266, 667 , 32, SDL_HWSURFACE);
SDL_BlitSurface(back2,NULL,ecran,&positionimage2);
SDL_BlitSurface(soundon,NULL,ecran,&positionsound);
SDL_BlitSurface(prev,NULL,ecran,&positionprev);
SDL_BlitSurface(ss,NULL,ecran,&positionss);
SDL_BlitSurface(mus,NULL,ecran,&positionmus);SDL_BlitSurface(ins,NULL,ecran,&positionins);
SDL_Flip(ecran);

}
if (((event.button.x >=400)&&(event.button.x <=580))&&((event.button.y <= 290)&&(event.button.y >= 240)))

{
ecran=SDL_SetVideoMode(800, 667 , 32, SDL_HWSURFACE);
SDL_BlitSurface(back2,NULL,ecran,&positionimage2);
SDL_BlitSurface(soundon,NULL,ecran,&positionsound);
SDL_BlitSurface(prev,NULL,ecran,&positionprev);
SDL_BlitSurface(ss,NULL,ecran,&positionss);
SDL_BlitSurface(mus,NULL,ecran,&positionmus);SDL_BlitSurface(ins,NULL,ecran,&positionins);
SDL_Flip(ecran);

}

//////////////////////////////////////////////////////////////////////////////////:
if (((event.button.x >=600)&&(event.button.x <=780))&&((event.button.y <= 110)&&(event.button.y >= 60)))

{

SDL_BlitSurface(back2,NULL,ecran,&positionimage2);
SDL_BlitSurface(soundon,NULL,ecran,&positionsound);
SDL_BlitSurface(prev,NULL,ecran,&positionprev);
SDL_BlitSurface(ss,NULL,ecran,&positionss);
SDL_BlitSurface(mus,NULL,ecran,&positionmus);
SDL_BlitSurface(mus1,NULL,ecran,&positionmus1);
SDL_BlitSurface(mus2,NULL,ecran,&positionmus2);
SDL_BlitSurface(mus3,NULL,ecran,&positionmus3);SDL_BlitSurface(ins,NULL,ecran,&positionins);
SDL_Flip(ecran);

}
if (((event.button.x >=600)&&(event.button.x <=780))&&((event.button.y <= 200)&&(event.button.y >= 150)))

{
Mix_PauseMusic();
Mix_RewindMusic(); 
SDL_BlitSurface(back2,NULL,ecran,&positionimage2);
SDL_BlitSurface(soundon,NULL,ecran,&positionsound);
SDL_BlitSurface(prev,NULL,ecran,&positionprev);
SDL_BlitSurface(ss,NULL,ecran,&positionss);
SDL_BlitSurface(mus,NULL,ecran,&positionmus);
SDL_BlitSurface(mus1,NULL,ecran,&positionmus1);
SDL_BlitSurface(mus2,NULL,ecran,&positionmus2);
SDL_BlitSurface(mus3,NULL,ecran,&positionmus3);SDL_BlitSurface(ins,NULL,ecran,&positionins);
SDL_Flip(ecran);
Mix_PlayMusic(musique, -1);
}
if (((event.button.x >=600)&&(event.button.x <=780))&&((event.button.y <= 290)&&(event.button.y >= 240)))

{Mix_PauseMusic(); 
Mix_RewindMusic();
SDL_BlitSurface(back2,NULL,ecran,&positionimage2);
SDL_BlitSurface(soundon,NULL,ecran,&positionsound);
SDL_BlitSurface(prev,NULL,ecran,&positionprev);
SDL_BlitSurface(ss,NULL,ecran,&positionss);
SDL_BlitSurface(mus,NULL,ecran,&positionmus);
SDL_BlitSurface(mus1,NULL,ecran,&positionmus1);
SDL_BlitSurface(mus2,NULL,ecran,&positionmus2);
SDL_BlitSurface(mus3,NULL,ecran,&positionmus3);SDL_BlitSurface(ins,NULL,ecran,&positionins);
SDL_Flip(ecran);
Mix_PlayMusic(musique2, -1);
}

if (((event.button.x >=600)&&(event.button.x <=780))&&((event.button.y <= 380)&&(event.button.y >= 330)))

{Mix_PauseMusic(); 
Mix_RewindMusic();
SDL_BlitSurface(back2,NULL,ecran,&positionimage2);
SDL_BlitSurface(soundon,NULL,ecran,&positionsound);
SDL_BlitSurface(prev,NULL,ecran,&positionprev);
SDL_BlitSurface(ss,NULL,ecran,&positionss);
SDL_BlitSurface(mus,NULL,ecran,&positionmus);
SDL_BlitSurface(mus1,NULL,ecran,&positionmus1);
SDL_BlitSurface(mus2,NULL,ecran,&positionmus2);
SDL_BlitSurface(mus3,NULL,ecran,&positionmus3);SDL_BlitSurface(ins,NULL,ecran,&positionins);
SDL_Flip(ecran);
Mix_PlayMusic(musique3, -1);
}
/////                           //////                ////////////                /////               

if (((event.button.x >=800)&&(event.button.x <=980))&&((event.button.y <= 110)&&(event.button.y >= 60)))

{
SDL_BlitSurface(back2,NULL,ecran,&positionimage2);
SDL_BlitSurface(soundon,NULL,ecran,&positionsound);
SDL_BlitSurface(prev,NULL,ecran,&positionprev);
SDL_BlitSurface(ss,NULL,ecran,&positionss);
SDL_BlitSurface(mus,NULL,ecran,&positionmus);
SDL_BlitSurface(ins,NULL,ecran,&positionins);
SDL_BlitSurface(ins1,NULL,ecran,&positionins1);
SDL_Flip(ecran);
}

if (((event.button.x >=200)&&(event.button.x <=380))&&((event.button.y <= 550)&&(event.button.y >= 500)))
    bk2=0;



}
}

}

}
break;

//DEPLACEMENT SOURIS
case SDL_MOUSEMOTION:
if (((event.motion.x >=555)&&(event.motion.x <=770))&&((event.motion.y <= 150)&&(event.motion.y >= 100)))
{


						SDL_BlitSurface(im1,NULL,ecran,&positionim1);

						SDL_BlitSurface(im2,NULL,ecran,&positionim2);



						SDL_BlitSurface(im3,NULL,ecran,&positionim3);



						SDL_BlitSurface(im4,NULL,ecran,&positionim4);



						SDL_BlitSurface(im5,NULL,ecran,&positionim5);



						SDL_BlitSurface(im11,NULL,ecran,&positionim1);


						
SDL_Flip(ecran);
}

else if (((event.motion.x >=555)&&(event.motion.x <=770))&&((event.motion.y <= 220)&&(event.motion.y >= 170)))

{


						SDL_BlitSurface(im1,NULL,ecran,&positionim1);

						SDL_BlitSurface(im2,NULL,ecran,&positionim2);



						SDL_BlitSurface(im3,NULL,ecran,&positionim3);



						SDL_BlitSurface(im4,NULL,ecran,&positionim4);



						SDL_BlitSurface(im5,NULL,ecran,&positionim5);



						SDL_BlitSurface(im22,NULL,ecran,&positionim2);




SDL_Flip(ecran);
}
else if (((event.motion.x >=555)&&(event.motion.x <=770))&&((event.motion.y <= 290)&&(event.motion.y >= 240)))

{


						SDL_BlitSurface(im1,NULL,ecran,&positionim1);

						SDL_BlitSurface(im2,NULL,ecran,&positionim2);



						SDL_BlitSurface(im3,NULL,ecran,&positionim3);



						SDL_BlitSurface(im4,NULL,ecran,&positionim4);



						SDL_BlitSurface(im5,NULL,ecran,&positionim5);



					SDL_BlitSurface(im33,NULL,ecran,&positionim3);

						SDL_Flip(ecran);


SDL_Flip(ecran);
}
else if (((event.motion.x >=555)&&(event.motion.x <=770))&&((event.motion.y <= 360)&&(event.motion.y >= 310)))

{


						SDL_BlitSurface(im1,NULL,ecran,&positionim1);

						SDL_BlitSurface(im2,NULL,ecran,&positionim2);
						SDL_BlitSurface(im3,NULL,ecran,&positionim3);




						SDL_BlitSurface(im4,NULL,ecran,&positionim4);



						SDL_BlitSurface(im5,NULL,ecran,&positionim5);



						SDL_BlitSurface(im44,NULL,ecran,&positionim4);


						SDL_Flip(ecran);


SDL_Flip(ecran);
}
else if (((event.motion.x >=555)&&(event.motion.x <=770))&&((event.motion.y <= 430)&&(event.motion.y >= 380)))

{



						SDL_BlitSurface(im1,NULL,ecran,&positionim1);

						SDL_BlitSurface(im2,NULL,ecran,&positionim2);



						SDL_BlitSurface(im3,NULL,ecran,&positionim3);



						SDL_BlitSurface(im4,NULL,ecran,&positionim4);






						SDL_BlitSurface(im55,NULL,ecran,&positionim5);

						SDL_Flip(ecran);


SDL_Flip(ecran);
}

else {


SDL_BlitSurface(im1,NULL,ecran,&positionim1);

SDL_BlitSurface(im2,NULL,ecran,&positionim2);

SDL_BlitSurface(im3,NULL,ecran,&positionim3);

SDL_BlitSurface(im4,NULL,ecran,&positionim4);

SDL_BlitSurface(im5,NULL,ecran,&positionim5);

   SDL_Flip(ecran);
}

            break;
}
}
   SDL_Quit;

}


