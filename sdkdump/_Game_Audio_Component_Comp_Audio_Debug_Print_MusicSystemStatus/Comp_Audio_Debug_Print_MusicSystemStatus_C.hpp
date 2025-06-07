#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus {
#pragma pack(push, 1)
struct Comp_Audio_Debug_Print_MusicSystemStatus_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x28]; public:
    void* get_UberGraphFrame();
    bool get_ToggleMusicPrint();
    void set_ToggleMusicPrint(bool value);
    void* get_PrintedBusName();
    bool get_Print_Priority();
    void set_Print_Priority(bool value);
    bool get_IsTickEnabled();
    void set_IsTickEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ReceiveTick0(float DeltaSeconds);
    void EnableTick();
    void ExecuteUbergraph_Comp_Audio_Debug_Print_MusicSystemStatus(int32_t EntryPoint);
}; // Size: 0x198
#pragma pack(pop)
}
