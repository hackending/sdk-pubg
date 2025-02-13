// Enum VectorVM.EVectorVMOp
enum class EVectorVMOp : uint8 {
	done,
	add,
	sub,
	mul,
	div,
	mad,
	lerp,
	rcp,
	rsq,
	sqrt,
	neg,
	abs,
	exp,
	exp2,
	log,
	log2,
	sin,
	cos,
	tan,
	asin,
	acos,
	atan,
	atan2,
	ceil,
	floor,
	fmod,
	frac,
	trunc,
	clamp,
	min,
	max,
	pow,
	sign,
	step,
	random,
	noise,
	output,
	cmplt,
	cmple,
	cmpgt,
	cmpge,
	cmpeq,
	cmpneq,
	select,
	addi,
	subi,
	muli,
	clampi,
	mini,
	maxi,
	absi,
	negi,
	signi,
	cmplti,
	cmplei,
	cmpgti,
	cmpgei,
	cmpeqi,
	cmpneqi,
	bit_and,
	bit_or,
	bit_xor,
	bit_not,
	logic_and,
	logic_or,
	logic_xor,
	logic_not,
	f2i,
	i2f,
	f2b,
	b2f,
	i2b,
	b2i,
	inputdata_32bit,
	inputdata_noadvance_32bit,
	outputdata_32bit,
	acquireindex,
	external_func_call,
	exec_index,
	noise2D,
	noise3D,
	enter_stat_scope,
	exit_stat_scope,
	round,
	NumOpcodes,
	EVectorVMOp_MAX,
};

// Enum VectorVM.EVectorVMOperandLocation
enum class EVectorVMOperandLocation : uint8 {
	Register,
	Constant,
	Num,
	EVectorVMOperandLocation_MAX,
};

// Enum VectorVM.EVectorVMBaseTypes
enum class EVectorVMBaseTypes : uint8 {
	Float,
	Int,
	Bool,
	Num,
	EVectorVMBaseTypes_MAX,
};

