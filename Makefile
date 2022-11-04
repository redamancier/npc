all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

	@echo
	@echo "-- Verilaor tracing example"

	@echo
	@echo "- VERILATE ----------------"
	# $(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	verilator -Wall --cc --exe --build csrc/mux41.cpp vsrc/mux41.v --trace
	#运行verilator，编译仿真模型

	@echo
	@echo "-- BUILD ------------------"
	
	make -C obj_dir -f Vmux41.mk Vmux41
	#编译可执行文件

	@echo
	@echo "-- RUN --------------------"
	# @rm -rf logs
	# @mkdir -p logs
	./obj_dir/Vtop
	gtkwave obj_dir/mux41.vcd
	#运行可执行文件，并运行gtkwave得到仿真波形

	@echo
	@echo "-- DONE --------------------"
	@echo "To see waveforms, open vlt_dump.vcd in a waveform viewer"
	@echo

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir logs *.log *.dmp *.vcd coverage.dat core

include ../Makefile
