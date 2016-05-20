LIBS=$(wildcard lib/*)
INCLUDE_PATH=lib/

run: objectfiles
	g++ main/main.cpp $(wildcard Obj/*) -I$(INCLUDE_PATH) -o run

objectfiles:
	mkdir Obj/
	for dir in $(LIBS); do \
		cd $$dir; \
		g++ -c *.cpp -I../; \
		mv *.o ../../Obj; \
		cd -; \
	done

clean:
	rm -rf Obj/
	rm -f run
