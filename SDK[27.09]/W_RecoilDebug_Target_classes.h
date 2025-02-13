// WidgetBlueprintGeneratedClass W_RecoilDebug_Target.W_RecoilDebug_Target_C
// Size: 0x324 (Inherited: 0x258)
struct UW_RecoilDebug_Target_C : UUserWidget {
	struct F*73a77c28fa UberGraphFrame; // 0x258(0x08)
	struct UButton* Button_1; // 0x260(0x08)
	struct UButton* Button_Absolute; // 0x268(0x08)
	struct UButton* Button_Relative; // 0x270(0x08)
	struct UButton* Button_RenderBox; // 0x278(0x08)
	struct UButton* Button_RenderPoint; // 0x280(0x08)
	struct UButton* Button_ZoomIn; // 0x288(0x08)
	struct UButton* Button_ZoomOut; // 0x290(0x08)
	struct UCanvasPanel* CP_GridList; // 0x298(0x08)
	struct UCanvasPanel* CP_PointList; // 0x2a0(0x08)
	struct UImage* Image_2; // 0x2a8(0x08)
	struct UImage* Image_3; // 0x2b0(0x08)
	struct UImage* Image_6; // 0x2b8(0x08)
	struct UImage* Image_7; // 0x2c0(0x08)
	struct UImage* Img_PointDrawType; // 0x2c8(0x08)
	struct URetainerBox* Retainer_GridPanel; // 0x2d0(0x08)
	struct USlider* Slider_50; // 0x2d8(0x08)
	struct UImage* SliderBG; // 0x2e0(0x08)
	struct UTextBlock* T_PointDrawType; // 0x2e8(0x08)
	struct UTextBlock* T_SliderValue; // 0x2f0(0x08)
	struct UW_RecoilDebug_Target_GridMarkH_C* W_RecoilDebug_Target_GridMarkH_313; // 0x2f8(0x08)
	float PositionScale; // 0x300(0x04)
	int32 ZoomLevel; // 0x304(0x04)
	int32 DebugValueType; // 0x308(0x04)
	float StepScale; // 0x30c(0x04)
	int32 DebugRenderType; // 0x310(0x04)
	float BoxSizeScale; // 0x314(0x04)
	float VerticalVariationScalar; // 0x318(0x04)
	float MaxRangeLimit; // 0x31c(0x04)
	int32 PointDrawType; // 0x320(0x04)

	struct FVector2D MarkerGridPopulate(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.MarkerGridPopulate // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void Grid_ChangeMarkerZoom(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangeMarkerZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	struct FVector2D Grid_ChangePointZoom(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangePointZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	struct FVector2D AddDataRow(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddDataRow // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	int32 Grid_ChangeZoom(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangeZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	struct U*a08fc6dc58* AddBox(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddBox // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void ResetPoints(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.ResetPoints // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	struct U*a08fc6dc58* AddPoint(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddPoint // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void Construct(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	float BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	struct FText ExecuteUbergraph_W_RecoilDebug_Target(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.ExecuteUbergraph_W_RecoilDebug_Target // HasDefaults // @ game+0x22ddc4
};

