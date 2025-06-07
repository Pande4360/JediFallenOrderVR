#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_EventZones_Zone_MessageText {
#pragma pack(push, 1)
struct Zone_MessageText_C : public _Script_Engine::Actor {
    private: char pad_360[0xb8]; public:
    void* get_UberGraphFrame();
    _Script_Engine::TextRenderComponent*& get_TextRender();
    void* get_Text();
    float& get_Duration();
    bool get_CanInput();
    void set_CanInput(bool value);
    void* get_Button();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_0(_Script_InputCore::Key Key);
    void LVL_MessageOn();
    void LVL_MessageOff();
    void ExecuteUbergraph_Zone_MessageText(int32_t EntryPoint);
}; // Size: 0x418
#pragma pack(pop)
}
