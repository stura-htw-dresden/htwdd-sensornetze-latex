#=============================================================
# Makefile LaTeX
#=============================================================
# Author: Angelos Drossos
# (c) 2013, GPLv3
#=============================================================

# Compile more than one target
# --> look into these target directories and execute the Makefile
TARGETDIRS += forschungsprojekt/paper-sensoransteuerung
TARGETDIRS += forschungsprojekt/abschlussvortrag


#=============================================================
# RULES
#=============================================================

all: $(TARGETDIRS)
.PHONY: all

show: $(TARGETDIRS)
.PHONY: show

depend: $(TARGETDIRS)
.PHONY: depend

build: $(TARGETDIRS)
.PHONY: build

draft: $(TARGETDIRS)
.PHONY: draft

clean: $(TARGETDIRS)
.PHONY: clean

distclean: $(TARGETDIRS)
.PHONY: distclean

run: $(TARGETDIRS)
.PHONY: run

#=============================================================
# Recursive Make
#=============================================================

$(TARGETDIRS):
	@$(MAKE) --directory="$@" $(MAKECMDGOALS);
.PHONY: $(TARGETDIRS)

