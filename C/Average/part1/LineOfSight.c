
#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int ax,ay,bx,by,cx,cy,dx,dy,flag=0;
    scanf("%d %d %d %d",&ax,&ay,&bx,&by);
    scanf("%d %d",&cx,&cy);
    scanf("%d %d",&dx,&dy);
    if(ax==cx)
    {
        if(bx==ax)
            if((by>=ay&&by<=cy)||(by>=cy&&by<=ay))
                flag=1;
        else if(dx==ax)
            if((dy>=ay&&dy<=cy)||(dy>=cy&&dy<=ay))
                flag=1;
    }
    else if(ay==cy)
        {
            if(by==ay)
                if((bx>=ax&&bx<=cx)||(bx>=cx&&bx<=ax))
                        flag=1;
            else if(dy==ay)
                if((dx>=ax&&dx<=cx)||(dx>=cx&&dx<=ax))
                    flag=1;
        }
    if(bx==dx)
    {
        if(ax==bx)
            if((ay>=by&&ay<=dy)||(ay>=dy&&ay<=by))
                    flag=1;
        else if(cx==ax)
            if((cy>=by&&cy<=dy)||(cy>=dy&&cy<=by))
                flag=1;
    }
    else if(cy==ay)
        {
            if(ay==by)
                if((ax>=bx&&ax<=dx)||(ax>=dx&&ax<=bx))
                    flag=1;
            else if(cy==ay)
                if((cx>=bx&&cx<=dx)||(cx>=dx&&cx<=bx))
                    flag=1;
        }
        if(flag==1)
            printf("yes");
        else
            printf("no");
return 0;

}