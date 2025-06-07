#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_MediaAssets {
struct MediaSource;
}
namespace _Game_UI_SkillTree_UI_SkillTree_Main {
struct UI_SkillTree_Main_C;
}
namespace _Game_UI_SkillTree_UI_SkillTree_Node {
#pragma pack(push, 1)
struct UI_SkillTree_Node_C : public _Script_RsGameTechRT::RsUiButton {
    private: char pad_258[0x2f0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_SkillAvailableAnim3();
    _Script_UMG::WidgetAnimation*& get_NewSkillAvailable();
    _Script_UMG::WidgetAnimation*& get_SkillAvailableAnim();
    _Script_UMG::WidgetAnimation*& get_SkillPurchaseFailed();
    _Script_UMG::WidgetAnimation*& get_OnTutorialPurchase();
    _Script_UMG::WidgetAnimation*& get_OnLoad();
    _Script_UMG::WidgetAnimation*& get_OnSkillPurchased();
    _Script_UMG::Image*& get_DefaultBacking();
    _Script_UMG::Image*& get_Focus();
    _Script_UMG::Image*& get_Img_SkillIcon();
    _Script_UMG::Image*& get_Inner();
    _Script_UMG::Image*& get_LearnedBacking();
    _Script_UMG::Image*& get_LockIcon();
    _Script_UMG::Image*& get_Mid();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::Overlay*& get_Ripple();
    _Script_UMG::Image*& get_SkillAvailable();
    _Script_UMG::Image*& get_SkillAvailableBacking();
    _Script_UMG::Overlay*& get_SkillNode();
    _Script_UMG::Image*& get_SkillPurchaseGlow();
    _Script_UMG::Image*& get_SkillPurchaseRing();
    int32_t& get_SkillID();
    _Script_Engine::Texture2D*& get_SkillIcon();
    void* get_SkillName();
    void* get_SkillDesc();
    void* get_Clr_Learned();
    void* get_Clr_Available();
    void* get_Clr_Unavailable();
    bool get_IsSkillPurchased();
    void set_IsSkillPurchased(bool value);
    bool get_IsPrerequisiteMet();
    void set_IsPrerequisiteMet(bool value);
    int32_t& get_SkillPointsRequired();
    int32_t& get_CurrentSkillPoints();
    void* get_UpgradeFlag();
    void* get_Focused();
    void* get_Unfocused();
    bool get_IsAvailable();
    void set_IsAvailable(bool value);
    void* get_ST_SkillRow();
    void* get_SkillType();
    bool get_HasUnlockFlag();
    void set_HasUnlockFlag(bool value);
    void* get_CachedTableRow();
    bool get_NewVar_0();
    void set_NewVar_0(bool value);
    void* get_UI_Menu_State();
    _Script_Engine::Texture2D*& get_LearnedSkillIcon();
    _Script_MediaAssets::MediaPlayer*& get_AbilityVideo();
    _Script_MediaAssets::MediaPlayer*& get_SkillMediaPlayer();
    _Script_MediaAssets::MediaSource*& get_SkillVideo();
    void* get_PrimaryInput();
    void* get_SecondaryInput();
    void* get_Branches();
    bool get_UsesForce();
    void set_UsesForce(bool value);
    void* get_Decals();
    bool get_FirstTimeHasUnlockFlag();
    void set_FirstTimeHasUnlockFlag(bool value);
    bool get_IsGameMenu();
    void set_IsGameMenu(bool value);
    void* get_FanfareDesc();
    static _Script_CoreUObject::Class* static_class();
    void GetSkillTreeMain(_Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C*& UISkillTreeMain);
    void PlaySkillPurchaseAnimation();
    void GetCurrentSkillPoints(int32_t& SkillPoints);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Set_Available_State();
    void Set_Locked_State();
    void Set_Unavailable_State();
    void Set_Learned_State();
    void HandleSkillStates();
    void OnAccepted0();
    void OnFocused0();
    void OnUnfocused0();
    void Refresh();
    void Audio_Skill_Purchased();
    void PlayOnLoad();
    void PlayOnTutorialPurchase();
    void PlayOnFirstUnlock(void* Ability);
    void OnAnimationFinished_Event_0();
    void ExecuteUbergraph_UI_SkillTree_Node(int32_t EntryPoint);
}; // Size: 0x548
#pragma pack(pop)
}
