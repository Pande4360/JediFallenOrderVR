#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct BackgroundBlur;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge {
struct HC_Revenge_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_HUD_XP_HorizontalBar {
#pragma pack(push, 1)
struct UI_HUD_XP_HorizontalBar_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x160]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Revenge();
    _Script_UMG::WidgetAnimation*& get_NewSkillPointCelebration();
    _Script_UMG::WidgetAnimation*& get_ColorChange();
    _Script_UMG::WidgetAnimation*& get_FadeInOut();
    _Script_UMG::Image*& get_Backing();
    _Script_UMG::BackgroundBlur*& get_blurbox();
    _Script_UMG::Image*& get_darken();
    _Script_UMG::Image*& get_Diagonal();
    _Script_UMG::ProgressBar*& get_DummyBar();
    _Script_UMG::Image*& get_EndcapLeft();
    _Script_UMG::ProgressBar*& get_GreyFill();
    _Script_UMG::ProgressBar*& get_HealthFill();
    _Script_UMG::Image*& get_HorizBottom();
    _Script_UMG::Image*& get_HorizTop();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_OrbitLine();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::CanvasPanel*& get_RevengeCanvas();
    _Script_UMG::Image*& get_RingInner();
    _Script_UMG::Image*& get_RingMid();
    _Script_UMG::Image*& get_RingOuter();
    _Script_UMG::TextBlock*& get_SkillPointAmountText();
    _Script_UMG::Image*& get_Strip();
    _Script_UMG::TextBlock*& get_TxtAbility();
    _Script_UMG::ProgressBar*& get_XP_Bar();
    _Script_UMG::ProgressBar*& get_XP_DeltaBar();
    _Script_UMG::ProgressBar*& get_XP_Glow();
    _Script_UMG::HorizontalBox*& get_XP_Popup();
    float& get_XP_ProgressPercent();
    float& get_XP_ProgressPercentOld();
    float& get_XP_Delta();
    float& get_ScrollRate();
    float& get_ScalingScrollRate();
    int32_t& get_UnspentForcePoints();
    int32_t& get_UnspentForcePointsOld();
    bool get_IsTicking();
    void set_IsTicking(bool value);
    bool get_IsResetZeroTicking();
    void set_IsResetZeroTicking(bool value);
    bool get_InCombat();
    void set_InCombat(bool value);
    bool get_PointAwarded();
    void set_PointAwarded(bool value);
    _Script_Engine::MaterialInstanceDynamic*& get_BarMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_CircularBackingMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_CircularOutlineMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_BarGlowMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_BarDeltaMaterial();
    void* get_TickXPHandle();
    void* get_DeltaBarColor();
    _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C*& get_HC_RevengeRef();
    _Script_Engine::MaterialInstanceDynamic*& get_BarDummyMaterial();
    bool get_IsRevengeXP();
    void set_IsRevengeXP(bool value);
    bool get_IsCatchingUp();
    void set_IsCatchingUp(bool value);
    static _Script_CoreUObject::Class* static_class();
    void StopAllTick();
    void ForcePointCheck();
    bool AnimationCheck();
    void GetScalingScrollRate();
    void GetXP_Delta();
    void GetXP();
    void MaterialInstanceSetup();
    void Construct();
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void NewXPGain(bool IsRevenge);
    void ForcePointAwarded();
    void FadeOut();
    void ResetXPZero();
    void ShowXPUI();
    void HideXPUI();
    void ForcePointSpent(int32_t CurrentUnspentForcePoints);
    void ExecuteUbergraph_UI_HUD_XP_HorizontalBar(int32_t EntryPoint);
}; // Size: 0x768
#pragma pack(pop)
}
