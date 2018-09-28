LIBPKGS  = util sorter
MAIN     = main

LIBS     = $(addprefix -l, $(LIBPKGS))
LIBFILES = $(addsuffix .a, $(addprefix lib, $(LIBPKGS)))

dummy:
	@echo "Error: please use make <i | m | clean | cleanall>"

.PHONY : i m

i: CMD  = insertion
m: CMD  = merge

i: CMDFLAG = -DSORT_INSERTION
m: CMDFLAG = -DSORT_MERGE

i m: clean clean all

EXEC     = Sort.$(CMD)

all: libs main

libs:
	@for pkg in $(LIBPKGS); \
	do \
		echo "Checking $$pkg..."; \
		cd src/$$pkg; \
                make -f make.$$pkg --no-print-directory PKGNAME=$$pkg; \
		cd ../..; \
	done

main:
	@echo "Checking $(MAIN)..."
	@cd src/$(MAIN); \
		make -f make.$(MAIN) --no-print-directory CMDFLAG=$(CMDFLAG) \
		                          INCLIB="$(LIBS)" EXEC=$(EXEC);
	@ln -fs bin/$(EXEC) .
#	@strip bin/$(EXEC)

clean:
	@for pkg in $(LIBPKGS); \
	do \
		echo "Cleaning $$pkg..."; \
		cd src/$$pkg; \
                make -f make.$$pkg --no-print-directory PKGNAME=$$pkg clean; \
                cd ../..; \
	done
	@echo "Cleaning $(MAIN)..."
	@cd src/$(MAIN); make -f make.$(MAIN) --no-print-directory clean
	@echo "Removing $(LIBFILES)..."
	@cd lib; rm -f $(LIBFILES)
	@echo "Removing $(EXEC)..."
	@rm -f bin/$(EXEC)

cleanall: clean
	@echo "Removing bin/*..."
	@rm -f bin/*
