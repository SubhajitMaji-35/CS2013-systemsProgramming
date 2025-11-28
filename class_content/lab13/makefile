hey: one two
	# Outputs hey as it is the target
	echo $@
	# Outputs all prereqs that are newer than the target
	echo $?
	# Outputs all prereqs
	echo $^
	# Outputs the first prereq
	echo $<
	touch hey

one:
	touch one

two:
	touch two


clean:
	rm -f one two hey


objects := $(wildcard *.o)

donot_do_like_this_objects := *.o

print:
	echo $(objects)





