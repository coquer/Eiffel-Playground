note
	description : "consoleApp application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	APPLICATION

inherit
	EXECUTION_ENVIRONMENT

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		do
			create txt_input_file.make_open_read ("BLOSUM62.txt")

			from
				txt_input_file.read_character
			until
				txt_input_file.exhausted
			loop
				print(txt_input_file.last_character)
				txt_input_file.read_character
			end
				txt_input_file.close

			--| Add your code here
			--put("Hello World", "CONTACT_HELLO_WORLD")
			--print(get("CONTACT_HELLO_WORLD"))
			print("Im out of the loop")
		end

feature -- Access
	txt_input_file: PLAIN_TEXT_FILE


end
