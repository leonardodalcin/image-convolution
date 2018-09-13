#include <time.h> 
int imgSize = 128;
int* inputImage;
int* outputImage;
int kernelSize = 3;
const int convKernel[kernelSize][kernelSize]=
{
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
int generateRandomNumber() { 
    int lower = 0, upper = 255 
    int num = (rand() % (upper - lower + 1)) + lower; 
    return num;
} 

void allocateMemoryForImages() {
	inputImage = malloc(size * size * sizeof(int));
	outputImage = malloc(size * size * sizeof(int));
}

void generateInputImage() {
  int x = 0, y = 0;    
  for(x;x<size;x++){
		for(y;y<size;y++){
    	inputImage[x][y] = generateRandomNumber();
		}
  }
}
void simpleConvolution() {
	int imgX = 0, imgY = 0;
	int kernelX = 0; kernelY = 0; 
	int outputPixel = 0;
	for(imgX;imgX<imgSize;imgX++){
		imgY = 0;
		for(imgY;imgY<imgSize;imgY++){
    	outputPixel = 0;
			for(kernelX;kernelX<kernelSize;kernelX++){
				kernelY = 0;
				for(kernelY;kernelY<kernelSize;kernelY++){
					// arrumar tratamento do kernel
					if((imgX + kernelX) < imgSize && (imgY+kernelY) < imgSize)) 
						outputPixel += inputImage[imgX][imgY] * convKernel[kernelX][kernelY];
				}
			}
		}
  }
}

int main() {
	
}
