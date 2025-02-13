// Class OceanPlugin.BuoyancyForceComponent
// Size: 0x580 (Inherited: 0x4d0)
struct UBuoyancyForceComponent : USceneComponent {
	struct AOceanManager* OceanManager; // 0x4d0(0x08)
	float MeshDensity; // 0x4d8(0x04)
	float FluidDensity; // 0x4dc(0x04)
	float FluidLinearDamping; // 0x4e0(0x04)
	float FluidAngularDamping; // 0x4e4(0x04)
	struct FVector VelocityDamper; // 0x4e8(0x0c)
	bool ClampMaxVelocity; // 0x4f4(0x01)
	char pad_4F5[0x3]; // 0x4f5(0x03)
	float MaxUnderwaterVelocity; // 0x4f8(0x04)
	float TestPointRadius; // 0x4fc(0x04)
	struct TArray<struct FVector> TestPoints; // 0x500(0x10)
	bool ApplyForceToBones; // 0x510(0x01)
	bool SnapToSurfaceIfNoPhysics; // 0x511(0x01)
	bool TwoGerstnerIterations; // 0x512(0x01)
	char pad_513[0x5]; // 0x513(0x05)
	struct TArray<float> PointDensityOverride; // 0x518(0x10)
	struct TArray<struct F*30f71a2cfb> BoneOverride; // 0x528(0x10)
	bool DrawDebugPoints; // 0x538(0x01)
	bool EnableStayUprightConstraint; // 0x539(0x01)
	char pad_53A[0x2]; // 0x53a(0x02)
	float StayUprightStiffness; // 0x53c(0x04)
	float StayUprightDamping; // 0x540(0x04)
	struct FRotator StayUprightDesiredRotation; // 0x544(0x0c)
	bool EnableWaveForces; // 0x550(0x01)
	char pad_551[0x3]; // 0x551(0x03)
	float WaveForceMultiplier; // 0x554(0x04)
	enum class ETickingGroup TickGroup; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	float WaveHightMultiplier; // 0x55c(0x04)
	bool *75445b3cac; // 0x560(0x01)
	char pad_561[0x1f]; // 0x561(0x1f)
};

// Class OceanPlugin.OceanManager
// Size: 0x490 (Inherited: 0x408)
struct AOceanManager : AActor {
	bool EnableGerstnerWaves; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	struct FVector2D GlobalWaveDirection; // 0x40c(0x08)
	float GlobalWaveSpeed; // 0x414(0x04)
	float GlobalWaveAmplitude; // 0x418(0x04)
	float DistanceCheck; // 0x41c(0x04)
	struct TArray<struct F*552d0702b2> WaveClusters; // 0x420(0x10)
	struct TArray<struct F*234d7ae7d5> WaveSetOffsetsOverride; // 0x430(0x10)
	float NetWorkTimeOffset; // 0x440(0x04)
	bool bEnableLandscapeModulation; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	float ModulationStartHeight; // 0x448(0x04)
	float ModulationMaxHeight; // 0x44c(0x04)
	float ModulationPower; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct ALandscape* Landscape; // 0x458(0x08)
	struct UTexture2D* HeightmapTexture; // 0x460(0x08)
	char pad_468[0x28]; // 0x468(0x28)

	void *44b8e8c893(); // Function OceanPlugin.OceanManager.*44b8e8c893 // Final|Native|Public|BlueprintCallable // @ game+0x6a47830
	void *0d518089c5(); // Function OceanPlugin.OceanManager.*0d518089c5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6a4740c
	void *00331089ef(); // Function OceanPlugin.OceanManager.*00331089ef // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x728784
};

// Class OceanPlugin.*ee15cf3610
// Size: 0x5f0 (Inherited: 0x4d0)
struct U*ee15cf3610 : USceneComponent {
	bool bUseDrag; // 0x4d0(0x01)
	bool bDebugOn; // 0x4d1(0x01)
	char pad_4D2[0x6]; // 0x4d2(0x06)
	struct AOceanManager* TheOcean; // 0x4d8(0x08)
	float WaterDensity; // 0x4e0(0x04)
	float Gravity; // 0x4e4(0x04)
	float MeshDensity; // 0x4e8(0x04)
	char pad_4EC[0x14]; // 0x4ec(0x14)
	struct UStaticMeshComponent* BuoyantMesh; // 0x500(0x08)
	char pad_508[0x8]; // 0x508(0x08)
	struct FTransform MeshTransform; // 0x510(0x30)
	float FalseVolume; // 0x540(0x04)
	float BuoyancyReductionCoefficient; // 0x544(0x04)
	float BuoyancyPitchReductionCoefficient; // 0x548(0x04)
	float DensityCorrection; // 0x54c(0x04)
	float DensityCorrectionModifier; // 0x550(0x04)
	float SubmergedVolume; // 0x554(0x04)
	float ImpactCoefficient; // 0x558(0x04)
	struct FVector DragCoefficient; // 0x55c(0x0c)
	struct FVector SuctionCoefficient; // 0x568(0x0c)
	float ViscousDragCoefficient; // 0x574(0x04)
	float MaxSlamAcceleration; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct TArray<struct FVector> AdvancedGridHeight; // 0x580(0x10)
	struct TArray<struct F*579a2cd28a> SubmergedTris; // 0x590(0x10)
	struct TArray<float> TriSizes; // 0x5a0(0x10)
	struct TArray<float> TriSubmergedArea; // 0x5b0(0x10)
	char pad_5C0[0x30]; // 0x5c0(0x30)

	void *e6ba22d618(); // Function OceanPlugin.*ee15cf3610.*e6ba22d618 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6a46ea4
	void TriangleArea(); // Function OceanPlugin.*ee15cf3610.TriangleArea // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6a48258
	void *6a4dd8c310(); // Function OceanPlugin.*ee15cf3610.*6a4dd8c310 // Final|Native|Public|BlueprintCallable // @ game+0x6a47f00
	void *de1ed34e05(); // Function OceanPlugin.*ee15cf3610.*de1ed34e05 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6a4753c
	void *2c66bbe42f(); // Function OceanPlugin.*ee15cf3610.*2c66bbe42f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6a4709c
	void *ec6dae033c(); // Function OceanPlugin.*ee15cf3610.*ec6dae033c // Final|Native|Public|BlueprintCallable // @ game+0x6a47528
	void *0a57fb2f3c(); // Function OceanPlugin.*ee15cf3610.*0a57fb2f3c // Final|Native|Public|BlueprintCallable // @ game+0x6a46db4
	void *3d9b6c25ac(); // Function OceanPlugin.*ee15cf3610.*3d9b6c25ac // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6a47ffc
};

// Class OceanPlugin.*0de36bb271
// Size: 0x2d0 (Inherited: 0x250)
struct U*0de36bb271 : UMovementComponent {
	struct AOceanManager* OceanManager; // 0x248(0x08)
	float MeshDensity; // 0x250(0x04)
	float FluidDensity; // 0x254(0x04)
	float FluidLinearDamping; // 0x258(0x04)
	float FluidAngularDamping; // 0x25c(0x04)
	struct FVector VelocityDamper; // 0x260(0x0c)
	bool ClampMaxVelocity; // 0x26c(0x01)
	float MaxUnderwaterVelocity; // 0x270(0x04)
	float TestPointRadius; // 0x274(0x04)
	struct TArray<struct FVector> TestPoints; // 0x278(0x10)
	struct TArray<float> PointDensityOverride; // 0x288(0x10)
	bool DrawDebugPoints; // 0x298(0x01)
	bool EnableStayUprightConstraint; // 0x299(0x01)
	float StayUprightStiffness; // 0x29c(0x04)
	float StayUprightDamping; // 0x2a0(0x04)
	struct FRotator StayUprightDesiredRotation; // 0x2a4(0x0c)
	bool EnableWaveForces; // 0x2b0(0x01)
	float WaveForceMultiplier; // 0x2b4(0x04)
	char pad_2B8[0x18]; // 0x2b8(0x18)
};

// Class OceanPlugin.*f782ec5e0a
// Size: 0xdb0 (Inherited: 0xd60)
struct U*f782ec5e0a : UDestructibleComponent {
	char pad_D60[0x10]; // 0xd60(0x10)
	struct AOceanManager* OceanManager; // 0xd70(0x08)
	float ChunkDensity; // 0xd78(0x04)
	float FluidDensity; // 0xd7c(0x04)
	float FluidLinearDamping; // 0xd80(0x04)
	float FluidAngularDamping; // 0xd84(0x04)
	struct FVector VelocityDamper; // 0xd88(0x0c)
	bool ClampMaxVelocity; // 0xd94(0x01)
	char pad_D95[0x3]; // 0xd95(0x03)
	float MaxUnderwaterVelocity; // 0xd98(0x04)
	float TestPointRadius; // 0xd9c(0x04)
	bool DrawDebugPoints; // 0xda0(0x01)
	bool EnableWaveForces; // 0xda1(0x01)
	char pad_DA2[0x2]; // 0xda2(0x02)
	float WaveForceMultiplier; // 0xda4(0x04)
	float ChunkSleepThreshold; // 0xda8(0x04)
	float ChunkStabilizationThreshold; // 0xdac(0x04)
};

// Class OceanPlugin.BuoyantDestructible
// Size: 0x410 (Inherited: 0x408)
struct ABuoyantDestructible : AActor {
	struct U*f782ec5e0a* BuoyantDestructibleComponent; // 0x408(0x08)
};

// Class OceanPlugin.*2932d4ec72
// Size: 0xc10 (Inherited: 0xba0)
struct U*2932d4ec72 : UStaticMeshComponent {
	char pad_BA0[0x8]; // 0xba0(0x08)
	bool bVerticalForcesOnly; // 0xba8(0x01)
	bool bUseWaterPatch; // 0xba9(0x01)
	bool bUseStaticForces; // 0xbaa(0x01)
	bool bUseDynamicForces; // 0xbab(0x01)
	char pad_BAC[0x4]; // 0xbac(0x04)
	struct AOceanManager* OceanManager; // 0xbb0(0x08)
	bool bDrawForceArrows; // 0xbb8(0x01)
	bool bDrawWaterline; // 0xbb9(0x01)
	bool bDrawVertices; // 0xbba(0x01)
	bool bDrawTriangles; // 0xbbb(0x01)
	bool bDrawSubtriangles; // 0xbbc(0x01)
	char pad_BBD[0x3]; // 0xbbd(0x03)
	float ForceArrowSize; // 0xbc0(0x04)
	bool bOverrideMeshDensity; // 0xbc4(0x01)
	char pad_BC5[0x3]; // 0xbc5(0x03)
	float MeshDensity; // 0xbc8(0x04)
	bool bOverrideMass; // 0xbcc(0x01)
	char pad_BCD[0x3]; // 0xbcd(0x03)
	float Mass; // 0xbd0(0x04)
	float WaterDensity; // 0xbd4(0x04)
	char pad_BD8[0x28]; // 0xbd8(0x28)
	struct U*51d64c3f89* *1879aef01a; // 0xc00(0x08)
	char pad_C08[0x8]; // 0xc08(0x08)
};

// Class OceanPlugin.CustomVehicleController
// Size: 0x7d0 (Inherited: 0x7c0)
struct ACustomVehicleController : APlayerController {
	struct APawn* *3755745c7a; // 0x7c0(0x08)
	char pad_7C8[0x8]; // 0x7c8(0x08)

	void *23a2eb3a46(); // Function OceanPlugin.CustomVehicleController.*23a2eb3a46 // Native|Public|BlueprintCallable // @ game+0xb5482c
	void DrawBuoyancyPoints(); // Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints // Exec|Native|Public // @ game+0x6a47084
	void *39c40c8390(); // Function OceanPlugin.CustomVehicleController.*39c40c8390 // Native|Public|BlueprintCallable // @ game+0x6a47178
	void *cd4fa2d43f(); // Function OceanPlugin.CustomVehicleController.*cd4fa2d43f // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6a47500
	void EnableBuoyancy(); // Function OceanPlugin.CustomVehicleController.EnableBuoyancy // Exec|Native|Public // @ game+0x59feaf4
};

// Class OceanPlugin.FishManager
// Size: 0x460 (Inherited: 0x408)
struct AFishManager : AActor {
	struct TArray<struct UClass*> flockTypes; // 0x408(0x10)
	struct TArray<float> numInFlock; // 0x418(0x10)
	float minZ; // 0x428(0x04)
	float maxZ; // 0x42c(0x04)
	float underwaterBoxLength; // 0x430(0x04)
	bool attachToPlayer; // 0x434(0x01)
	bool DebugMode; // 0x435(0x01)
	char pad_436[0x2]; // 0x436(0x02)
	struct UClass* PlayerType; // 0x438(0x08)
	char pad_440[0x20]; // 0x440(0x20)
};

// Class OceanPlugin.FlockFish
// Size: 0x5e8 (Inherited: 0x468)
struct AFlockFish : APawn {
	char pad_468[0x10]; // 0x468(0x10)
	struct USphereComponent* FishInteractionSphere; // 0x478(0x08)
	bool isLeader; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct TArray<struct UClass*> enemyTypes; // 0x488(0x10)
	struct TArray<struct UClass*> preyTypes; // 0x498(0x10)
	struct UClass* neighborType; // 0x4a8(0x08)
	float followDist; // 0x4b0(0x04)
	float Speed; // 0x4b4(0x04)
	float MaxSpeed; // 0x4b8(0x04)
	float turnSpeed; // 0x4bc(0x04)
	float turnFrequency; // 0x4c0(0x04)
	float hungerResetTime; // 0x4c4(0x04)
	float distBehindSpeedUpRange; // 0x4c8(0x04)
	float SeperationDistanceMultiplier; // 0x4cc(0x04)
	float FleeDistanceMultiplier; // 0x4d0(0x04)
	float FleeAccelerationMultiplier; // 0x4d4(0x04)
	float ChaseAccelerationMultiplier; // 0x4d8(0x04)
	float SeekDecelerationMultiplier; // 0x4dc(0x04)
	float AvoidForceMultiplier; // 0x4e0(0x04)
	float AvoidanceForce; // 0x4e4(0x04)
	struct UClass* PlayerType; // 0x4e8(0x08)
	struct FVector underwaterMin; // 0x4f0(0x0c)
	struct FVector underwaterMax; // 0x4fc(0x0c)
	float CustomZSeekMin; // 0x508(0x04)
	float CustomZSeekMax; // 0x50c(0x04)
	float NumNeighborsToEvaluate; // 0x510(0x04)
	float UpdateEveryTick; // 0x514(0x04)
	char pad_518[0x10]; // 0x518(0x10)
	bool DebugMode; // 0x528(0x01)
	char pad_529[0xbf]; // 0x529(0xbf)

	void OnBeginOverlap(); // Function OceanPlugin.FlockFish.OnBeginOverlap // Final|Native|Protected|HasOutParms // @ game+0x6a478c0
	void OnEndOverlap(); // Function OceanPlugin.FlockFish.OnEndOverlap // Final|Native|Protected // @ game+0x6a47b10
};

// Class OceanPlugin.*f0336f920d
// Size: 0x4f0 (Inherited: 0x4d0)
struct U*f0336f920d : USceneComponent {
	bool UpdateInEditor; // 0x4d0(0x01)
	enum class EFollowMethod FollowMethod; // 0x4d1(0x01)
	char pad_4D2[0x2]; // 0x4d2(0x02)
	float GridSnapSize; // 0x4d4(0x04)
	float MaxLookAtDistance; // 0x4d8(0x04)
	bool ScaleByDistance; // 0x4dc(0x01)
	char pad_4DD[0x3]; // 0x4dd(0x03)
	float ScaleDistanceFactor; // 0x4e0(0x04)
	float ScaleStartDistance; // 0x4e4(0x04)
	float ScaleMin; // 0x4e8(0x04)
	float ScaleMax; // 0x4ec(0x04)
};

// Class OceanPlugin.OceanMeshComponent
// Size: 0xa30 (Inherited: 0xa00)
struct UOceanMeshComponent : UPrimitiveComponent {
	struct UStaticMesh* SourceMesh; // 0x9f8(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0xa00(0x08)
	struct UMaterialInterface* LODMaterial; // 0xa08(0x08)
	struct UMaterialInterface* SimpleMaterial; // 0xa10(0x08)
	struct FVector BoundsExtent; // 0xa18(0x0c)
	float LODTransitionStart; // 0xa24(0x04)
	float LODTransitionEnd; // 0xa28(0x04)

	void *6956e0cee4(); // Function OceanPlugin.OceanMeshComponent.*6956e0cee4 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6a47c8c
	void *1a1c9eda93(); // Function OceanPlugin.OceanMeshComponent.*1a1c9eda93 // Final|Native|Public|BlueprintCallable // @ game+0x6a47e24
};

// Class OceanPlugin.TimeManager
// Size: 0x4d0 (Inherited: 0x408)
struct ATimeManager : AActor {
	struct F*809d41c387 CurrentLocalTime; // 0x408(0x1c)
	float Latitude; // 0x424(0x04)
	float Longitude; // 0x428(0x04)
	int32 OffsetUTC; // 0x42c(0x04)
	int32 OffsetDST; // 0x430(0x04)
	bool bAllowDaylightSavings; // 0x434(0x01)
	bool bDaylightSavingsActive; // 0x435(0x01)
	char pad_436[0x2]; // 0x436(0x02)
	float TimeScaleMultiplier; // 0x438(0x04)
	float SolarTime; // 0x43c(0x04)
	float LocalClockTime; // 0x440(0x04)
	float TimeCorrection; // 0x444(0x04)
	int32 LSTM; // 0x448(0x04)
	int32 DayOfYear; // 0x44c(0x04)
	float EoT; // 0x450(0x04)
	float SolarAltAngle; // 0x454(0x04)
	float SolarDeclination; // 0x458(0x04)
	float SolarAzimuth; // 0x45c(0x04)
	float SolarHRA; // 0x460(0x04)
	float SiderealTime; // 0x464(0x04)
	float LunarAltAngle; // 0x468(0x04)
	float LunarHRA; // 0x46c(0x04)
	float LunarDeclination; // 0x470(0x04)
	float LunarAzimuth; // 0x474(0x04)
	float LunarRightAsc; // 0x478(0x04)
	float LunarElapsedDays; // 0x47c(0x04)
	float EcLongitude; // 0x480(0x04)
	float EcLatitude; // 0x484(0x04)
	float EcDistance; // 0x488(0x04)
	float PartL; // 0x48c(0x04)
	float PartM; // 0x490(0x04)
	float PartF; // 0x494(0x04)
	char pad_498[0x38]; // 0x498(0x38)

	void *3d81744128(); // Function OceanPlugin.TimeManager.*3d81744128 // Final|Native|Public|BlueprintCallable // @ game+0x6a473ec
	void *540c70f034(); // Function OceanPlugin.TimeManager.*540c70f034 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6a46fac
	void *2b13c801c2(); // Function OceanPlugin.TimeManager.*2b13c801c2 // Final|Native|Public|BlueprintCallable // @ game+0x6a47d8c
	void *dc2cea5cc9(); // Function OceanPlugin.TimeManager.*dc2cea5cc9 // Final|Native|Public|BlueprintCallable // @ game+0x6a47318
	void *9d516a8ce7(); // Function OceanPlugin.TimeManager.*9d516a8ce7 // Final|Native|Public|BlueprintCallable // @ game+0x6a476f8
	void IsLeapYear(); // Function OceanPlugin.TimeManager.IsLeapYear // Final|Native|Public|BlueprintCallable // @ game+0x6a477a4
	void *407506cdf5(); // Function OceanPlugin.TimeManager.*407506cdf5 // Final|Native|Public|BlueprintCallable // @ game+0x67d9d04
	void *ddd4c2e178(); // Function OceanPlugin.TimeManager.*ddd4c2e178 // Final|Native|Public|BlueprintCallable // @ game+0x6a46fe0
	void GetDayOfYear(); // Function OceanPlugin.TimeManager.GetDayOfYear // Final|Native|Public|BlueprintCallable // @ game+0x6a4720c
	void *4ddaa29eb4(); // Function OceanPlugin.TimeManager.*4ddaa29eb4 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6a472e0
	void *8acca05369(); // Function OceanPlugin.TimeManager.*8acca05369 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6a47638
	void *4828d3655b(); // Function OceanPlugin.TimeManager.*4828d3655b // Final|Native|Public|BlueprintCallable // @ game+0x6a47660
	void *259dafb4d3(); // Function OceanPlugin.TimeManager.*259dafb4d3 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6a47050
};

// Class OceanPlugin.*51d64c3f89
// Size: 0x280 (Inherited: 0x200)
struct U*51d64c3f89 : UActorComponent {
	float DesiredCellSize; // 0x200(0x04)
	bool bOnlyCollidingComponents; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	float GridSizeMultiplier; // 0x208(0x04)
	bool bDrawUsedTriangles; // 0x20c(0x01)
	bool bDrawHeightmap; // 0x20d(0x01)
	char pad_20E[0x62]; // 0x20e(0x62)
	struct AOceanManager* *db1c3d2b30; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)
};

