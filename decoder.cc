#include <iostream>
#include <fstream>

int main(int argc, char *argv[]){//take in number of command line arguments, and arguments
	if (argc != 0){
		return
	}

	while (true) {
	  while (symbol < 0) {
	    symbol = huff.decode(bitio.input_bit());
	  }
	  if (symbol == Huffman::HEOF) {
	    break;
	  } else {
	    out.put(symbol);
	    symbol = -1;
	   }
	 }
 return 1;
}