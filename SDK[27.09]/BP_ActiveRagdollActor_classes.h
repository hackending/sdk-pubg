// BlueprintGeneratedClass BP_ActiveRagdollActor.BP_ActiveRagdollActor_C
// Size: 0x450 (Inherited: 0x408)
struct ABP_ActiveRagdollActor_C : AActor {
	struct F*73a77c28fa UberGraphFrame; // 0x408(0x08)
	struct UBillboardComponent* Billboard; // 0x410(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x418(0x08)
	struct UArrowComponent* Arrow; // 0x420(0x08)
	struct UCapsuleComponent* Capsule; // 0x428(0x08)
	struct USceneComponent* Scene; // 0x430(0x08)
	struct FVector ServerPosition; // 0x438(0x0c)
	bool ClientInitialized; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	struct APlayerPawn_v2_C* ParentRef; // 0x448(0x08)

	void SetServerPos(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.SetServerPos // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	struct FVector InitClient(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitClient // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	struct FVector InitServer(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitServer // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void UserConstructionScript(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void ReceiveBeginPlay(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	float ReceiveTick(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x22ddc4
	struct FVector ExecuteUbergraph_BP_ActiveRagdollActor(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ExecuteUbergraph_BP_ActiveRagdollActor // HasDefaults // @ game+0x22ddc4
};

