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
struct VerticalBox;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Game_UI_UI_HUD_BossMeter {
struct UI_HUD_BossMeter_C;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Game_UI_UI_HUD_EnemyHealth {
#pragma pack(push, 1)
struct UI_HUD_EnemyHealth_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x1a0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    _Script_UMG::WidgetAnimation*& get_GuardBreak();
    _Script_UMG::VerticalBox*& get_BarVerticalBox();
    _Script_UMG::ProgressBar*& get_BlockBar();
    _Script_UMG::ProgressBar*& get_BlockDelta();
    _Script_UMG::ProgressBar*& get_BlockFlash();
    _Script_UMG::CanvasPanel*& get_BlockMeter();
    _Script_UMG::CanvasPanel*& get_BlockOffset();
    _Script_UMG::ProgressBar*& get_DamageDelta();
    _Script_UMG::ProgressBar*& get_DarkBacking();
    _Script_UMG::Image*& get_Flash2();
    _Script_UMG::ProgressBar*& get_HealthBar();
    _Script_UMG::CanvasPanel*& get_HealthBorder();
    _Script_UMG::CanvasPanel*& get_HealthMeter();
    _Script_UMG::CanvasPanel*& get_HealthOffset();
    _Script_UMG::Image*& get_HorizBar();
    _Script_UMG::CanvasPanel*& get_OuterFrame();
    float& get_ScrollRate();
    float& get_ScalingScrollRate();
    float& get_BarSizeSmall();
    float& get_BarSizeLarge();
    float& get_EnemyHealth();
    float& get_EnemyHealthCurrent();
    float& get_EnemyHealthShadow();
    float& get_bLock();
    float& get_BlockShadow();
    float& get_DamageTaken();
    float& get_BlockTemp();
    float& get_TempHealth();
    float& get_bLockTarget();
    float& get_TimeToFadeDeadBar();
    int32_t& get_NumberOfSwings();
    int32_t& get_HitsTaken();
    int32_t& get_KilledCount();
    int32_t& get_DeathCount();
    bool get_ShowGameStats();
    void set_ShowGameStats(bool value);
    bool get_IsHealing();
    void set_IsHealing(bool value);
    bool get_Boss();
    void set_Boss(bool value);
    bool get_BarFading();
    void set_BarFading(bool value);
    bool get_IsConstructed();
    void set_IsConstructed(bool value);
    bool get_IsDamaged();
    void set_IsDamaged(bool value);
    void* get_BossHealthColor();
    _Script_RsGameTechRT::RsAICharacter*& get_Char_REF();
    _Script_Engine::MaterialInstanceDynamic*& get_DamageShadowMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_EnemyHealthMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_EnemyStaminaMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_EnemyStaminaShadowMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_DarkBackingMaterial();
    void* get_TakingDamageEvent();
    _Script_Engine::MaterialInstanceDynamic*& get_BlockFlashMaterial();
    _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C*& get_BossMeter_REF();
    void* get_ColorRed();
    void* get_ColorGreen();
    bool get_BlockIsVisible();
    void set_BlockIsVisible(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ConstructButBetter();
    void RoundCornersRedrawLarge();
    void RedToGreen();
    void GetBlockDelta();
    void GetScalingScrollRate();
    void RoundCornersRedrawSmall();
    void GetHealthShadow();
    void MaterialInstanceSetup();
    float GetHealthBarPercentage();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void RemoveHealthbar();
    void TakingDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void Initialize(void* BlockVisibility, _Script_RsGameTechRT::RsAICharacter* Character, bool IsBoss);
    void HideHealthBarPermanently();
    void OnHUDVisibilityChanged(bool IsVisible);
    void OnPooledInit0();
    void OnPooledRelease0();
    void ReInitialize(void* BlockVisibility, _Script_RsGameTechRT::RsAICharacter* Character, bool IsBoss);
    void ExecuteUbergraph_UI_HUD_EnemyHealth(int32_t EntryPoint);
    void TakingDamageEvent__DelegateSignature();
}; // Size: 0x3a8
#pragma pack(pop)
}
