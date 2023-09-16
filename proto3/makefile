all:read write

write:write.cc contacts.pb.cc
	g++ $^ -o $@ -lprotobuf -std=c++11

read:read.cc contacts.pb.cc
	g++ $^ -o $@ -lprotobuf -std=c++11

.PHONY:clean
clean:
	rm -f write read