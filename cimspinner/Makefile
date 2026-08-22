all:
	@echo "make gen   => Generate cimspinner files"
	@echo "make clean => Delete cimspinner files"
	@echo "make fmt   => Run rubocop"

.PHONY: gen clean fmt

gen:
	ruby genCimSpinner.rb

clean:
	rm cimspinner.cpp
	rm cimspinner.h
	rm cimspinner_bars.cpp
	rm cimspinner_bars.h
	rm cimspinner_dots.cpp
	rm cimspinner_dots.h
	rm cimspinner_shapes.cpp
	rm cimspinner_shapes.h
	rm cimspinner_text.cpp
	rm cimspinner_text.h

fmt:
	@rubocop -a --only Layout  .
