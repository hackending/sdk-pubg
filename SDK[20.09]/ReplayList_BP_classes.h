// BlueprintGeneratedClass ReplayList_BP.ReplayList_BP_C
// Size: 0x461 (Inherited: 0x3f0)
struct AReplayList_BP_C : AActor {
	struct F*73a77c28fa UberGraphFrame; // 0x3f0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3f8(0x08)
	struct UTslGameInstance* TslGameInstance; // 0x400(0x08)
	struct UUiReplayList_C* UiReplayList; // 0x408(0x08)
	struct FString IsLive; // 0x410(0x10)
	struct FText NewVar_1; // 0x420(0x18)
	struct FString RegionOrLocal; // 0x438(0x10)
	int32 PageSize; // 0x448(0x04)
	int32 pageCount; // 0x44c(0x04)
	float prev_Percent; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct UWidget* CurrentItemWidget; // 0x458(0x08)
	bool FindReplay; // 0x460(0x01)

	void OnUpdateItem(); // Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void UpdateReplayList(); // Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool CheckReplayBusyStatus(); // Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool OnGoPageBtn(int32 GoPageNum); // Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool OnNextPageBtn(int32 CallFunc__10b0236ab6_ReturnValue); // Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool OnPrevPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ClearReplayList(); // Function ReplayList_BP.ReplayList_BP_C.ClearReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void UserConstructionScript(); // Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReceiveBeginPlay(); // Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void CreateReplayListEvent(); // Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void PrevPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void NextPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.NextPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void GoPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.GoPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString OnItemClicked(); // Function ReplayList_BP.ReplayList_BP_C.OnItemClicked // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void LoopBreaker(); // Function ReplayList_BP.ReplayList_BP_C.LoopBreaker // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString ExecuteUbergraph_ReplayList_BP(DelegateProperty _37b0074df2_OutputDelegate, int32 ___int_Array_Index_Variable, struct UReplayListItem_C* CallFunc_Create_ReturnValue2, struct FReplayItem K2Node_CustomEvent_inReplayItem); // Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP // HasDefaults // @ game+0x1e037c
};

