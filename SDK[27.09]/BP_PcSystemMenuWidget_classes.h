// WidgetBlueprintGeneratedClass BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C
// Size: 0x7e8 (Inherited: 0x700)
struct UBP_PcSystemMenuWidget_C : U*f653452603 {
	struct F*73a77c28fa UberGraphFrame; // 0x700(0x08)
	struct U*6b11b3bf02* GuideConsoleFocusList; // 0x708(0x08)
	struct U*6b11b3bf02* GuideConsoleNormalFocusSystemMenu; // 0x710(0x08)
	struct U*6b11b3bf02* GuideReportPopup; // 0x718(0x08)
	struct U*6b11b3bf02* VanishingAnim; // 0x720(0x08)
	struct U*6b11b3bf02* EmergingAnim; // 0x728(0x08)
	struct UImage* BackgroundGradient; // 0x730(0x08)
	struct UImage* BG; // 0x738(0x08)
	struct UBackgroundBlur* Blur; // 0x740(0x08)
	struct U*cceb91eeec* ButtonTos; // 0x748(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* ExitToDesktopButton; // 0x750(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* KeyGuideButton; // 0x758(0x08)
	struct UBP_GamepadKeyIconWidget_C* KeyIconRB_Left; // 0x760(0x08)
	struct U*3bbae755be* KeyIconRB_Left_PlatformSwitcher; // 0x768(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* LeaveMatchButton; // 0x770(0x08)
	struct UCanvasPanel* MainCanvasPanel; // 0x778(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* MatchLogButton; // 0x780(0x08)
	struct UImage* OutGame_PanImage; // 0x788(0x08)
	struct UButton* RatingsButton; // 0x790(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* RestartLobbyButton; // 0x798(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* ResumeButton; // 0x7a0(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* SettingsButton; // 0x7a8(0x08)
	struct U*3bbae755be* SwitcherKeyIconTos; // 0x7b0(0x08)
	struct UBorder* SystemMenuBorder; // 0x7b8(0x08)
	struct UVerticalBox* SystemMenuVerticalBox; // 0x7c0(0x08)
	struct U*3bbae755be* TslUniversalInputVisibilitySwitcher_5; // 0x7c8(0x08)
	struct UUI_TeamManagementAndMissionList_C* UI_TeamManagementAndMissionList; // 0x7d0(0x08)
	struct UTextBlock* VersionInfoText; // 0x7d8(0x08)
	struct F*9c84e0ea54 BlockKeyBindingTimer; // 0x7e0(0x08)

	bool PanelConstruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.PanelConstruct // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool CheckIfCompetitiveMode(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.CheckIfCompetitiveMode // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x22ddc4
	bool CheckLeaveGameStatus(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.CheckLeaveGameStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x22ddc4
	bool QuitToDesktop(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.QuitToDesktop // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool GotoLobby(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.GotoLobby // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool EnableMenuButtons(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.EnableMenuButtons // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool OnVanishingAnimFinished(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.OnVanishingAnimFinished // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool HideWidget(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.HideWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void Construct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void Destruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	enum class ESystemMenuButtonType NotifySystemMenuEnter(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifySystemMenuEnter // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void Custom Event_1(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Custom Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	float Custom Event_2(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Custom Event_2 // BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool NotifyEnableMenuButtons(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyEnableMenuButtons // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void NotifyHideWidget(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyHideWidget // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void BndEvt__RatingsButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RatingsButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void ToggleRBPos(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.ToggleRBPos // BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool PreConstruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.PreConstruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_42_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_42_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_124_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_124_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_174_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_174_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void BndEvt__MatchLogButton_K2Node_ComponentBoundEvent_239_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__MatchLogButton_K2Node_ComponentBoundEvent_239_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_302_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_302_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_365_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_365_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	void BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_428_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_428_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x22ddc4
	bool ExecuteUbergraph_BP_PcSystemMenuWidget(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.ExecuteUbergraph_BP_PcSystemMenuWidget // HasDefaults // @ game+0x22ddc4
};

