note
	description: "Generated tests created by AutoTest."
	author: "Testing tool"

class
	NEW_TEST_SET_002
	
inherit
	EQA_GENERATED_TEST_SET

feature -- Test routines

	generated_test_1
		note
			testing: "type/generated"
			testing: "covers/{IMMUTABLE_STRING_32}.make_filled"
		local
			v_6: CHARACTER_32
			v_7: INTEGER_32
			v_8: attached IMMUTABLE_STRING_32
		do
			v_6 := {CHARACTER_32} '%%'
			v_7 := {INTEGER_32} -2

				-- Final routine call
			set_is_recovery_enabled (False)
			execute_safe (agent (a_arg1: CHARACTER_32; a_arg2: INTEGER_32): attached IMMUTABLE_STRING_32
				do
					create {attached IMMUTABLE_STRING_32} Result.make_filled (a_arg1, a_arg2)
				end (v_6, v_7))
			check attached {attached IMMUTABLE_STRING_32} last_object as l_ot1 then
				v_8 := l_ot1
			end
		end

end

