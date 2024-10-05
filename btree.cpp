#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
class Directory{
    public:
        Directory(string _name){
            name = _name;
        }
        ~Directory(){};
        void mkdir(string _name){
            directorys.push_back(Directory(_name));
        }
        void rmdir(string _name){
            for(int i=0; i<directorys.size(); i++){
                if(directorys.at(i).name == _name){
                    directorys.erase(directorys.begin()+i);
                    break;
                }
            }
        }
        vector<Directory>* ls(){
            return &directorys;
        }
        Directory* cd(string _name){
            for(int i=0; i<directorys.size(); i++){
                if(directorys.at(i).name == _name){
                    return &directorys.at(i);
                    break;
                }
            }
        }
        string name;
        vector<Directory> directorys;
};

int main(){
    Directory* root = new Directory("root");
    Directory* actualDir;
    while(true){
        string path = "/", command, arg;
        vector<string> args;
        cout << path << " $";
        getline(cin, command);
        istringstream iss(command);
        while(iss>>arg){
            args.push_back(arg);
        }
        if(args.at(1)=="mkdir"){

        }
        else if(args.at(1)=="rmdir"){

        }
        else if(args.at(1)=="ls"){

        }
        else if(args.at(1)=="cd"){

        }
        else if(args.at(1)=="exit"){
            cout << "Leaving program..." << endl;
            break;
        }
        else{
            cout << "Unknow command" << endl;
        }
    }
    return 0;
}