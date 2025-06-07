#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_Messages_UI_SkillTree_AbilityAcquire {
struct UI_SkillTree_AbilityAcquire_C;
}
namespace _Game_UI_SkillTree_UI_SkillTree_Node {
struct UI_SkillTree_Node_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_RsGameTechRT {
struct RsUiButton;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_RsTechRT {
struct RsLine;
}
namespace _Game_UI_Tutorials_UI_TutorialPopUp {
struct UI_TutorialPopUp_C;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_UI_SkillTree_UI_SkillTree_Branches {
struct UI_SkillTree_Branches_C;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_RsGameTechRT {
struct RsUiWindow;
}
namespace _Game_Models_Void_Void_World_BP_VoidWorldBranches {
struct BP_VoidWorldBranches_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_SkillTree_UI_SkillTree_Main {
#pragma pack(push, 1)
struct UI_SkillTree_Main_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x668]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_VideoBorderLoop();
    _Script_UMG::WidgetAnimation*& get_AbilityAcquireBackdrop();
    _Script_UMG::WidgetAnimation*& get_OnLoadGameMenu();
    _Script_UMG::WidgetAnimation*& get_PressSecondaryButtonAnimation();
    _Script_UMG::WidgetAnimation*& get_PressPrimaryButtonAnimation();
    _Script_UMG::WidgetAnimation*& get_CloseSkillVideo();
    _Script_UMG::WidgetAnimation*& get_OpenSkillVideo();
    _Script_UMG::WidgetAnimation*& get_HoldIndicatorAnim();
    _Script_UMG::WidgetAnimation*& get_OnCancelAnim();
    _Script_UMG::WidgetAnimation*& get_OnTutorialPurchase();
    _Script_UMG::WidgetAnimation*& get_TutorialFadeOut();
    _Script_UMG::WidgetAnimation*& get_TutorialFadeIn();
    _Script_UMG::WidgetAnimation*& get_OnLoad();
    _Script_UMG::TextBlock*& get__Text();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_101Leap();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_102LeapDist();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_104SprintAttack();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_105EvadeAttack();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_106DelaySaber();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_107DelayStaff();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_108AirFocus();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_110SaberFocus();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_111StaffFocus();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_112TransformStaff();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_113SaberThrow();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_114ThrowUpgrade();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_116DmgUp();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_1FocusAttack();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_201ForceMeter();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_202ForceMeter();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_203ForceMeter();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_204ForceGain();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_205SlowUp1();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_206SlowUp2();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_207PushUp1();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_208Push2();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_210PullUp1();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_211Pull2();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_212FocusHeal();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_301HealthUp();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_302HealthUp2();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_303HealthUp3();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_304EffectiveHeal1();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_305EffectiveHeal2();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_306BlockUp();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_307Deflect();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_309JediEvade();
    _Game_UI_Messages_UI_SkillTree_AbilityAcquire::UI_SkillTree_AbilityAcquire_C*& get_AbilityAcquire();
    _Script_UMG::Image*& get_AbilityBackdrop();
    _Script_UMG::ProgressBar*& get_Backing();
    _Script_UMG::TextBlock*& get_BackText();
    _Script_UMG::Border*& get_Border_1();
    _Script_UMG::HorizontalBox*& get_ButtonTray();
    _Script_UMG::TextBlock*& get_ForceTitle();
    _Script_UMG::Overlay*& get_GameMenuOnly();
    _Script_UMG::Image*& get_HoldIndicator();
    _Script_UMG::TextBlock*& get_HoldText();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::TextBlock*& get_Label_SkillName();
    _Script_UMG::TextBlock*& get_LearnText();
    _Script_UMG::TextBlock*& get_LightsaberTitle();
    _Script_UMG::Overlay*& get_Overlay_1();
    _Script_UMG::Image*& get_OverlaySolid();
    _Script_UMG::Image*& get_PipLeft();
    _Script_UMG::Image*& get_PipRight();
    _Script_UMG::TextBlock*& get_Plural();
    _Script_UMG::WidgetSwitcher*& get_PointSwitcher();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PrimaryInput();
    _Script_UMG::Image*& get_ProgressCircle();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::RetainerBox*& get_RetainerBox_2();
    _Script_UMG::RetainerBox*& get_RetainerBox_4();
    _Script_UMG::RetainerBox*& get_RetainerBox_5();
    _Script_RsTechRT::RsLine*& get_RsLine_2();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_SecondaryInput();
    _Script_UMG::TextBlock*& get_Singular();
    _Script_UMG::TextBlock*& get_SkillCategory();
    _Script_UMG::TextBlock*& get_SkillDescription();
    _Script_UMG::SizeBox*& get_SkillDescriptions();
    _Script_UMG::ProgressBar*& get_SkillPointBar();
    _Script_UMG::CanvasPanel*& get_SkillPointProgress();
    _Script_UMG::TextBlock*& get_SkillPointsRequired();
    _Script_UMG::TextBlock*& get_SkillPointsText();
    _Script_UMG::TextBlock*& get_SkillPointsTextBacking();
    _Script_UMG::CanvasPanel*& get_Skills();
    _Script_UMG::CanvasPanel*& get_SkillTree();
    _Script_UMG::Image*& get_SkillTreeBranchesInactive();
    _Script_UMG::Border*& get_SkillVideo();
    _Script_UMG::Overlay*& get_SkillVideoContainer();
    _Script_UMG::TextBlock*& get_SurvivalText();
    _Script_UMG::TextBlock*& get_TextBlock_0();
    _Script_UMG::TextBlock*& get_TextBlock_1();
    _Script_UMG::TextBlock*& get_TextBlock_3();
    _Script_UMG::TextBlock*& get_TextBlock_7();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_0();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_3();
    _Game_UI_SkillTree_UI_SkillTree_Branches::UI_SkillTree_Branches_C*& get_UI_SkillTree_Branches();
    _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& get_UI_TutorialPopUp();
    _Script_UMG::HorizontalBox*& get_UnlockButton();
    _Script_UMG::TextBlock*& get_UnspentForcePoints();
    _Script_UMG::TextBlock*& get_UsesForce();
    _Script_UMG::Image*& get_VideoBorder();
    _Script_UMG::HorizontalBox*& get_ViewAbilityButton();
    _Script_UMG::TextBlock*& get_ViewAbilityText();
    int32_t& get_CurrentSkillPoints();
    bool get_FirstTimeSavePoint();
    void set_FirstTimeSavePoint(bool value);
    bool get_HasSpentSkillPointBefore();
    void set_HasSpentSkillPointBefore(bool value);
    void* get_SkillInfo();
    void* get_E_SkillPurchased();
    void* get_E_SkillWindowOpened();
    void* get_E_TutorialPurchaseSuccess();
    void* get_E_SkillWindowClosed();
    bool get_IsSkillPurchased();
    void set_IsSkillPurchased(bool value);
    bool get_IsPrerequisiteMet();
    void set_IsPrerequisiteMet(bool value);
    bool get_HasUnlockFlag();
    void set_HasUnlockFlag(bool value);
    int32_t& get_SkillPointsRequire();
    int32_t& get_SkillID();
    void* get_SkillType();
    void* get_LoadOutFlag();
    bool get_Animate();
    void set_Animate(bool value);
    float& get_SkillBranchAnimate();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_SkillTreeNode();
    void* get_E_NormalFlow();
    _Script_Engine::MaterialInstanceDynamic*& get_SkillPointMaterial();
    float& get_PPVBlendAnimate();
    float& get_VoidLineworkAnimate();
    float& get_DividerLineAnimate();
    _Script_MediaAssets::MediaPlayer*& get_SkillVideoPlayer();
    float& get_SkillVideoOpacity();
    float& get_SkillBranchAnimateTarget();
    float& get_VoidLineAnimateTarget();
    bool get_SkillVideoIsOpen();
    void set_SkillVideoIsOpen(bool value);
    float& get_SkillVideoOpacityTarget();
    _Script_RsGameTechRT::RsUiWindow*& get_ParentWindow();
    _Script_UMG::HorizontalBox*& get_ViewAbilityButton_0();
    void* get_HeroUpgrades();
    bool get_IsGameMenu();
    void set_IsGameMenu(bool value);
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_SkillNode();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_FocusedButton();
    float& get_HoldProgress();
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_AllSkillNodes();
    _Script_UMG::Image*& get_BackgroundSolid();
    _Game_Models_Void_Void_World_BP_VoidWorldBranches::BP_VoidWorldBranches_C*& get_VoidWorldBranches();
    bool get_IsTutorial();
    void set_IsTutorial(bool value);
    void* get_UI_StyleSheet();
    void* get_E_OnFirstUnlocks();
    bool get_IsCelebrationPlaying();
    void set_IsCelebrationPlaying(bool value);
    static _Script_CoreUObject::Class* static_class();
    void FocusDecals(_Script_RsGameTechRT::RsUiButton* FocusedButton);
    void FocusBranches(_Script_RsGameTechRT::RsUiButton* FocusedButton);
    void SetDecals();
    void SetText();
    void ShowAbilityAcquire(_Script_RsGameTechRT::RsUiButton* AcceptedButton);
    void HandleHasHoldText(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C* SkillNode);
    void SetupMaterialInstance();
    void SetBranches();
    void GetCurrentSkillP:oints(int32_t& SkillPoints);
    void UpdateMenu(_Script_RsGameTechRT::RsUiButton* FocusedButton);
    void RunTutorialFlow();
    void TutorialCheck();
    void CustomEvent_1();
    void OnCancel();
    void BndEvt__OnCancelAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void OpenAbilityVideo();
    void HandleErrorAnimation();
    void OnFocusChanged(_Script_RsGameTechRT::RsUiButton* NewFocusedButton);
    void OnAccepted(_Script_RsGameTechRT::RsUiButton* AcceptedButton);
    void OnWindowOpened();
    void Initialize(_Script_RsGameTechRT::RsUiWindow* ParentWindow);
    void UpdateBranchFocusState(_Script_RsGameTechRT::RsUiButton* FocusedButton);
    void CancelAbilityAcquireAnimation();
    void OnAnimationFinished_Event_0();
    void ExecuteUbergraph_UI_SkillTree_Main(int32_t EntryPoint);
    void E_OnFirstUnlocks__DelegateSignature(void* Ability);
    void E_NormalFlow__DelegateSignature();
    void E_SkillWindowClosed__DelegateSignature();
    void E_TutorialPurchaseSuccess__DelegateSignature();
    void E_SkillWindowOpened__DelegateSignature();
    void E_SkillPurchased__DelegateSignature();
}; // Size: 0x870
#pragma pack(pop)
}
