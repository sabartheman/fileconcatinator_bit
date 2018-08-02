#include <iostream>
#include <fstream>

using namespace std;



void concatinate_files(void){


  //In total for our FPGA system there are 10 files that need to be concatinated
  unsigned numberOfFiles = 3;

  std::fstream fileToConcat, result;


  std::string filename, finalFilename;

  puts("What should the resulting file name be?\n");
  cin >> finalFilename;
  result.open(finalFilename,ios::out|ios::ate);

  //for(unsigned i = 0; i < numberOfFiles; i++){
    unsigned option = 0;
    puts("Do you want to use the standard format(1) or put in custom file names(2)\n");
    cin >> option;
    if(option == 2){
      puts("this part is not finished!!");
    }
    else if (option == 1){
      puts("The standard format option was chosen");
      filename = "1.bin";

      fileToConcat.open(filename,ios::in);


      if(result.is_open()){
        if(fileToConcat.is_open()){
          result << fileToConcat.rdbuf();
        }
      }

      filename = "2.bin";


      fileToConcat.close();  //cleaning up previous file
      fileToConcat.open(filename,ios::in);

      if(result.is_open()){
        if(fileToConcat.is_open()){
          result << fileToConcat.rdbuf();
        }
      }

      filename = "3.bin";

      fileToConcat.close();  //cleaning up previous file
      fileToConcat.open(filename,ios::in);


      if(result.is_open()){
        if(fileToConcat.is_open()){
          result << fileToConcat.rdbuf();
        }
      }

      puts("file concatination should be complete now");
      fileToConcat.close();
      result.close();
    }


  }

  int main(){
    concatinate_files();
    return 0;
  }
