// BlueprintGeneratedClass BP_CameraMan.BP_CameraMan_C
// Size: 0x458 (Inherited: 0x408)
struct ABP_CameraMan_C : AActor {
	struct F*73a77c28fa UberGraphFrame; // 0x408(0x08)
	struct UCameraComponent* Camera; // 0x410(0x08)
	struct USpringArmComponent* SpringArm; // 0x418(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x420(0x08)
	struct ATslCharacter* ParentRef; // 0x428(0x08)
	bool bInitialized; // 0x430(0x01)
	bool bIsAttached; // 0x431(0x01)
	bool bLookAtTarget; // 0x432(0x01)
	bool bAutoZoom; // 0x433(0x01)
	char pad_434[0x4]; // 0x434(0x04)
	struct UCurveFloat* DistanceZoomCurve; // 0x438(0x08)
	float YawRotation; // 0x440(0x04)
	float YawRotationRate; // 0x444(0x04)
	float TargetOffsetZ; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct ATslWheeledVehicle* ParentRefMoto; // 0x450(0x08)

	bool Init_Moto(); // Function BP_CameraMan.BP_CameraMan_C.Init_Moto // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool Init(); // Function BP_CameraMan.BP_CameraMan_C.Init // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void UserConstructionScript(); // Function BP_CameraMan.BP_CameraMan_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	float ReceiveTick(); // Function BP_CameraMan.BP_CameraMan_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void ReceiveDestroyed(); // Function BP_CameraMan.BP_CameraMan_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x22ddc4
	struct FHitResult ExecuteUbergraph_BP_CameraMan(); // Function BP_CameraMan.BP_CameraMan_C.ExecuteUbergraph_BP_CameraMan // HasDefaults // @ game+0x22ddc4
};

