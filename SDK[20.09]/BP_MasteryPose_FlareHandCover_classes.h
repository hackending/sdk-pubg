// BlueprintGeneratedClass BP_MasteryPose_FlareHandCover.BP_MasteryPose_FlareHandCover_C
// Size: 0x478 (Inherited: 0x440)
struct ABP_MasteryPose_FlareHandCover_C : ABP_MasteryPose_C {
	struct F*73a77c28fa UberGraphFrame; // 0x440(0x08)
	struct UStaticMeshComponent* Plane; // 0x448(0x08)
	struct UPointLightComponent* PointLight1; // 0x450(0x08)
	struct USpotLightComponent* spotlight; // 0x458(0x08)
	struct UPointLightComponent* PointLight; // 0x460(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x468(0x08)
	struct USkeletalMeshComponent* FlareMesh; // 0x470(0x08)

	void UserConstructionScript(); // Function BP_MasteryPose_FlareHandCover.BP_MasteryPose_FlareHandCover_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void AttachObjects(); // Function BP_MasteryPose_FlareHandCover.BP_MasteryPose_FlareHandCover_C.AttachObjects // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FPoseCharacterAttachments ExecuteUbergraph_BP_MasteryPose_FlareHandCover(int32 EntryPoint); // Function BP_MasteryPose_FlareHandCover.BP_MasteryPose_FlareHandCover_C.ExecuteUbergraph_BP_MasteryPose_FlareHandCover // HasDefaults // @ game+0x1e037c
};

