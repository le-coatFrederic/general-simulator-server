bindir = bin/
servername = $(bindir)server
cxx = g++
cxxflags = -lsfml-network -lsfml-graphics -lsfml-system -lsfml-window -lsfml-audio
server_src = $(wildcard src/*.cpp src/*/*.cpp src/*/*/*.cpp src/*/*/*/*.cpp)  
server_head = $(wildcard src/*.hpp src/*/*.hpp src/*/*/*.hpp src/*/*/*/*.hpp)
server_objs = $(addprefix obj/, $(notdir $(patsubst src/%.cpp, obj/%.o, $(server_src))))

all: $(servername)
	mkdir -p $(bindir)

$(servername): $(server_src) $(server_head)
	$(cxx) -o $@ $^ $(cxxflags)

affichage: $(server_src) $(server_head) $(server_objs)
	echo -e "\n$(server_src)\n$(server_head)\n$(server_objs)"

git : gitserver
	git add makefile

gitserver: $(server_src) $(server_head)
	git add $^