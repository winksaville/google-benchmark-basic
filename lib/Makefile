TARGET = libbenchmark.a

CXXFLAGS = -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors \
	  -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof \
	  -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK

LDFLAGS = -lpthread

OBJ_DIR = obj
SRC_DIR = src
SRC_BASE = benchmark

# Define the source files
SOURCES = \
    benchmark.cc \
    benchmark_register.cc \
    colorprint.cc \
    commandlineflags.cc \
    complexity.cc \
    console_reporter.cc \
    counter.cc \
    csv_reporter.cc \
    json_reporter.cc \
    reporter.cc \
    sleep.cc \
    statistics.cc \
    string_util.cc \
    sysinfo.cc \
    timers.cc

SOURCE_FILES = $(SOURCES:%.cc=$(SRC_BASE)/$(SRC_DIR)/%.cc)
OBJECT_FILES = $(SOURCES:%.cc=$(OBJ_DIR)/%.o)

# Define include files and directories
INCLUDES = -I$(SRC_BASE)/include -I$(SRC_BASE)/src

CC = clang
AR = ar
RM = rm

$(OBJ_DIR)/%.o: $(SRC_BASE)/$(SRC_DIR)/%.cc 
	$(CC) $(INCLUDES) $(CXXFLAGS) -c -o $@ $<

all: $(OBJ_DIR) $(TARGET)

$(TARGET): $(SOURCE_FILES) $(OBJECT_FILES)
	$(AR) rcs $(TARGET) $(OBJECT_FILES)


$(SOURCE_FILES):
	git clone https://github.com/google/benchmark.git benchmark
	git clone https://github.com/google/googletest.git benchmark/googletest

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

.PHONY: clean
clean:
	$(RM) -f $(OBJECT_FILES) $(TARGET)

.PHONY: distclean
distclean: clean
	$(RM) -rf benchmark obj
