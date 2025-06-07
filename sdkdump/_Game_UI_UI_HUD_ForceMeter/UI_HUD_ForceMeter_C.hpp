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
struct ProgressBar;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_UMG {
struct Spacer;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Game_UI_HUD_UI_ForcePip {
struct UI_ForcePip_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Game_UI_UI_HUD_ForceMeter {
#pragma pack(push, 1)
struct UI_HUD_ForceMeter_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x178]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_ShadowFade();
    _Script_UMG::WidgetAnimation*& get_RegenForce();
    _Script_UMG::WidgetAnimation*& get_OnCast();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    _Script_UMG::WidgetAnimation*& get_Pulse();
    _Script_UMG::WidgetAnimation*& get_OutOfForce();
    _Script_UMG::ProgressBar*& get_ForceBar();
    _Script_UMG::ProgressBar*& get_ForceBarShadow();
    _Script_UMG::ProgressBar*& get_ForceFill();
    _Script_UMG::CanvasPanel*& get_ForceMeter();
    _Script_UMG::ProgressBar*& get_Glow();
    _Script_UMG::ProgressBar*& get_GreyFill();
    _Script_UMG::CanvasPanel*& get_MainContainer();
    _Script_UMG::Image*& get_MinLine();
    _Script_UMG::Spacer*& get_MinSpacer();
    _Script_UMG::ProgressBar*& get_OutOfForceFlash();
    _Script_UMG::HorizontalBox*& get_PipHorizontalBox();
    _Script_UMG::Image*& get_Pips2();
    _Script_UMG::ProgressBar*& get_PulseBar();
    _Script_UMG::ProgressBar*& get_RegenBar();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero_Reference();
    bool get_LowForce();
    void set_LowForce(bool value);
    bool get_IsTicking();
    void set_IsTicking(bool value);
    bool get_InCombat();
    void set_InCombat(bool value);
    bool get_IsRegenerating();
    void set_IsRegenerating(bool value);
    bool get_IsUpgrading();
    void set_IsUpgrading(bool value);
    float& get_Force();
    float& get_ForceShadow();
    float& get_ForceMax();
    float& get_ScrollRate();
    float& get_ScalingScrollRate();
    float& get_CurrentPips();
    float& get_MinRequiredForce();
    float& get_BarSizeX();
    float& get_BarSizeY();
    float& get_RegenTemp();
    float& get_SegmentSize();
    _Script_Engine::MaterialInstanceDynamic*& get_ForceMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_ForceShadowMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_ForceBarMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_GradientMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_GlowMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_PulseMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_RegenMaterial();
    _Game_UI_HUD_UI_ForcePip::UI_ForcePip_C*& get_ForcePipRef();
    void* get_ForceFadeIn();
    void* get_ForceFadeOut();
    void* get_ColorDeltaDark();
    void* get_ColorDeltaBright();
    float& get_DeltaCatchUpSpeed();
    static _Script_CoreUObject::Class* static_class();
    void RegenBarColorChange();
    void GetScalingScrollRate();
    void BarSetup();
    void MaterialInstanceSetup();
    void GetForceShadow();
    void GetForce();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void Construct0();
    void ForceInit();
    void ForceFailed();
    void GameStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState);
    void OnAnimationFinished_Event_0();
    void FadeOutEvent();
    void ForceChanged();
    void LVL_ForceFadeIn();
    void ForceConsumed();
    void ForceRegen();
    void AboveForceThreshold();
    void BelowForceThreshold();
    void LVL_ForceFadeOut();
    void LVL_UpgradeForceMeter();
    void ForceBarColorReset();
    void ExecuteUbergraph_UI_HUD_ForceMeter(int32_t EntryPoint);
    void ForceFadeOut__DelegateSignature();
    void ForceFadeIn__DelegateSignature();
}; // Size: 0x380
#pragma pack(pop)
}
