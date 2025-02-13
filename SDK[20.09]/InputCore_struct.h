// Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8 {
	Touch1,
	Touch2,
	Touch3,
	Touch4,
	Touch5,
	Touch6,
	Touch7,
	Touch8,
	Touch9,
	Touch10,
	ETouchIndex_MAX,
};

// Enum InputCore.ETouchType
enum class ETouchType : uint8 {
	Began,
	Moved,
	Stationary,
	Ended,
	NumTypes,
	ETouchType_MAX,
};

// Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8 {
	None,
	XBoxOne,
	PS4,
	EConsoleForGamepadLabels_MAX,
};

// Enum InputCore.EControllerHand
enum class EControllerHand : uint8 {
	Left,
	Right,
	Pad,
	ExternalCamera,
	Gun,
	Special_2,
	Special_3,
	Special_4,
	Special_5,
	Special_6,
	Special_7,
	Special_8,
	Special_9,
	Special_10,
	EControllerHand_MAX,
};

// ScriptStruct InputCore.Key
// Size: 0x18 (Inherited: 0x00)
struct FKey {
	struct FName KeyName; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

