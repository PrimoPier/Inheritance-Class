# Inheritance-Class

11:32:23 **** Incremental Build of configuration Debug for project BeachAssignment ****
Info: Internal Builder is used for build
g++ -O0 -g3 -Wall -c -fmessage-length=0 -o "src\\ItemSource.o" "..\\src\\ItemSource.cpp" 
..\src\ItemSource.cpp: In constructor 'Shell::Shell(std::__cxx11::string, double, std::__cxx11::string)':
..\src\ItemSource.cpp:45:61: error: no matching function for call to 'Item::Item()'
 Shell::Shell(string color, double length, string description) {
                                                             ^
..\src\ItemSource.cpp:14:1: note: candidate: Item::Item(std::__cxx11::string, double, std::__cxx11::string)
 Item::Item(string color, double length, string description) {
 ^~~~
..\src\ItemSource.cpp:14:1: note:   candidate expects 3 arguments, 0 provided
In file included from ..\src\ItemSource.cpp:2:0:
..\src\ItemHead.h:14:7: note: candidate: Item::Item(const Item&)
 class Item {
       ^~~~
..\src\ItemHead.h:14:7: note:   candidate expects 1 argument, 0 provided
..\src\ItemHead.h:14:7: note: candidate: Item::Item(Item&&)
..\src\ItemHead.h:14:7: note:   candidate expects 1 argument, 0 provided
..\src\ItemSource.cpp: In constructor 'Plant::Plant(std::__cxx11::string, double, std::__cxx11::string, double)':
..\src\ItemSource.cpp:58:76: error: no matching function for call to 'Item::Item()'
 Plant::Plant(string color, double length, string description, double height) {
                                                                            ^
..\src\ItemSource.cpp:14:1: note: candidate: Item::Item(std::__cxx11::string, double, std::__cxx11::string)
 Item::Item(string color, double length, string description) {
 ^~~~
..\src\ItemSource.cpp:14:1: note:   candidate expects 3 arguments, 0 provided
In file included from ..\src\ItemSource.cpp:2:0:
..\src\ItemHead.h:14:7: note: candidate: Item::Item(const Item&)
 class Item {
       ^~~~
..\src\ItemHead.h:14:7: note:   candidate expects 1 argument, 0 provided
..\src\ItemHead.h:14:7: note: candidate: Item::Item(Item&&)
..\src\ItemHead.h:14:7: note:   candidate expects 1 argument, 0 provided
..\src\ItemSource.cpp: In constructor 'Wood::Wood(std::__cxx11::string, double, std::__cxx11::string, std::__cxx11::string)':
..\src\ItemSource.cpp:79:71: error: no matching function for call to 'Item::Item()'
 Wood::Wood(string color, double length, string description, string hue) {
                                                                       ^
..\src\ItemSource.cpp:14:1: note: candidate: Item::Item(std::__cxx11::string, double, std::__cxx11::string)
 Item::Item(string color, double length, string description) {
 ^~~~
..\src\ItemSource.cpp:14:1: note:   candidate expects 3 arguments, 0 provided
In file included from ..\src\ItemSource.cpp:2:0:
..\src\ItemHead.h:14:7: note: candidate: Item::Item(const Item&)
 class Item {
       ^~~~
..\src\ItemHead.h:14:7: note:   candidate expects 1 argument, 0 provided
..\src\ItemHead.h:14:7: note: candidate: Item::Item(Item&&)
..\src\ItemHead.h:14:7: note:   candidate expects 1 argument, 0 provided
..\src\ItemSource.cpp: In constructor 'Glass::Glass(std::__cxx11::string, double, std::__cxx11::string, std::__cxx11::string)':
..\src\ItemSource.cpp:100:76: error: no matching function for call to 'Item::Item()'
 Glass::Glass(string color, double length, string description, string origin) {
                                                                            ^
..\src\ItemSource.cpp:14:1: note: candidate: Item::Item(std::__cxx11::string, double, std::__cxx11::string)
 Item::Item(string color, double length, string description) {
 ^~~~
..\src\ItemSource.cpp:14:1: note:   candidate expects 3 arguments, 0 provided
In file included from ..\src\ItemSource.cpp:2:0:
..\src\ItemHead.h:14:7: note: candidate: Item::Item(const Item&)
 class Item {
       ^~~~
..\src\ItemHead.h:14:7: note:   candidate expects 1 argument, 0 provided
..\src\ItemHead.h:14:7: note: candidate: Item::Item(Item&&)
..\src\ItemHead.h:14:7: note:   candidate expects 1 argument, 0 provided

11:32:24 Build Failed. 4 errors, 0 warnings. (took 707ms)
