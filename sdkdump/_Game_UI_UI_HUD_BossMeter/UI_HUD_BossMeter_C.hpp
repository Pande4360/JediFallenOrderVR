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
namespace _Game_UI_UI_HUD_EnemyHealth {
struct UI_HUD_EnemyHealth_C;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
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
namespace _Game_UI_UI_HUD_BossMeter {
#pragma pack(push, 1)
struct UI_HUD_BossMeter_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0xd0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Intro();
    _Script_UMG::WidgetAnimation*& get_RecoverHP();
    _Script_UMG::WidgetAnimation*& get_OnHit();
    _Script_UMG::CanvasPanel*& get_BossMeter();
    _Script_UMG::TextBlock*& get_BossName();
    _Script_UMG::CanvasPanel*& get_Canvas_All();
    _Script_UMG::CanvasPanel*& get_Canvas_Bars();
    _Script_UMG::ProgressBar*& get_DamageDelta();
    _Script_UMG::ProgressBar*& get_DrawLine();
    _Script_UMG::ProgressBar*& get_Glow();
    _Script_UMG::ProgressBar*& get_GreyFill();
    _Script_UMG::ProgressBar*& get_HealthBar();
    _Script_UMG::ProgressBar*& get_HealthFill();
    _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C*& get_UI_HUD_EnemyHealth();
    float& get_ScalingScrollRate();
    float& get_BuildinHealth();
    float& get_BossHealth();
    float& get_BossShadow();
    bool get_IsDamaged();
    void set_IsDamaged(bool value);
    bool get_IsBuildingIn();
    void set_IsBuildingIn(bool value);
    void* get_BossHealthShadowColor();
    void* get_BossHealthColor();
    _Script_Engine::MaterialInstanceDynamic*& get_Health_Material();
    _Script_Engine::MaterialInstanceDynamic*& get_DamageShadowMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_GlowMaterial();
    _Script_RsGameTechRT::RsAICharacter*& get_CharRef();
    static _Script_CoreUObject::Class* static_class();
    void Build();
    void GetScalingScrollRate();
    void GetBossHealthShadow();
    void MaterialInstanceSetup();
    void BossNameSelect();
    void Construct();
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void RemoveHealthbar();
    void OnWindowOpened0();
    void OnHUDVisibilityChanged(bool IsVisible);
    void TakingDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void BuildIn();
    void ExecuteUbergraph_UI_HUD_BossMeter(int32_t EntryPoint);
}; // Size: 0x6d8
#pragma pack(pop)
}
