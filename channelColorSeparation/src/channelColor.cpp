#include<iostream>
#include<opencv2/opencv.hpp>

int main(int argc, char** argv )
{
  if(argc != 2)
  {
    std::cout << "Error un argumentos" << std::endl;
    return -1;
  }

  cv::Mat image;
  cv::Mat rgb[3];
  image = cv::imread(argv[1], CV_LOAD_IMAGE_COLOR);
  cv::split(image, rgb);
  
  
  cv::imshow("original", image);
  cv::imshow("Blue window", rgb[0]);
  cv::imshow("Green window", rgb[1]);
  cv::imshow("Red window", rgb[2]);

  cv::waitKey(0);
  return 0;
}
