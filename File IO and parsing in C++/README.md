# File IO/parsing in C++ `<fstream>`

The Sample code from NTU102-1 [DS](https://ceiba.ntu.edu.tw/course/a5436b/index.htm) course

**by NTU [Michael Hsu](http://michaelhsu.tw/ "blog")**

## File IO Source code `open()`

```
    // ################### file IO ###################

    ifstream fin;  // for reading file 
    ofstream fout; // for writing file 
    string temp; 
    
    // argv[0] 為程式路徑，所以要讀第二個參數，也就是 argv[1]。
    if (argc == 2){  
        // 開檔 input1.txt
        fin.open(argv[1]); 
    }
```

- `argv[]` : 吃進參數會放到 argv Array 裡面。

## File parse Source code `get()`

```
    // ################### file parse ###################
    char m;

    while (!fin.eof()){  //­ not End-of-file，尚未讀到結尾。
        int a, b;

        m = fin.get();   // 一次吃一個 character
        if( m == '+'){
            fout << m;
        }
        else{
            fin.putback(m); // 呃，吃錯了，吐回去。
            fin >> a >> b;  // '>>' 等同 get()，character by character
            fout << a + b;  // 寫進 output file
            fin.get();      // 把換行符號吃掉。
        }
    }

    // file close
    fin.close();
    fout.close(); 
```

- `get()`     : character by character
- `putback()` : Put character back

## File data `input1.txt`

```
2 5
+
1 2
+
3 3
```


## 執行
### Linux Command line

```
$ ./run input1.txt
```

## Result output file `output1.txt`

```
7+3+6
```

## Reference
- [Laboratory 3: Command Line Arguments and File Parsing](http://www.site.uottawa.ca/~lucia/courses/2131-05/labs/Lab3/)