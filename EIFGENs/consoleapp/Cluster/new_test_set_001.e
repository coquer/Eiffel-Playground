note
	description: "Generated tests created by AutoTest."
	author: "Testing tool"

class
	NEW_TEST_SET_001
	
inherit
	EQA_GENERATED_TEST_SET

feature -- Test routines

	generated_test_1
		note
			testing: "type/generated"
			testing: "covers/{IMMUTABLE_STRING_32}.make_from_string_general"
		local
			v_1: detachable ANY
			v_3: attached IMMUTABLE_STRING_32
		do
			v_1 := Void

				-- Final routine call
			set_is_recovery_enabled (False)
			execute_safe (agent (a_arg1: NONE): attached IMMUTABLE_STRING_32
				do
					create {attached IMMUTABLE_STRING_32} Result.make_from_string_general (a_arg1)
				end (Void))
			check attached {attached IMMUTABLE_STRING_32} last_object as l_ot1 then
				v_3 := l_ot1
			end
		end

end

