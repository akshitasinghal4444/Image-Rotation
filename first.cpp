#include<opencv2\opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main()
{
    string img_path;
    int angle;

    cout<<"enter image path:";
    getline(cin,img_path);

    cout<<"enter angle:";
    cin>>angle;

    Mat image=imread(img_path,IMREAD_COLOR);
    if(image.empty())
    {
        cout<<"error\n";
        cin.get();
        return -1;
    }

    
    
    Point2f center((image.cols-1)/2.,(image.rows-1)/2.);

    Mat temp=getRotationMatrix2D(center,angle,1);
    Mat rotated;
    Rect2f bbox=RotatedRect(Point2f(),image.size(),angle).boundingRect2f();
    temp.at<double>(0,2)+=bbox.width/2.0-image.cols/2.0;
    temp.at<double>(1,2)+=bbox.height/2.0-image.rows/2.0;
    warpAffine(image,rotated,temp,bbox.size());

    namedWindow("original",WINDOW_NORMAL);
    imshow("original",image);
    waitKey(0);

    namedWindow("final",WINDOW_NORMAL);
    imshow("final",rotated);
    waitKey(0);
    
    destroyWindow("original");
    destroyWindow("final");
    
    return 0;
}