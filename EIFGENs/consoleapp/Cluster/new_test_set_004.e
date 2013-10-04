note
	description: "Generated tests created by AutoTest."
	author: "Testing tool"

class
	NEW_TEST_SET_004
	
inherit
	EQA_GENERATED_TEST_SET

feature -- Test routines

	generated_test_1
		note
			testing: "type/generated"
			testing: "covers/{APPLICATION}.make"
		local
			v_1: detachable ANY
			v_2: APPLICATION
			v_3: attached IMMUTABLE_STRING_32
			v_4: APPLICATION
			v_5: PATH
			v_6: CHARACTER_32
			v_7: INTEGER_32
			v_8: attached IMMUTABLE_STRING_32
			v_9: APPLICATION
			v_10: PATH
			v_11: APPLICATION
			v_12: INTEGER_64
			v_13: ARGUMENTS_32
			v_14: APPLICATION
			v_15: STRING_32
			v_16: detachable ANY
			v_17: STRING_32
			v_18: POINTER
			v_19: attached IMMUTABLE_STRING_32
			v_20: APPLICATION
			v_21: HASH_TABLE [attached STRING_32, attached STRING_32]
			v_22: APPLICATION
			v_23: APPLICATION
			v_24: PLAIN_TEXT_FILE
			v_25: detachable ANY
			v_26: PLAIN_TEXT_FILE
			v_27: PATH
			v_28: APPLICATION
			v_29: ARGUMENTS_32
			v_30: PATH
			v_31: PATH
			v_32: CHARACTER_32
			v_33: INTEGER_32
			v_34: attached IMMUTABLE_STRING_32
			v_35: ARGUMENTS_32
			v_36: HASH_TABLE [attached STRING_32, attached STRING_32]
			v_37: ARGUMENTS_32
			v_38: PATH
			v_39: PLAIN_TEXT_FILE
			v_40: PATH
			v_41: PATH
			v_42: APPLICATION
		do
			v_1 := Void
			execute_safe (agent: APPLICATION
				do
					create {APPLICATION} Result.make
				end)
			check attached {APPLICATION} last_object as l_ot1 then
				v_2 := l_ot1
			end
			execute_safe (agent (a_arg1: NONE): attached IMMUTABLE_STRING_32
				do
					create {attached IMMUTABLE_STRING_32} Result.make_from_string_general (a_arg1)
				end (Void))
			check attached {attached IMMUTABLE_STRING_32} last_object as l_ot2 then
				v_3 := l_ot2
			end
			execute_safe (agent: APPLICATION
				do
					create {APPLICATION} Result.make
				end)
			check attached {APPLICATION} last_object as l_ot3 then
				v_4 := l_ot3
			end
			execute_safe (agent v_4.home_directory_path)
			check attached {PATH} last_object as l_ot4 then
				v_5 := l_ot4
			end
			v_6 := {CHARACTER_32} '%%'
			v_7 := {INTEGER_32} -2
			execute_safe (agent (a_arg1: CHARACTER_32; a_arg2: INTEGER_32): attached IMMUTABLE_STRING_32
				do
					create {attached IMMUTABLE_STRING_32} Result.make_filled (a_arg1, a_arg2)
				end (v_6, v_7))
			check attached {attached IMMUTABLE_STRING_32} last_object as l_ot5 then
				v_8 := l_ot5
			end
			execute_safe (agent: APPLICATION
				do
					create {APPLICATION} Result.make
				end)
			check attached {APPLICATION} last_object as l_ot6 then
				v_9 := l_ot6
			end
			execute_safe (agent v_9.current_working_path)
			check attached {PATH} last_object as l_ot7 then
				v_10 := l_ot7
			end
			execute_safe (agent: APPLICATION
				do
					create {APPLICATION} Result.make
				end)
			check attached {APPLICATION} last_object as l_ot8 then
				v_11 := l_ot8
			end
			v_12 := {INTEGER_64} 9
			execute_safe (agent v_11.sleep (v_12))
			execute_safe (agent v_2.arguments)
			check attached {ARGUMENTS_32} last_object as l_ot9 then
				v_13 := l_ot9
			end
			execute_safe (agent: APPLICATION
				do
					create {APPLICATION} Result.make
				end)
			check attached {APPLICATION} last_object as l_ot10 then
				v_14 := l_ot10
			end
			execute_safe (agent v_14.default_shell)
			check attached {STRING_32} last_object as l_ot11 then
				v_15 := l_ot11
			end
			execute_safe (agent v_11.item (Void))
			v_16 := last_object
			execute_safe (agent v_14.default_shell)
			check attached {STRING_32} last_object as l_ot12 then
				v_17 := l_ot12
			end
			v_18 := default_pointer
			execute_safe (agent (a_arg1: POINTER): attached IMMUTABLE_STRING_32
				do
					create {attached IMMUTABLE_STRING_32} Result.make_from_c (a_arg1)
				end (v_18))
			check attached {attached IMMUTABLE_STRING_32} last_object as l_ot13 then
				v_19 := l_ot13
			end
			execute_safe (agent: APPLICATION
				do
					create {APPLICATION} Result.make
				end)
			check attached {APPLICATION} last_object as l_ot14 then
				v_20 := l_ot14
			end
			execute_safe (agent v_20.starting_environment)
			check attached {HASH_TABLE [attached STRING_32, attached STRING_32]} last_object as l_ot15 then
				v_21 := l_ot15
			end
			execute_safe (agent: APPLICATION
				do
					create {APPLICATION} Result.make
				end)
			check attached {APPLICATION} last_object as l_ot16 then
				v_22 := l_ot16
			end
			execute_safe (agent v_22.launch (v_15))
			execute_safe (agent: APPLICATION
				do
					create {APPLICATION} Result.make
				end)
			check attached {APPLICATION} last_object as l_ot17 then
				v_23 := l_ot17
			end
			execute_safe (agent v_23.txt_input_file)
			check attached {PLAIN_TEXT_FILE} last_object as l_ot18 then
				v_24 := l_ot18
			end
			execute_safe (agent v_4.put (Void, Void))
			execute_safe (agent v_9.item (v_15))
			v_25 := last_object
			execute_safe (agent v_23.txt_input_file)
			check attached {PLAIN_TEXT_FILE} last_object as l_ot19 then
				v_26 := l_ot19
			end
			execute_safe (agent v_14.system (Void))
			execute_safe (agent v_2.user_directory_path)
			check attached {PATH} last_object as l_ot20 then
				v_27 := l_ot20
			end
			execute_safe (agent: APPLICATION
				do
					create {APPLICATION} Result.make
				end)
			check attached {APPLICATION} last_object as l_ot21 then
				v_28 := l_ot21
			end
			execute_safe (agent v_28.arguments)
			check attached {ARGUMENTS_32} last_object as l_ot22 then
				v_29 := l_ot22
			end
			execute_safe (agent v_4.change_working_path (v_27))
			execute_safe (agent v_4.system (Void))
			execute_safe (agent v_23.user_directory_path)
			check attached {PATH} last_object as l_ot23 then
				v_30 := l_ot23
			end
			execute_safe (agent v_4.user_directory_path)
			check attached {PATH} last_object as l_ot24 then
				v_31 := l_ot24
			end
			v_32 := {CHARACTER_32} '%/30/'
			v_33 := {INTEGER_32} 6
			execute_safe (agent (a_arg1: CHARACTER_32; a_arg2: INTEGER_32): attached IMMUTABLE_STRING_32
				do
					create {attached IMMUTABLE_STRING_32} Result.make_filled (a_arg1, a_arg2)
				end (v_32, v_33))
			check attached {attached IMMUTABLE_STRING_32} last_object as l_ot25 then
				v_34 := l_ot25
			end
			execute_safe (agent v_14.system (v_34))
			execute_safe (agent v_22.arguments)
			check attached {ARGUMENTS_32} last_object as l_ot26 then
				v_35 := l_ot26
			end
			execute_safe (agent v_22.starting_environment)
			check attached {HASH_TABLE [attached STRING_32, attached STRING_32]} last_object as l_ot27 then
				v_36 := l_ot27
			end
			execute_safe (agent v_11.arguments)
			check attached {ARGUMENTS_32} last_object as l_ot28 then
				v_37 := l_ot28
			end
			execute_safe (agent v_28.home_directory_path)
			check attached {PATH} last_object as l_ot29 then
				v_38 := l_ot29
			end
			execute_safe (agent v_2.system (v_17))
			execute_safe (agent v_23.txt_input_file)
			check attached {PLAIN_TEXT_FILE} last_object as l_ot30 then
				v_39 := l_ot30
			end
			execute_safe (agent v_11.current_working_path)
			check attached {PATH} last_object as l_ot31 then
				v_40 := l_ot31
			end
			execute_safe (agent v_4.current_working_path)
			check attached {PATH} last_object as l_ot32 then
				v_41 := l_ot32
			end

				-- Final routine call
			set_is_recovery_enabled (False)
			execute_safe (agent: APPLICATION
				do
					create {APPLICATION} Result.make
				end)
			check attached {APPLICATION} last_object as l_ot33 then
				v_42 := l_ot33
			end
		end

end

