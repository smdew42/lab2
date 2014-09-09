#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class WriteFile
{
	private:
		ofstream output_file;
		bool closed;
		
	public:
		WriteFile();
		virtual ~WriteFile();
		String* line();
		void close();
};

WriteFile* createWriteFile(const char* file_name);
void destroyWriteFile(WriteFile* wf);
void writeLine(WriteFile* wf, String* line);
void close(WriteFile* wf);

#endif
