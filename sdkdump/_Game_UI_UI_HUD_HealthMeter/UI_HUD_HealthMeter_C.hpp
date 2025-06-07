#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_Engine {
struct Actor;
}
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
struct Border;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Game_UI_UI_HUD_HealthMeter {
#pragma pack(push, 1)
struct UI_HUD_HealthMeter_C : public _Script_UMG::UserWidget {
    private: char pad_208[0xf0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_OnHit();
    _Script_UMG::WidgetAnimation*& get_LowHealth();
    _Script_UMG::ProgressBar*& get_DamageDelta();
    _Script_UMG::ProgressBar*& get_Glow();
    _Script_UMG::ProgressBar*& get_GreyFill();
    _Script_UMG::ProgressBar*& get_HealDelta();
    _Script_UMG::ProgressBar*& get_HealthBar();
    _Script_UMG::Border*& get_HealthBorder();
    _Script_UMG::ProgressBar*& get_HealthFill();
    _Script_UMG::CanvasPanel*& get_HealthMeter();
    _Script_UMG::ProgressBar*& get_LowHealthBar();
    _Script_UMG::ProgressBar*& get_LowHealthFlash();
    void* get_Health();
    float& get_ScrollRate();
    float& get_ScalingScrollRate();
    float& get_LowHealthAmt();
    float& get_PlayerHealth();
    float& get_PlayerHealthShadowLinearEase();
    float& get_PlayerHealthShadow();
    float& get_DamageTaken();
    float& get_StartHealth();
    float& get_EndHealth();
    float& get_DamageDelayTime();
    bool get_IsHealing();
    void set_IsHealing(bool value);
    bool get_IsLowHealth();
    void set_IsLowHealth(bool value);
    bool get_IsDamaged();
    void set_IsDamaged(bool value);
    _Script_Engine::MaterialInstanceDynamic*& get_HealthMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_DamageShadowMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_HealShadowMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_LowHealthMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_LowHealthFlashMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_GlowMaterial();
    void* get_EnterLowHealth();
    void* get_ExitLowHealth();
    static _Script_CoreUObject::Class* static_class();
    void GetScalingScrollRate();
    void GetHealthShadow();
    void MaterialInstanceSetup();
    float GetHealth();
    void Construct0();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void HeroAddHealth();
    void TakingDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void DamageInit();
    void ExecuteUbergraph_UI_HUD_HealthMeter(int32_t EntryPoint);
    void ExitLowHealth__DelegateSignature();
    void EnterLowHealth__DelegateSignature();
}; // Size: 0x2f8
#pragma pack(pop)
}
