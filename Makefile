all:
	@echo "Here insert your code"

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Here will make the verilog codes"

include ../Makefile
