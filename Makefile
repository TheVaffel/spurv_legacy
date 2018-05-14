OBJS = spurv.o lex.yy.o y.tab.o

libspurv.a: $(OBJS)
	ar rvs $@ $^ 

%.o: %.cpp y.tab.cpp
	g++ -std=c++11 -c $< -o $@ -I .

lex.yy.cpp: spurv.l y.tab.cpp
	flex  -o $@ $<

y.tab.cpp: spurv.y
	yacc -d $^ -o $@

spurv.l: lex_file_generator.py
	python3 $^ > $@	

spurv.y: yacc_file_generator.py
	python3 $^ > $@

clean:
	rm spurv.l spurv.y y.tab.*pp lex.yy.*pp $(OBJS)

purge: clean
	rm libspurv.a
