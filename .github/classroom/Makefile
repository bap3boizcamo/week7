# Makefile for C++ Homework Autograder

# Trình biên dịch
CXX = g++

# Cờ biên dịch: -std=c++11, bật tất cả cảnh báo
CXXFLAGS = -std=c++11 -Wall -g

# Tên file thực thi
TARGET = autograder

# Tệp nguồn (homework.cpp được include bởi test_runner.cpp)
SRCS = test_runner.cpp

# Quy tắc mặc định: biên dịch tệp thực thi
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Quy tắc để chạy test
run: $(TARGET)
	./$(TARGET)

# Quy tắc dọn dẹp
clean:
	rm -f $(TARGET) results.json
