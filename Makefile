CC = gcc
CFLAGS = -Wall

SRCS = final.c
OBJS = final.o
HDRS = grds.h

TARGET = final

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

$(OBJS): $(SRCS) $(HDRS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm -f $(OBJS) $(TARGET)