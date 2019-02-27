#include<iostream>
#include<opencv2/opencv.hpp>

int main(int argc, char** argv )
{
  if(argc != 2)
  {
    std::cout << "Error un argumentos" << std::endl;
    return -1;
  }
  image = cv::imread(argv[1], CV_LOAD_IMAGE_COLOR);


  cv::Mat image;
  cv::Vec3b px;
   
  std::cout << "origin[rows]: " << image.rows << std::endl;
  std::cout << "origin[cols]: " << image.cols << std::endl;
  
  cv::Mat r = cv::Mat::zeros(image.rows, image.cols, CV_8UC3);
  cv::Mat g = cv::Mat::zeros(image.rows, image.cols, CV_8UC3);
  cv::Mat b = cv::Mat::zeros(image.rows, image.cols, CV_8UC3);
   
  for(int i = 0; i < image.rows; i++)
    for(int j = 0; j < image.cols; j++)
    {
      px = image.at<cv::Vec3b>(i, j);
      r.at<cv::Vec3b>(i, j).val[0] = image.at<cv::Vec3b>(i, j).val[0];
      g.at<cv::Vec3b>(i, j).val[1] = image.at<cv::Vec3b>(i, j).val[1];
      b.at<cv::Vec3b>(i, j).val[2] = image.at<cv::Vec3b>(i, j).val[2];
    }

  cv::imshow("original", image);
  cv::imshow("Blue window",  b);
  cv::imshow("Green window", g);
  cv::imshow("Red window",   r);

  cv::waitKey(0);
  return 0;
}
