#include<opencv/highgui.h>
int main()
{
    IplImage*img=cvLoadImage("12.jpg");
    cvShowImage("week07",img);
    cvWaitKey(0);
}
