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
struct Image;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct ScaleBox;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina {
struct HC_Stamina_C;
}
namespace _Script_RsGameTechRT {
struct RsHero;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Game_UI_UI_HUD_GripMeter {
#pragma pack(push, 1)
struct UI_HUD_GripMeter_C : public _Script_UMG::UserWidget {
    private: char pad_208[0xf0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_UXRTutorialPulse();
    _Script_UMG::WidgetAnimation*& get_BackingPulse();
    _Script_UMG::WidgetAnimation*& get_GuardBreak();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Script_UMG::WidgetAnimation*& get_Pulse();
    _Script_UMG::ProgressBar*& get_Backing();
    _Script_UMG::Image*& get_Backing2();
    _Script_UMG::SizeBox*& get_ButtonPrompt();
    _Script_UMG::Image*& get_Dot();
    _Script_UMG::Image*& get_Flash();
    _Script_UMG::Image*& get_Flash2();
    _Script_UMG::ProgressBar*& get_GreyBacking();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::TextBlock*& get_InteractText();
    _Script_UMG::Image*& get_L2_icon();
    _Script_UMG::ScaleBox*& get_ScaleBox_1();
    _Script_UMG::Image*& get_Stamina();
    _Script_UMG::CanvasPanel*& get_StaminaCanvas();
    _Script_UMG::Image*& get_StaminaDelta();
    _Script_UMG::Image*& get_StaminaEmpty();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C*& get_StaminaRef();
    float& get_StaminaCurrent();
    float& get_StaminaShadow();
    float& get_Delta();
    float& get_LowHealth();
    bool get_InCombat();
    void set_InCombat(bool value);
    _Script_RsGameTechRT::RsHero*& get_HeroRef();
    _Script_Engine::MaterialInstanceDynamic*& get_StaminaMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_StaminaShadowMaterial();
    bool get_IsStaminaPaused();
    void set_IsStaminaPaused(bool value);
    static _Script_CoreUObject::Class* static_class();
    void MaterialInstanceSetup();
    void GetStaminaShadow();
    float GetStamina();
    void Construct0();
    void Show(float Duration);
    void Hide();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void OnAnimationFinished_Event_0();
    void FadeOut();
    void GameStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState);
    void IsTutPulsing(bool IsPulsing);
    void UpdateScale(float Scale);
    void ExecuteUbergraph_UI_HUD_GripMeter(int32_t EntryPoint);
}; // Size: 0x2f8
#pragma pack(pop)
}
