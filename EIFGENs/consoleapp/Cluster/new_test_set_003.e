note
	description: "Generated tests created by AutoTest."
	author: "Testing tool"

class
	NEW_TEST_SET_003
	
inherit
	EQA_GENERATED_TEST_SET

feature -- Test routines

	generated_test_1
		note
			testing: "type/generated"
			testing: "covers/{IMMUTABLE_STRING_32}.make_from_c"
		local
			v_18: POINTER
			v_19: attached IMMUTABLE_STRING_32
		do
			v_18 := default_pointer

				-- Final routine call
			set_is_recovery_enabled (False)
			execute_safe (agent (a_arg1: POINTER): attached IMMUTABLE_STRING_32
				do
					create {attached IMMUTABLE_STRING_32} Result.make_from_c (a_arg1)
				end (v_18))
			check attached {attached IMMUTABLE_STRING_32} last_object as l_ot1 then
				v_19 := l_ot1
			end
		end

end

