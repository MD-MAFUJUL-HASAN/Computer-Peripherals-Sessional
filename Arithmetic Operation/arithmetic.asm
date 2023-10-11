mov a,#25h		//1st number
mov b,#12h		//2nd number
add a,b			//addition
mov 40h,a		//result moved to 40h ram location
mov a,#25h
subb a,b		//subtraction
mov 41h,a		//result moved to 41h memory location
mov a,#25h
mul ab
mov 42h,a		//multiplication result is 16bit
mov 43h,b		//so its need 2bytes storage location
mov a,#25h		
mov b,#12h		
div ab
mov 44h,a		//Quotient moved to 44h memory location
mov 45h,b		//remainder moved to 45h memory location
mov a,#25h
inc a
mov 46h,a		//increment moved to 46h memory location
dec a
mov 47h,a		//decrement moved to 47h memory location
end