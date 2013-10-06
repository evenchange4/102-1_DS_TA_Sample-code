#include <iostream>
#include <cstdlib>
#include <fstream> // for file I/O 

using namespace std;

int main(int argc, char *argv[])
{   
    // ################### file IO ###################

    ifstream fin;  // for reading file 
    ofstream fout; // for writing file 
    string temp; 
    
    // argv[0] 為程式路徑，所以要讀第二個參數，也就是 argv[1]。
    if (argc == 2){  
        // 開檔 input1.txt
        fin.open(argv[1]); 
    }
    // 如果沒有在 command line 輸入參數，則從程式裡面輸入。
    else{ 
        cout << "Please input file name: ";
        cin >> temp;
        // 開檔 input1.txt
        fin.open(temp.c_str()); // c_str() : string to char string
    }
    
    //­ 若開檔 input1.txt 失敗，可能是檔案不存在。
    if (fin.fail()){ 
        cout << "Fail to open file\n";
        exit(1); // 非正常結束程式
    } 

    // 建新檔 output1.txt，預設為覆蓋。
    fout.open("output1.txt"); 

    //­ 若開檔 output1.txt 失敗
    if (fout.fail()){ 
        cout << "Fail to open file\n";
        exit(1); // 非正常結束程式
    }

    // ################### file parse ###################
    char m;

    while (!fin.eof()){  //­ not End-of-file，尚未讀到結尾。
        int a, b;

        m = fin.get(); // 一次吃一個 character
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

}