// Class OnlineSubsystemEOS.EOSArtifactSettings
// Size: 0x30 (Inherited: 0x30)
struct UEOSArtifactSettings : UDataAsset {
	struct UClass* *d62375829a; // 0x28(0x08)
};

// Class OnlineSubsystemEOS.EOSSettings
// Size: 0x80 (Inherited: 0x28)
struct UEOSSettings : UObject {
	struct FString CacheDir; // 0x28(0x10)
	struct FString DefaultArtifactName; // 0x38(0x10)
	int32 TickBudgetInMilliseconds; // 0x48(0x04)
	bool bEnableOverlay; // 0x4c(0x01)
	bool bEnableSocialOverlay; // 0x4d(0x01)
	bool bShouldEnforceBeingLaunchedByEGS; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	struct TArray<struct FString> TitleStorageTags; // 0x50(0x10)
	int32 TitleStorageReadChunkLength; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct F*fc2b40bb70> Artifacts; // 0x68(0x10)
	bool bUseEAS; // 0x78(0x01)
	bool bUseEOSConnect; // 0x79(0x01)
	bool bMirrorStatsToEOS; // 0x7a(0x01)
	bool bMirrorAchievementsToEOS; // 0x7b(0x01)
	bool bUseEOSSessions; // 0x7c(0x01)
	bool bMirrorPresenceToEAS; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
};

// Class OnlineSubsystemEOS.NetConnectionEOS
// Size: 0x65870 (Inherited: 0x65868)
struct UNetConnectionEOS : UIpConnection {
	struct TArray<struct UChildConnection*> Children; // 0x48(0x10)
	struct UNetDriver* Driver; // 0x58(0x08)
	struct UClass* *2620c0f95a; // 0x60(0x08)
	struct UPackageMap* PackageMap; // 0x68(0x08)
	struct TArray<struct UChannel*> *db17e81f9a; // 0x70(0x10)
	struct TArray<struct AActor*> *4c97345279; // 0x80(0x10)
	struct AActor* ViewTarget; // 0x90(0x08)
	struct AActor* *52a10bb853; // 0x98(0x08)
	int32 *31a15aa452; // 0xa0(0x04)
	char *2b1c0c33d1 : 1; // 0xa4(0x01)
	char pad_658C4_1 : 1; // 0x658c4(0x01)
	char *ae08848d84 : 1; // 0xa4(0x01)
	struct TArray<struct UChannel*> *c0c274a36f; // 0x130(0x10)
	struct FUniqueNetIdRepl PlayerId; // 0x168(0x18)
	double *5be392aec6; // 0x1e8(0x08)
	struct TArray<struct UChannel*> *923a8e82b0; // 0x65728(0x10)
};

// Class OnlineSubsystemEOS.NetDriverEOS
// Size: 0x4f8 (Inherited: 0x4f0)
struct UNetDriverEOS : UIpNetDriver {
	bool *0793ba2cbd; // 0x4f0(0x01)
	bool bIsUsingP2PSockets; // 0x4f1(0x01)
	char pad_4F2[0x6]; // 0x4f2(0x06)
};

