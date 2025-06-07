#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Audio_Component_Comp_Audio_Debug_Print_IsSimulatingPhysics {
#pragma pack(push, 1)
struct Comp_Audio_Debug_Print_IsSimulatingPhysics_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x10]; public:
    void* get_UberGraphFrame();
    bool get_Toggle_Object_Print();
    void set_Toggle_Object_Print(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ReceiveTick0(float DeltaSeconds);
    void EnableTick();
    void ExecuteUbergraph_Comp_Audio_Debug_Print_IsSimulatingPhysics(int32_t EntryPoint);
}; // Size: 0x180
#pragma pack(pop)
}
