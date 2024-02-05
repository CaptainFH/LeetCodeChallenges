/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
	//var result = 0;
	/*while(typeof args[result] != "undefined"){
		result++;
	}*/
	
	return args.length;
};

/**
 * argumentsLength(1, 2, 3); // 3
 */
