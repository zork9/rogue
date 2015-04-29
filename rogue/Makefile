CC=gcc

CFLAGS=-O3 -g -I/usr/local/include/SDL
LDFLAGS=-L/usr/local/lib -lstdc++ -lSDL -lSDL_image

OBJS = main.o \
	view.o \
	controller.o \
	model.o \
	observerlist.o \
	vertexlist.o \
	scrollimp.o \
	scroll.o \
	scrollinterface.o \
	scrollinterfaceuse.o \
	modellist.o \
	modellistiter.o \
	modellistimp.o \
	ailist.o \
	sprite.o \
	aisprite.o \
	waterdragon.o \
	spriteaistate.o \
	spritestate.o \
	spritestatemove.o \
	spritestatenothing.o \
	vertex.o \
	vertexinterface.o \
	position.o \
	characterinterface.o \
	character.o \
	spritecharacter.o \
	spriteaiengine.o \

all: $(OBJS)
	$(CC) -o test $(OBJS) $(LDFLAGS)	

clean:
	rm -f *.o

.cc.o:
	$(CC) $(CFLAGS) -c $< 
.c.o:
	$(CC) $(CFLAGS) -c $< 
