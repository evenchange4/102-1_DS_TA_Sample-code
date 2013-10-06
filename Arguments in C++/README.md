# Arguments in C++

The Sample code from NTU102-1 [DS](https://ceiba.ntu.edu.tw/course/a5436b/index.htm) course

**by NTU 河童 [Michael Hsu](http://michaelhsu.tw/ "blog")**

## Source code

```
#include <iostream> 
using namespace std;

int main(int argc, char* argv[]) { 
	cout << "argc = " << argc << endl; 
	cout << "argv[0] = " << argv[0] << endl << endl; 

	for(int i = 1; i < argc; i++){
	cout << "argv[" << i << "] = " << argv[i] << endl; 
	}
	// return 0;  
	system("pause"); 
}
```

- `argc`   : argv[] size，吃進的參數的個數。
- `argv[]` : 吃進參數會放到 argv Array 裡面。
- `argv[0]`: 其中 index = 0 為程式的路徑。

## 執行
### Linux Command line
```
$ ./run 0 1 "aa"

=> argc = 4
=> argv[0] = ./run

=> argv[1] = 0
=> argv[2] = 1
=> argv[3] = aa
```

![Command line Arguments in C++](https://raw.github.com/evenchange4/102-1_DS_TA_Sample-code/master/Arguments%20in%20C++/CML%20argv%20in%20C++.png)


### DevC++
![DevC++ arguments](https://raw.github.com/evenchange4/102-1_DS_TA_Sample-code/master/Arguments%20in%20C++/devc++%20argv.png)

## Reference
- [Command Line Arguments in C++](http://www.site.uottawa.ca/~lucia/courses/2131-05/labs/Lab3/CommandLineArguments.html)
