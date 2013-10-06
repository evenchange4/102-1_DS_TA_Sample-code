# Arguments in C++

The Sample code from NTU102-1 [DS](https://ceiba.ntu.edu.tw/course/a5436b/index.htm) course

**by NTU [Michael Hsu](http://michaelhsu.tw/ "blog")**

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

## 執行
### Linux Command line
```

```

![Command line Arguments in C++]()


## 如何執行

R cmd:

```
> source("/path_to/bayesian_regression.r")
```

example: （可用拖曳方式取得路徑）

```
> source("/Users/michaelhsu/Dropbox/15.\ 碩一上課業/02.\ DMIR\ 資料探勘與資訊檢 索/hw2/bayesian_regression.r")
```

## Result (plot the RMSE with respect to 𝜆)

![Vary 𝜆 and plot the RMSE with respect to 𝜆](https://raw.github.com/evenchange4/102-1_DMIR_Hw2_Bayesian-Regression/master/plot%20rmse.png)

## Source code

[https://github.com/evenchange4/102-1_DMIR_Hw2_Bayesian-Regression](https://github.com/evenchange4/102-1_DMIR_Hw2_Bayesian-Regression)