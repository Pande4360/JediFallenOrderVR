#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TargetPoint.hpp"
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger {
#pragma pack(push, 1)
struct LookAt_Trigger_C : public _Script_Engine::TargetPoint {
    private: char pad_360[0x40]; public:
    void* get_UberGraphFrame();
    _Script_Engine::TextRenderComponent*& get_Debug_Text();
    void* get_LVL_LookingAt();
    void* get_LVL_UnLookAt();
    bool get_Active_();
    void set_Active_(bool value);
    bool get_TriggerOnce_();
    void set_TriggerOnce_(bool value);
    float& get_Range();
    bool get_looking();
    void set_looking(bool value);
    bool get_Debug();
    void set_Debug(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void LVL_SetActive(bool Active_);
    void ExecuteUbergraph_LookAt_Trigger(int32_t EntryPoint);
    void LVL_UnLookAt__DelegateSignature();
    void LVL_LookingAt__DelegateSignature();
}; // Size: 0x3a0
#pragma pack(pop)
}
